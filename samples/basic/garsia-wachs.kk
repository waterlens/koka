/* Based on the paper:
   "A Functional Implementation of the Garsia–Wachs Algorithm", by Jean-Christophe Filliatre
   <https://www.lri.fr/~filliatr/publis/gw-wml08.pdf>
   This shows how effect types can safely encapsulate the mutating algorithm.
*/

pub fun main()
  test().println


//----------------------------------------------------
// Trees
//----------------------------------------------------
type tree<a>
  Leaf(value : a)
  Node(left : tree<a>, right : tree<a>)


fun show( t : tree<string> ) : string
  match t
    Leaf(s)   -> s.show
    Node(l,r) -> "Node(" ++ l.show ++ "," ++ r.show ++ ")"


//----------------------------------------------------
// Non empty lists
//----------------------------------------------------
pub type list1<a>
  Cons1( head : a, tail : list<a> )


fun map( xs, f )
  val Cons1(y,ys) = xs
  Cons1(f(y), core/map(ys,f))


fun zip( xs :list1<a>, ys :list1<b> ) : list1<(a,b)>
  Cons1( (xs.head, ys.head), zip(xs.tail, ys.tail))



//----------------------------------------------------
// Phase 1
//----------------------------------------------------

fun insert( after : list<(tree<a>,int)>, t : (tree<a>,int), before : list<(tree<a>,int)> ) : div tree<a>
  match before
    Nil -> extract( [], Cons1(t,after) )
    Cons(x,xs) ->
      if x.snd < t.snd then insert( Cons(x,after), t, xs ) else
        match xs
          Nil        -> extract( [], Cons1(x,Cons(t,after)) )
          Cons(y,ys) -> extract( ys, Cons1(y,Cons(x,Cons(t,after))) )


fun extract( before : list<(tree<a>,int)>, after : list1<(tree<a>,int)> ) : div tree<a>
  val Cons1(x as (t1,w1), xs ) = after
  match xs
    Nil -> t1
    Cons(y as (t2,w2), ys) -> match ys
      Nil -> insert( [], (Node(t1,t2), w1+w2), before )
      Cons((_,w3),_zs) ->
        if (w1 <= w3)
          then insert(ys, (Node(t1,t2), w1+w2), before)
          else extract(Cons(x,before), Cons1(y,ys))


fun balance( xs : list1<(tree<a>,int)> ) : div tree<a>
  extract( [], xs )


fun mark( depth : int, t : tree<(a,ref<h,int>)> ) : <write<h>> ()
  match t
    Leaf((_,d)) -> d := depth
    Node(l,r)   -> { mark(depth+1,l); mark(depth+1,r) }


fun build( depth : int, xs : list1<(a,ref<h,int>)> ) : <read<h>,div> (tree<a>,list<(a,ref<h,int>)>)
  if !xs.head.snd == depth return (Leaf(xs.head.fst), xs.tail)
  val l = build(depth+1, xs)
  match l.snd
    Nil -> (l.fst, Nil)
    Cons(y,ys) ->
      val r = build(depth+1, Cons1(y,ys))
      (Node(l.fst,r.fst), r.snd)


fun test()
  val wlist = Cons1(("a",3), [("b",2),("c",1),("d",4),("e",5)])
  val tree  = wlist.garciawachs()
  tree.show()  


fun garciawachs( xs : list1<(a,int)> ) : div tree<a>
  val refs   = xs.map( fn((x,_)) (x,ref(0)) )
  val wleafs = zip( refs.map(Leaf), xs.map(snd) )
  val tree   = balance(wleafs)
  mark(0,tree)
  build(0,refs).fst


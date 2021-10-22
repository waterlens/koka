#pragma once
#ifndef kk_test_float_bench2_H
#define kk_test_float_bench2_H
// Koka generated module: "test/float/bench2", koka version: 2.3.2, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"
#include "std_core.h"

// type declarations

// type test/float/bench2/.hnd-bra
struct kk_test_float_bench2__hnd_bra_s {
  kk_block_t _block;
};
typedef struct kk_test_float_bench2__hnd_bra_s* kk_test_float_bench2__hnd_bra;
struct kk_test_float_bench2__Hnd_bra {
  struct kk_test_float_bench2__hnd_bra_s _base;
  kk_std_core_hnd__clause0 fun_brara;
};
static inline kk_test_float_bench2__hnd_bra kk_test_float_bench2__base_Hnd_bra(struct kk_test_float_bench2__Hnd_bra* _x){
  return &_x->_base;
}
static inline kk_test_float_bench2__hnd_bra kk_test_float_bench2__new_Hnd_bra(kk_reuse_t _at, kk_std_core_hnd__clause0 fun_brara, kk_context_t* _ctx){
  struct kk_test_float_bench2__Hnd_bra* _con = kk_block_alloc_at_as(struct kk_test_float_bench2__Hnd_bra, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->fun_brara = fun_brara;
  return kk_test_float_bench2__base_Hnd_bra(_con);
}
static inline struct kk_test_float_bench2__Hnd_bra* kk_test_float_bench2__as_Hnd_bra(kk_test_float_bench2__hnd_bra x) {
  return kk_basetype_as_assert(struct kk_test_float_bench2__Hnd_bra*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_test_float_bench2__is_Hnd_bra(kk_test_float_bench2__hnd_bra x) {
  return (true);
}
static inline kk_test_float_bench2__hnd_bra kk_test_float_bench2__hnd_bra_dup(kk_test_float_bench2__hnd_bra _x) {
  return kk_basetype_dup_as(kk_test_float_bench2__hnd_bra, _x);
}
static inline void kk_test_float_bench2__hnd_bra_drop(kk_test_float_bench2__hnd_bra _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline bool kk_test_float_bench2__hnd_bra_is_unique(kk_test_float_bench2__hnd_bra _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_test_float_bench2__hnd_bra_free(kk_test_float_bench2__hnd_bra _x) {
  kk_basetype_free(_x);
}
static inline void kk_test_float_bench2__hnd_bra_decref(kk_test_float_bench2__hnd_bra _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_test_float_bench2__hnd_bra_dropn_reuse(kk_test_float_bench2__hnd_bra _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_test_float_bench2__hnd_bra_dropn(kk_test_float_bench2__hnd_bra _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_test_float_bench2__hnd_bra_reuse(kk_test_float_bench2__hnd_bra _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_test_float_bench2__hnd_bra kk_test_float_bench2__hnd_bra_hole() {
  return (kk_test_float_bench2__hnd_bra)(1);
}
static inline kk_box_t kk_test_float_bench2__hnd_bra_box(kk_test_float_bench2__hnd_bra _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_test_float_bench2__hnd_bra kk_test_float_bench2__hnd_bra_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_test_float_bench2__hnd_bra, _x);
}

// type test/float/bench2/.hnd-count
struct kk_test_float_bench2__hnd_count_s {
  kk_block_t _block;
};
typedef struct kk_test_float_bench2__hnd_count_s* kk_test_float_bench2__hnd_count;
struct kk_test_float_bench2__Hnd_count {
  struct kk_test_float_bench2__hnd_count_s _base;
  kk_std_core_hnd__clause1 fun_one;
  kk_std_core_hnd__clause1 fun_two;
};
static inline kk_test_float_bench2__hnd_count kk_test_float_bench2__base_Hnd_count(struct kk_test_float_bench2__Hnd_count* _x){
  return &_x->_base;
}
static inline kk_test_float_bench2__hnd_count kk_test_float_bench2__new_Hnd_count(kk_reuse_t _at, kk_std_core_hnd__clause1 fun_one, kk_std_core_hnd__clause1 fun_two, kk_context_t* _ctx){
  struct kk_test_float_bench2__Hnd_count* _con = kk_block_alloc_at_as(struct kk_test_float_bench2__Hnd_count, _at, 2 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->fun_one = fun_one;
  _con->fun_two = fun_two;
  return kk_test_float_bench2__base_Hnd_count(_con);
}
static inline struct kk_test_float_bench2__Hnd_count* kk_test_float_bench2__as_Hnd_count(kk_test_float_bench2__hnd_count x) {
  return kk_basetype_as_assert(struct kk_test_float_bench2__Hnd_count*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_test_float_bench2__is_Hnd_count(kk_test_float_bench2__hnd_count x) {
  return (true);
}
static inline kk_test_float_bench2__hnd_count kk_test_float_bench2__hnd_count_dup(kk_test_float_bench2__hnd_count _x) {
  return kk_basetype_dup_as(kk_test_float_bench2__hnd_count, _x);
}
static inline void kk_test_float_bench2__hnd_count_drop(kk_test_float_bench2__hnd_count _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline bool kk_test_float_bench2__hnd_count_is_unique(kk_test_float_bench2__hnd_count _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_test_float_bench2__hnd_count_free(kk_test_float_bench2__hnd_count _x) {
  kk_basetype_free(_x);
}
static inline void kk_test_float_bench2__hnd_count_decref(kk_test_float_bench2__hnd_count _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_test_float_bench2__hnd_count_dropn_reuse(kk_test_float_bench2__hnd_count _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_test_float_bench2__hnd_count_dropn(kk_test_float_bench2__hnd_count _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_test_float_bench2__hnd_count_reuse(kk_test_float_bench2__hnd_count _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_test_float_bench2__hnd_count kk_test_float_bench2__hnd_count_hole() {
  return (kk_test_float_bench2__hnd_count)(1);
}
static inline kk_box_t kk_test_float_bench2__hnd_count_box(kk_test_float_bench2__hnd_count _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_test_float_bench2__hnd_count kk_test_float_bench2__hnd_count_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_test_float_bench2__hnd_count, _x);
}

// type test/float/bench2/bra
struct kk_test_float_bench2__bra_s {
  kk_block_t _block;
};
typedef struct kk_test_float_bench2__bra_s* kk_test_float_bench2__bra;
struct kk_test_float_bench2_Bra {
  struct kk_test_float_bench2__bra_s _base;
  kk_test_float_bench2__hnd_bra _field1;
};
static inline kk_test_float_bench2__bra kk_test_float_bench2__base_Bra(struct kk_test_float_bench2_Bra* _x){
  return &_x->_base;
}
static inline kk_test_float_bench2__bra kk_test_float_bench2__new_Bra(kk_reuse_t _at, kk_test_float_bench2__hnd_bra _field1, kk_context_t* _ctx){
  struct kk_test_float_bench2_Bra* _con = kk_block_alloc_at_as(struct kk_test_float_bench2_Bra, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->_field1 = _field1;
  return kk_test_float_bench2__base_Bra(_con);
}
static inline struct kk_test_float_bench2_Bra* kk_test_float_bench2__as_Bra(kk_test_float_bench2__bra x) {
  return kk_basetype_as_assert(struct kk_test_float_bench2_Bra*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_test_float_bench2__is_Bra(kk_test_float_bench2__bra x) {
  return (true);
}
static inline kk_test_float_bench2__bra kk_test_float_bench2__bra_dup(kk_test_float_bench2__bra _x) {
  return kk_basetype_dup_as(kk_test_float_bench2__bra, _x);
}
static inline void kk_test_float_bench2__bra_drop(kk_test_float_bench2__bra _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline bool kk_test_float_bench2__bra_is_unique(kk_test_float_bench2__bra _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_test_float_bench2__bra_free(kk_test_float_bench2__bra _x) {
  kk_basetype_free(_x);
}
static inline void kk_test_float_bench2__bra_decref(kk_test_float_bench2__bra _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_test_float_bench2__bra_dropn_reuse(kk_test_float_bench2__bra _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_test_float_bench2__bra_dropn(kk_test_float_bench2__bra _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_test_float_bench2__bra_reuse(kk_test_float_bench2__bra _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_test_float_bench2__bra kk_test_float_bench2__bra_hole() {
  return (kk_test_float_bench2__bra)(1);
}
static inline kk_box_t kk_test_float_bench2__bra_box(kk_test_float_bench2__bra _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_test_float_bench2__bra kk_test_float_bench2__bra_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_test_float_bench2__bra, _x);
}

// type test/float/bench2/count
struct kk_test_float_bench2__count_s {
  kk_block_t _block;
};
typedef struct kk_test_float_bench2__count_s* kk_test_float_bench2__count;
struct kk_test_float_bench2_Count {
  struct kk_test_float_bench2__count_s _base;
  kk_test_float_bench2__hnd_count _field1;
};
static inline kk_test_float_bench2__count kk_test_float_bench2__base_Count(struct kk_test_float_bench2_Count* _x){
  return &_x->_base;
}
static inline kk_test_float_bench2__count kk_test_float_bench2__new_Count(kk_reuse_t _at, kk_test_float_bench2__hnd_count _field1, kk_context_t* _ctx){
  struct kk_test_float_bench2_Count* _con = kk_block_alloc_at_as(struct kk_test_float_bench2_Count, _at, 1 /* scan count */, (kk_tag_t)(1), _ctx);
  _con->_field1 = _field1;
  return kk_test_float_bench2__base_Count(_con);
}
static inline struct kk_test_float_bench2_Count* kk_test_float_bench2__as_Count(kk_test_float_bench2__count x) {
  return kk_basetype_as_assert(struct kk_test_float_bench2_Count*, x, (kk_tag_t)(1) /* _tag */);
}
static inline bool kk_test_float_bench2__is_Count(kk_test_float_bench2__count x) {
  return (true);
}
static inline kk_test_float_bench2__count kk_test_float_bench2__count_dup(kk_test_float_bench2__count _x) {
  return kk_basetype_dup_as(kk_test_float_bench2__count, _x);
}
static inline void kk_test_float_bench2__count_drop(kk_test_float_bench2__count _x, kk_context_t* _ctx) {
  kk_basetype_drop(_x, _ctx);
}
static inline bool kk_test_float_bench2__count_is_unique(kk_test_float_bench2__count _x) {
  return kk_basetype_is_unique(_x);
}
static inline void kk_test_float_bench2__count_free(kk_test_float_bench2__count _x) {
  kk_basetype_free(_x);
}
static inline void kk_test_float_bench2__count_decref(kk_test_float_bench2__count _x, kk_context_t* _ctx) {
  kk_basetype_decref(_x, _ctx);
}
static inline kk_reuse_t kk_test_float_bench2__count_dropn_reuse(kk_test_float_bench2__count _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  return kk_basetype_dropn_reuse(_x, _scan_fsize, _ctx);
}
static inline void kk_test_float_bench2__count_dropn(kk_test_float_bench2__count _x, kk_ssize_t _scan_fsize, kk_context_t* _ctx) {
  kk_basetype_dropn(_x, _scan_fsize, _ctx);
}
static inline kk_reuse_t kk_test_float_bench2__count_reuse(kk_test_float_bench2__count _x) {
  return kk_basetype_reuse(_x);
}
static inline kk_test_float_bench2__count kk_test_float_bench2__count_hole() {
  return (kk_test_float_bench2__count)(1);
}
static inline kk_box_t kk_test_float_bench2__count_box(kk_test_float_bench2__count _x, kk_context_t* _ctx) {
  return kk_basetype_box(_x);
}
static inline kk_test_float_bench2__count kk_test_float_bench2__count_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_basetype_unbox_as(kk_test_float_bench2__count, _x);
}

// value declarations

extern kk_std_core_hnd__htag kk_test_float_bench2__tag_bra;

kk_box_t kk_test_float_bench2__handle_bra(int32_t cfc, kk_test_float_bench2__hnd_bra hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (cfc : int32, hnd : .hnd-bra<e,b>, ret : (res : a) -> e b, action : () -> <bra|e> a) -> e b */ 

extern kk_std_core_hnd__htag kk_test_float_bench2__tag_count;

kk_box_t kk_test_float_bench2__handle_count(int32_t cfc, kk_test_float_bench2__hnd_count hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (cfc : int32, hnd : .hnd-count<e,b>, ret : (res : a) -> e b, action : () -> <count|e> a) -> e b */ 
 
// select `brara` operation out of the `:bra` effect handler

static inline kk_std_core_hnd__clause0 kk_test_float_bench2__select_brara(kk_test_float_bench2__hnd_bra hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-bra<e,a>) -> std/core/hnd/clause0<(),.hnd-bra,e,a> */ 
  {
    struct kk_test_float_bench2__Hnd_bra* _con1092 = kk_test_float_bench2__as_Hnd_bra(hnd);
    kk_std_core_hnd__clause0 fun_brara = _con1092->fun_brara;
    if (kk_likely(kk_test_float_bench2__hnd_bra_is_unique(hnd))) {
      kk_test_float_bench2__hnd_bra_free(hnd);
    }
    else {
      kk_std_core_hnd__clause0_dup(fun_brara);
      kk_test_float_bench2__hnd_bra_decref(hnd, _ctx);
    }
    return fun_brara;
  }
}
 
// select `one` operation out of the `:count` effect handler

static inline kk_std_core_hnd__clause1 kk_test_float_bench2__select_one(kk_test_float_bench2__hnd_count hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-count<e,a>) -> std/core/hnd/clause1<int,int,.hnd-count,e,a> */ 
  {
    struct kk_test_float_bench2__Hnd_count* _con1093 = kk_test_float_bench2__as_Hnd_count(hnd);
    kk_std_core_hnd__clause1 fun_one = _con1093->fun_one;
    kk_std_core_hnd__clause1 _pat0 = _con1093->fun_two;
    if (kk_likely(kk_test_float_bench2__hnd_count_is_unique(hnd))) {
      kk_std_core_hnd__clause1_drop(_pat0, _ctx);
      kk_test_float_bench2__hnd_count_free(hnd);
    }
    else {
      kk_std_core_hnd__clause1_dup(fun_one);
      kk_test_float_bench2__hnd_count_decref(hnd, _ctx);
    }
    return fun_one;
  }
}
 
// select `two` operation out of the `:count` effect handler

static inline kk_std_core_hnd__clause1 kk_test_float_bench2__select_two(kk_test_float_bench2__hnd_count hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : .hnd-count<e,a>) -> std/core/hnd/clause1<int,int,.hnd-count,e,a> */ 
  {
    struct kk_test_float_bench2__Hnd_count* _con1094 = kk_test_float_bench2__as_Hnd_count(hnd);
    kk_std_core_hnd__clause1 _pat0 = _con1094->fun_one;
    kk_std_core_hnd__clause1 fun_two = _con1094->fun_two;
    if (kk_likely(kk_test_float_bench2__hnd_count_is_unique(hnd))) {
      kk_std_core_hnd__clause1_drop(_pat0, _ctx);
      kk_test_float_bench2__hnd_count_free(hnd);
    }
    else {
      kk_std_core_hnd__clause1_dup(fun_two);
      kk_test_float_bench2__hnd_count_decref(hnd, _ctx);
    }
    return fun_two;
  }
}
 
// call `brara` operation of the `:bra` effect

static inline kk_unit_t kk_test_float_bench2_brara(kk_context_t* _ctx) { /* () -> bra () */ 
  kk_std_core_hnd__ev ev_778;
  kk_ssize_t _x1095 = ((kk_ssize_t)0); /*ssize_t*/
  ev_778 = kk_evv_at(_x1095,kk_context()); /*std/core/hnd/ev<test/float/bench2/.hnd-bra>*/
  kk_box_t _x1096;
  {
    struct kk_std_core_hnd_Ev* _con1097 = kk_std_core_hnd__as_Ev(ev_778);
    kk_std_core_hnd__marker m0 = _con1097->marker;
    kk_box_t _box_x850 = _con1097->hnd;
    kk_test_float_bench2__hnd_bra h = kk_test_float_bench2__hnd_bra_unbox(_box_x850, NULL);
    kk_test_float_bench2__hnd_bra_dup(h);
    kk_std_core_hnd__clause0 _match_1085 = kk_test_float_bench2__select_brara(h, _ctx); /*std/core/hnd/clause0<(),test/float/bench2/.hnd-bra,187,188>*/;
    {
      kk_function_t _fun_unbox_x853 = _match_1085.clause;
      _x1096 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x853, (_fun_unbox_x853, m0, ev_778, _ctx)); /*1006*/
    }
  }
  kk_unit_unbox(_x1096); return kk_Unit;
}

kk_unit_t kk_test_float_bench2_k(kk_context_t* _ctx); /* () -> bra () */ 
 
// call `one` operation of the `:count` effect

static inline kk_integer_t kk_test_float_bench2_one(kk_integer_t a, kk_context_t* _ctx) { /* (a : int) -> count int */ 
  kk_std_core_hnd__ev ev_782;
  kk_ssize_t _x1103 = ((kk_ssize_t)0); /*ssize_t*/
  ev_782 = kk_evv_at(_x1103,kk_context()); /*std/core/hnd/ev<test/float/bench2/.hnd-count>*/
  kk_box_t _x1104;
  {
    struct kk_std_core_hnd_Ev* _con1105 = kk_std_core_hnd__as_Ev(ev_782);
    kk_std_core_hnd__marker m0 = _con1105->marker;
    kk_box_t _box_x862 = _con1105->hnd;
    kk_test_float_bench2__hnd_count h = kk_test_float_bench2__hnd_count_unbox(_box_x862, NULL);
    kk_test_float_bench2__hnd_count_dup(h);
    kk_std_core_hnd__clause1 _match_1083 = kk_test_float_bench2__select_one(h, _ctx); /*std/core/hnd/clause1<int,int,test/float/bench2/.hnd-count,204,205>*/;
    {
      kk_function_t _fun_unbox_x866 = _match_1083.clause;
      _x1104 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x866, (_fun_unbox_x866, m0, ev_782, kk_integer_box(a), _ctx)); /*1011*/
    }
  }
  return kk_integer_unbox(_x1104);
}

kk_integer_t kk_test_float_bench2_one__(kk_integer_t a, kk_context_t* _ctx); /* (a : int) -> count int */ 
 
// call `two` operation of the `:count` effect

static inline kk_integer_t kk_test_float_bench2_two(kk_integer_t a, kk_context_t* _ctx) { /* (a : int) -> count int */ 
  kk_std_core_hnd__ev ev_788;
  kk_ssize_t _x1115 = ((kk_ssize_t)0); /*ssize_t*/
  ev_788 = kk_evv_at(_x1115,kk_context()); /*std/core/hnd/ev<test/float/bench2/.hnd-count>*/
  kk_box_t _x1116;
  {
    struct kk_std_core_hnd_Ev* _con1117 = kk_std_core_hnd__as_Ev(ev_788);
    kk_std_core_hnd__marker m0 = _con1117->marker;
    kk_box_t _box_x880 = _con1117->hnd;
    kk_test_float_bench2__hnd_count h = kk_test_float_bench2__hnd_count_unbox(_box_x880, NULL);
    kk_test_float_bench2__hnd_count_dup(h);
    kk_std_core_hnd__clause1 _match_1081 = kk_test_float_bench2__select_two(h, _ctx); /*std/core/hnd/clause1<int,int,test/float/bench2/.hnd-count,221,222>*/;
    {
      kk_function_t _fun_unbox_x884 = _match_1081.clause;
      _x1116 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__marker, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x884, (_fun_unbox_x884, m0, ev_788, kk_integer_box(a), _ctx)); /*1011*/
    }
  }
  return kk_integer_unbox(_x1116);
}

kk_integer_t kk_test_float_bench2_two__(kk_integer_t a, kk_context_t* _ctx); /* (a : int) -> count int */ 

kk_integer_t kk_test_float_bench2_f(kk_context_t* _ctx); /* () -> div int */ 

static inline kk_integer_t kk_test_float_bench2_main(kk_context_t* _ctx) { /* () -> div int */ 
  return kk_test_float_bench2_f(_ctx);
}

void kk_test_float_bench2__init(kk_context_t* _ctx);


void kk_test_float_bench2__done(kk_context_t* _ctx);

#endif // header
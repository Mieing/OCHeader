@class RelaxEngine;

@interface NativeLayoutProxy : NSObject {
    RelaxEngine *_runtime;
    struct unique_ptr<relax::NativeLayoutProxy, std::default_delete<relax::NativeLayoutProxy>> { struct NativeLayoutProxy *__ptr_; } _impl;
    struct weak_ptr<relax::ElementManager> { struct ElementManager *__ptr_; struct __shared_weak_count *__cntrl_; } _weakElementManager;
}

+ (void)DestroyAllNodes;
+ (void)InsertNodeBefore:(int)a0 child:(int)a1 ref:(int)a2;
+ (void)RemoveLayoutNode:(int)a0 child:(int)a1;
+ (void)DestroyLayoutNode:(int)a0;
+ (void)MarkLayoutNodeDirty:(int)a0;
+ (void)SetMeasureFunc:(int)a0 callback:(id /* block */)a1;
+ (void)UpdateSingleLayoutStyle:(int)a0 style:(int)a1 value:(double)a2 pattern:(int)a3;
+ (void)UpdateLayoutArrayStyle:(int)a0 style:(int)a1 values:(id)a2 patterns:(id)a3;
+ (void)CreateFlex:(int)a0;
+ (void)CreateColumn:(int)a0;
+ (void)CreateRow:(int)a0;
+ (void)CreateGrid:(int)a0;
+ (void)CreateLinear:(int)a0;
+ (void)CreateStack:(int)a0;
+ (long long)GetLayoutContext;
+ (void)CreateRoot:(int)a0;
+ (id)GetCurrentDirtyIdsWithCustomMeasure;
+ (id)StartLayout:(id)a0;
+ (BOOL)SyncRootConstraint:(double)a0 widthMode:(int)a1 height:(double)a2 heightMode:(int)a3;
+ (void)CreateLayoutNode:(int)a0 name:(id)a1;
+ (void)UpdateLayoutStyle:(int)a0 styles:(id)a1 values:(id)a2 patterns:(id)a3;

- (void)DestroyAllNodes;
- (void)InsertNodeBefore:(int)a0 child:(int)a1 ref:(int)a2;
- (void)RemoveLayoutNode:(int)a0 child:(int)a1;
- (void)DestroyLayoutNode:(int)a0;
- (void)MarkLayoutNodeDirty:(int)a0;
- (void)SetMeasureFunc:(int)a0 callback:(id /* block */)a1;
- (void)UpdateSingleLayoutStyle:(int)a0 style:(int)a1 value:(double)a2 pattern:(int)a3;
- (void)UpdateLayoutArrayStyle:(int)a0 style:(int)a1 values:(id)a2 patterns:(id)a3;
- (void)CreateFlex:(int)a0;
- (void)CreateColumn:(int)a0;
- (void)CreateRow:(int)a0;
- (void)CreateGrid:(int)a0;
- (void)CreateLinear:(int)a0;
- (void)CreateStack:(int)a0;
- (long long)GetLayoutContext;
- (void)CreateRoot:(int)a0;
- (id)GetCurrentDirtyIdsWithCustomMeasure;
- (id)StartLayout:(id)a0;
- (BOOL)SyncRootConstraint:(double)a0 widthMode:(int)a1 height:(double)a2 heightMode:(int)a3;
- (void)CreateLayoutNode:(int)a0 name:(id)a1;
- (void)UpdateLayoutStyle:(int)a0 styles:(id)a1 values:(id)a2 patterns:(id)a3;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)detach;
- (void)dealloc;

@end

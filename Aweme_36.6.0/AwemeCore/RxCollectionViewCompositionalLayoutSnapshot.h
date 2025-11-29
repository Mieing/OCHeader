@class RxCollectionViewLayoutInvalidationContext, RxCollectionCompositionalLayoutSolver, __RxDataSourceSnapshotter;

@interface RxCollectionViewCompositionalLayoutSnapshot : NSObject {
    RxCollectionCompositionalLayoutSolver *_solver;
    __RxDataSourceSnapshotter *_dataSourceSnapshotter;
    RxCollectionViewLayoutInvalidationContext *_memoizedInvalidationContext;
    __RxDataSourceSnapshotter *_memoizedDataSourceSnapshotter;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _memoizedPreviousLayoutMargins;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _memoizedDynamicAnimatorWorldAdjustingInset;
    struct CGSize { double width; double height; } _memoizedPreviousInvalidationCollectionViewBoundsSize;
}

- (void)applyToLayout:(id)a0;
- (void).cxx_destruct;
- (id)initWithLayout:(id)a0;

@end

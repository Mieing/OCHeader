@class UIView;

@interface GCViewHolderCellModel : GCBaseCellModel

@property (retain, nonatomic) UIView *targetView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;

- (id)initWithTargetView:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForCollectionView:(id)a0;
- (id)cellReuseIdentifier;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end

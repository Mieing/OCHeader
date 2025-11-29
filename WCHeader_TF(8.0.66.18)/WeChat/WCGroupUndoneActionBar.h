@class CAGradientLayer, NSString, UICollectionView, NSMutableArray;
@protocol WCGroupUndoneActionDelegate;

@interface WCGroupUndoneActionBar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCGroupUndoneItemCellDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CAGradientLayer *leftGradientLayer;
@property (retain, nonatomic) CAGradientLayer *rightGradientLayer;
@property (weak, nonatomic) id<WCGroupUndoneActionDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *undoneItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)reloadGradientLayer;
- (void)updateUndoneItem:(id)a0;
- (void)removeUndoneItem:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)onCloseUndoneCell:(id)a0;
- (void)onClickUndoneCell:(id)a0;
- (void)onCompleteUndoneCell:(id)a0;
- (void)onRevokeUndoneCell:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end

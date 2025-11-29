@class AFDStoryDiverseDiggBaseModel, NSString, UICollectionView;
@protocol AFDStoryDiverseDiggBottomBarViewDelegate;

@interface AFDStoryDiverseDiggBottomBarView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AFDStoryDiverseDiggBaseModel *model;
@property (weak, nonatomic) id<AFDStoryDiverseDiggBottomBarViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)normalLikeCell;
- (void)didShowFastReplyInputView;
- (void)didShowDiverseDiggWithModel:(id)a0;
- (void)didClickShareBtnWithModel:(id)a0;
- (void)didClickFastReplyWithModel:(id)a0;
- (void)didClickDiverseDiggWithModel:(id)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (void)didClickNormalLikeWithModel:(id)a0 cell:(id)a1;
- (void)didShowNormalLikeBtnWithModel:(id)a0;
- (void)stopAllVisibleCellAnimations;
- (void)startAllVisibleCellAnimations;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end

@class NSString, AFDStoryDiverseDiggBaseModel, AFDStoryDiverseDiggElementCollectionView, UIView;
@protocol AFDStoryDiverseDiggElementViewDelegate;

@interface AFDStoryDiverseDiggElementView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) AFDStoryDiverseDiggElementCollectionView *collectionView;
@property (retain, nonatomic) AFDStoryDiverseDiggBaseModel *model;
@property (retain, nonatomic) UIView *hostView;
@property (weak, nonatomic) id<AFDStoryDiverseDiggElementViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showBubbleForFirstCellIfNeeded;
- (void)didShowFastReplyInputView;
- (void)didShowDiverseDiggWithModel:(id)a0;
- (void)didClickFastReplyWithModel:(id)a0;
- (void)didClickDiverseDiggWithModel:(id)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (long long)p_firstDiverseDiggIndex;
- (BOOL)p_canShowMessageInputView:(id)a0;
- (void)startAllVisibleCellAnimations;
- (void)stopAllVisibleCellAnimations;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
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
- (void)reset;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end

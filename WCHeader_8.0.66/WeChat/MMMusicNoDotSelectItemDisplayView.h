@class MMMusicNoDotSelectItemView, NSString, MMMusicNoDotSelectItemDisplayViewCustomLayout, UICollectionView, MMMusicNoDotSelectItemDisplayViewBgView;
@protocol MMMusicNoDotSelectItemDisplayViewDataSource, MMMusicNoDotSelectItemDisplayViewDelegate;

@interface MMMusicNoDotSelectItemDisplayView : MMUIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MMMusicNoDotSelectItemViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) MMMusicNoDotSelectItemDisplayViewCustomLayout *collectionViewLayout;
@property (retain, nonatomic) MMMusicNoDotSelectItemView *curSelectedItemView;
@property (retain, nonatomic) MMMusicNoDotSelectItemDisplayViewBgView *bgView;
@property (nonatomic) BOOL isInLongSelectedStatus;
@property (weak, nonatomic) id<MMMusicNoDotSelectItemDisplayViewDataSource> dataSource;
@property (weak, nonatomic) id<MMMusicNoDotSelectItemDisplayViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initData;
- (void)initView;
- (double)cellCount;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (id)collectionView:(id)a0 targetIndexPathForMoveFromItemAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (void)handleAddSelectedItem:(id)a0;
- (void)handleRemoveSelectedItemWithIndex:(unsigned long long)a0;
- (void)layoutSubviews;
- (void)reload:(BOOL)a0;
- (double)getContentInterSpacing;
- (double)getContentLineSpacing;
- (double)getContentTopOffset;
- (double)getContentBottomOffset;
- (double)getContentRightOffset;
- (double)getDisplayItemLen;
- (double)getBgViewLeftWithItemCount:(unsigned long long)a0 itemSize:(struct CGSize { double x0; double x1; })a1 itemMargin:(double)a2 itemInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;
- (id)selectedItemViewModels;
- (void)changeBgViewWithAnimation:(double)a0 delay:(double)a1;
- (void)mmMusicNoDotSelectItemView:(id)a0 onDeleteBtnClicked:(id)a1;
- (void)addLongGesture;
- (void)handleLongGesture:(id)a0;
- (BOOL)checkIsValidForLongSelected:(id)a0;
- (void)updateSelectedDataLongSelectedDragStatusAndReload:(BOOL)a0;
- (void).cxx_destruct;

@end

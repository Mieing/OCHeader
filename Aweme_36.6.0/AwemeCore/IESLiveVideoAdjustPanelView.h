@class NSString, UICollectionView, IESLiveAnchorCustomRangeSlider, UIView, UIButton;
@protocol IESLiveVideoAdjustPanelViewDelegate, IESLiveVideoAdjustPanelViewDataSource;

@interface IESLiveVideoAdjustPanelView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, IESLiveVideoAdjustPanelItemCellDatasource>

@property (retain, nonatomic) UIView *adjustView;
@property (retain, nonatomic) IESLiveAnchorCustomRangeSlider *slider;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *categoryBottomSeparator;
@property (retain, nonatomic) UICollectionView *categoryCollectionView;
@property (retain, nonatomic) UICollectionView *contentCollectionView;
@property (retain, nonatomic) UICollectionView *adjustTabCollectionView;
@property (retain, nonatomic) UIButton *resetButton;
@property (weak, nonatomic) id<IESLiveVideoAdjustPanelViewDataSource> datasource;
@property (weak, nonatomic) id<IESLiveVideoAdjustPanelViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configSubviews;
- (void)configContentView;
- (void)configSlider:(id)a0;
- (void)refreshResetButtonStatus;
- (void)enableResetButton:(BOOL)a0;
- (void)configContentCollectionView;
- (void)configCategoryCollectionView;
- (void)onCategoryDidSelected:(id)a0;
- (double)categoryCellWidthForTitle:(id)a0;
- (void)reloadDataWithCategoryIndex:(long long)a0 itemIndexPath:(id)a1;
- (id)itemCell:(id)a0 ModelAtIndex:(long long)a1;
- (BOOL)itemCell:(id)a0 isDefaultValueAtIndex:(long long)a1;
- (void)configAdjustView;
- (void)configResetButton;
- (void)configCategoryBottomSeparator;
- (void)resetButtonClicked:(id)a0;
- (id)currentBeautyItem;
- (void)loadCategoryForCategoryCell:(id)a0 indexPath:(id)a1;
- (void)onItemDidSelected:(id)a0;
- (void)onAdjustTabSelected:(id)a0;
- (void)removeAdjustViewIfNeed;
- (void)configAdjustView:(id)a0;
- (void)refreshNotDefaultValueDotStatus;
- (id)itemModelForIndex:(long long)a0;
- (void)configAdjustCollectionView:(id)a0;
- (void)onResetButtonClicked;
- (id)currentBeautyItemList;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;

@end

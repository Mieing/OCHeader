@class UIView, AWESearchPOIFilterManager, NSString, UICollectionViewFlowLayout, AWEDoubleColumnSearchMerchandiseFilterRenderInfoModel, NSMutableDictionary, AWEGradientView, UICollectionView;
@protocol AWESearchPOIFilterItemViewDelegate;

@interface AWESearchPOIFilterItemView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWEMerchandiseComponentBaseCellDelegate, AWESearchPOIDefaultCellDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterRenderInfoModel *model;
@property (retain, nonatomic) AWESearchPOIFilterManager *filterManager;
@property (retain, nonatomic) NSMutableDictionary *supportComponentDic;
@property (nonatomic) double normalFilterItemWidth;
@property (nonatomic) double miniSpace;
@property (retain, nonatomic) AWEGradientView *bgGradientView;
@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) BOOL widthNeedAdapter;
@property (nonatomic) double adapterWidth;
@property (weak, nonatomic) id<AWESearchPOIFilterItemViewDelegate> delegate;
@property (nonatomic) BOOL isFilterNotRank0;
@property (nonatomic) BOOL isOnlySupportLightMode;
@property (nonatomic) BOOL needGradientBg;
@property (nonatomic) BOOL isQuickFilterItemView;
@property (nonatomic) BOOL isRefreshingSelectingState;
@property (nonatomic) BOOL showBottomLineView;
@property (nonatomic) BOOL itemViewDidDisplay;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (nonatomic) BOOL isUpdateByBrief;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0 filterManager:(id)a1;
- (void)calculateMiniSpace;
- (void)calculateAdapterWidth;
- (double)cellWidthWithModel:(id)a0;
- (BOOL)componentBaseCell:(id)a0 isSelectingForItemModel:(id)a1;
- (void)registCollectionViewCells;
- (id)bgGradientEndColor;
- (void)componentCell:(id)a0 widthNeedChangeWithFilterComponentModel:(id)a1;
- (void)triggerVisibleCellsDisplay;
- (void)calculateNormalFilterItemWidth;
- (void)configTopCorners:(double)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end

@class UIView, NSString, AWEEcomSearchTabBar, AWEDoubleColumnSearchMerchandiseFilterManager, AWESearchPhotoResultsContentTopAreaContainerView, AWEMerchandiseComponentView, UICollectionView, AWESearchPhotoSearchResultsPlaceholderViewController;

@interface AWEEcomImageSearchResultsContentView : UIView <AWESearchInlayScrollPanelContentViewProtocol, AWESearchPhotoContentResultProtocol>

@property (retain, nonatomic) UIView *indictorBar;
@property (retain, nonatomic) AWESearchPhotoSearchResultsPlaceholderViewController *placeholderVC;
@property (retain, nonatomic) AWESearchPhotoResultsContentTopAreaContainerView *topAreaContainer;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager *filterManager;
@property (nonatomic) double lastYOffset;
@property (nonatomic) double topAreaContainerOuterHeight;
@property (nonatomic) BOOL settedGradientLayer;
@property (retain, nonatomic) AWEEcomSearchTabBar *tabBar;
@property (retain, nonatomic) AWEMerchandiseComponentView *sortFilterView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ reloadButtonClickCallback;
@property (nonatomic) BOOL hideTopRoundCorner;
@property (nonatomic) double adaptFilterHeight;
@property (copy, nonatomic) NSString *searchEntrance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isFromEcomLivePanel;
@property (nonatomic, getter=isInSevenPage) BOOL inSevenPage;

- (void)configUI;
- (void)feedDidScroll:(id)a0;
- (void)adaptFilterViewWith:(id)a0 indicator:(BOOL)a1;
- (void)setIndicatorBarHidden:(BOOL)a0;
- (void)handleTopAreaPanGesture:(id)a0;
- (void)feedDidScrollWithTopArea:(id)a0;
- (void)offsetDidChanged:(double)a0;
- (void)updateSortFilterComponent:(id)a0 width:(double)a1 hideIndicator:(BOOL)a2;
- (void)updateTopAreaWithModel:(id)a0 searchInfoDict:(id)a1;
- (void)clearTopArea;
- (void)updateTabBar:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 builder:(id /* block */)a1;
- (void)setupCachalotViewGradientLayer:(double)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)contentScrollView;
- (void)layoutSubviews;
- (void)setPlaceholderState:(unsigned long long)a0;

@end

@class UIView, NSString, NSArray, AWEDoubleColumnSearchMerchandiseFilterRenderInfoModel, AWEDoubleColumnSearchMerchandiseFilterManager, NSDictionary, AWEMerchandiseComponentItemView, AWEMerchandiseComponentTabBar;

@interface AWEMerchandiseComponentItemWithTabBar : AWEMerchandiseComponentItemView <AWEMerchandiseComponentItemViewDelegate, AWEMerchandiseComponentTabBarDelegate>

@property (retain, nonatomic) AWEMerchandiseComponentTabBar *tabBar;
@property (retain, nonatomic) AWEMerchandiseComponentItemView *rightItemView;
@property (retain, nonatomic) AWEMerchandiseComponentItemView *leftItemView;
@property (retain, nonatomic) UIView *underline;
@property (retain, nonatomic) UIView *leftItemViewGradientView;
@property (nonatomic) struct { NSArray *tabs; NSDictionary *tabsTypeDict; NSDictionary *redPointShowDict; NSString *selectedTab; unsigned long long filterTabType; } tabViewConfig;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterRenderInfoModel *renderInfoModel;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager *filterManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSearchInfoDict:(id)a0;
- (void)sendRefreshRequestWithSearchQueryParmas:(id)a0;
- (void)afterLayoutFirstPageRealDataWithContext:(id)a0;
- (void)configWithModel:(id)a0 filterManager:(id)a1;
- (void)componentItemView:(id)a0 didSelectTabWithTabType:(id)a1;
- (void)componentItemView:(id)a0 didSelectItemWithFilterComponentModel:(id)a1;
- (BOOL)componentItemView:(id)a0 isSelectingWithItemModel:(id)a1;
- (void)refreshFilterSectionWithAnimatedTransition:(id)a0;
- (void)configRightItemView;
- (void)configLeftItemView;
- (void)configTabBar;
- (void)configUnderline;
- (id)rightItemsFilterRenderInfoModel;
- (double)rightItemsWidth;
- (double)leftItemsWidth;
- (id)leftItemsFilterRenderInfoModel;
- (void)configLeftItemViewGradientView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tabBarConfig:(struct { id x0; id x1; id x2; id x3; unsigned long long x4; })a1;
- (void)reloadData;
- (void).cxx_destruct;
- (BOOL)hasTabBar;
- (void)setDelegate:(id)a0;
- (double)minimumLineSpacing;

@end

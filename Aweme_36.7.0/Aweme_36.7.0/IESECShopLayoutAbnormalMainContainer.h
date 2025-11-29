@class IESECPagerView, IESECShopLayoutBaseContainer, IESECServiceProxy, NSString;
@protocol IESECShopThemeService, IESECShopForwardCoService, IESECShopStateService;

@interface IESECShopLayoutAbnormalMainContainer : IESECShopLayoutBaseContainer <IESECShopLayoutBaseContainerDelegate>

@property (retain, nonatomic) IESECShopLayoutBaseContainer *splitContainer;
@property (weak, nonatomic) IESECPagerView *pagerView;
@property (retain, nonatomic) IESECShopLayoutBaseContainer *pagerContainer;
@property (retain, nonatomic) IESECShopLayoutBaseContainer *decorationContainer;
@property (retain, nonatomic) IESECShopLayoutBaseContainer *profileContainer;
@property (retain, nonatomic) IESECShopLayoutBaseContainer *tabContentContainer;
@property (retain, nonatomic) IESECShopLayoutBaseContainer *navigationContainer;
@property (retain, nonatomic) IESECShopLayoutBaseContainer *floatContainer;
@property (retain, nonatomic) IESECShopLayoutBaseContainer *popupContainer;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *stateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopThemeService> *themeService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardCoService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pagerContainerDidBindView:(id)a0 viewType:(id)a1 layoutItem:(id)a2;
- (void)decorationContainerDidBindView:(id)a0 viewType:(id)a1 layoutItem:(id)a2;
- (void)profileContainerDidBindView:(id)a0 viewType:(id)a1 layoutItem:(id)a2;
- (void)navigationContainerDidBindView:(id)a0 viewType:(id)a1 layoutItem:(id)a2;
- (void)pagerContainerDidLayoutSubviews:(id)a0;
- (void)pagerContainerDidAddChildContainer:(id)a0;
- (unsigned long long)pagerContainerTargetIdxForContainerViewType:(id)a0;
- (id)pagerContainerParentLayoutContainerViewForViewType:(id)a0;
- (void)layoutPagerViewWithContainerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutContainer:(id)a0 didBindView:(id)a1 viewType:(id)a2 layoutItem:(id)a3;
- (void)layoutContainerDidLayoutSubviews:(id)a0;
- (void)layoutContainer:(id)a0 didAddChildContainer:(id)a1;
- (unsigned long long)layoutContainer:(id)a0 targetIdxForContainerViewType:(id)a1;
- (id)layoutContainer:(id)a0 parentLayoutContainerViewForViewType:(id)a1;
- (double)topBarLeftMargin;
- (double)topBarRightMargin;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;

@end

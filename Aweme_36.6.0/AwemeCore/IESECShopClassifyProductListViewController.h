@class NSMutableDictionary, IESECShopGoodsEventHandler, UILabel, IESECQualityInfoV2, IESECShopClassRouterParams, UIButton, UIView, IESECSlidingTabbarView, NSString, IESECShopGoodsCategoryModel, IESECShopGoodsDataController, IESECShopGoodsState, IESECSlidingTabContainerView;

@interface IESECShopClassifyProductListViewController : UIViewController <IESECTabContainerDataSource, IESECTabContainerDelegate, IESECSlidingTabbarLayoutDelegate, IESECSlidingTabbarDelegate, IESECShopClassificationViewControllerProtocol> {
    BOOL _isFirstAppear;
}

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *navBgView;
@property (retain, nonatomic) UIView *goodsSectionView;
@property (retain, nonatomic) IESECSlidingTabbarView *tabView;
@property (retain, nonatomic) IESECShopGoodsCategoryModel *model;
@property (retain, nonatomic) NSMutableDictionary *tabVCDictionary;
@property (nonatomic) long long tabStyle;
@property (retain, nonatomic) IESECSlidingTabContainerView *tabContainerView;
@property (retain, nonatomic) IESECShopGoodsState *state;
@property (retain, nonatomic) IESECShopGoodsEventHandler *eventHandler;
@property (retain, nonatomic) IESECQualityInfoV2 *qualityInfo;
@property (nonatomic) BOOL shouldShopProductSharedManualManage;
@property (retain, nonatomic) IESECShopClassRouterParams *shopClassRouterParams;
@property (retain, nonatomic) IESECShopGoodsDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ indexChanged;

- (void)bindViewModel:(id)a0;
- (void)configBtmTrackerV2;
- (void)configBtmTracker;
- (id)initWithContext:(id)a0 container:(id)a1;
- (BOOL)ttHideNavigationBar;
- (id)tabContainer:(id)a0 tabViewElementForIndex:(long long)a1;
- (void)tabContainer:(id)a0 willMoveToIndex:(long long)a1 withTabElement:(id)a2;
- (void)tabContainer:(id)a0 didMoveToIndex:(long long)a1 withTabElement:(id)a2;
- (id)initWithContext:(id)a0 contextV2:(id)a1 container:(id)a2;
- (void)handleBackButtonClick:(id)a0;
- (void)handleSearchButtonClick:(id)a0;
- (void)showSecondaryPage;
- (void)stateDidAttach:(id)a0;
- (void)willDataFirstLoad;
- (void)didDataFirstLoad;
- (void)startFirstRender;
- (void)endFirstRender;
- (void)configureStateWithPageContext:(id)a0 contextV2:(id)a1 container:(id)a2;
- (id)iesec_ViewControllerValueForKey:(id)a0;
- (id)configCategoryViewController:(id)a0;
- (void)setupVCForIndex:(long long)a0;
- (void)filterItemExposed:(id)a0 tabMaker:(id)a1;
- (id)modelFromFilterSection:(id)a0;
- (void)filterItemSwitched:(id)a0 tabMaker:(id)a1;
- (void)attachStateToObject:(id)a0;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)configureSubviews;

@end

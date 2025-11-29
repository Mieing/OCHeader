@class CAGradientLayer, NSString, UIImageView, IESECServiceProxy;
@protocol IESECShopTopTabService, IESECShopLayoutService, IESECShopStateService, IESECShopDataService, IESECShopLiveService, IESECShopForwardCoService;

@interface IESECShopFrameworkBrandController : IESECShopControllerV2 <IESECShopEventSubscriber>

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) CAGradientLayer *bgGradientLayer;
@property (retain, nonatomic) UIImageView *splitBgImageView;
@property (retain, nonatomic) CAGradientLayer *splitBgGradientLayer;
@property (nonatomic) BOOL isBrandShopV2;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLiveService> *liveService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *stateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopTopTabService> *topTabService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardCoService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)controllerShouldLoadWithPageContextV2:(id)a0;

- (void)setupBindings;
- (void)didSetPageContextV2:(id)a0;
- (void)controllerDidLoad;
- (void)iesecshop_pagerView:(id)a0 mainScrollViewDidScroll:(id)a1;
- (void)iesecshop_didSelectTopTabItem:(id)a0;
- (void)configPagerView;
- (void)configTopTabView;
- (void)configSevenSplitViews;
- (id)bgGradientInitialColors;
- (void)setBgGradientColors:(id)a0;
- (void)updateBgImage:(id)a0;
- (void)configTabContainerView;
- (void)foldProfileViewIfNeeded:(id)a0;
- (void)animateBgGradient:(id)a0;
- (id)bgGradientFinalColors;
- (void).cxx_destruct;
- (void)setupViews;

@end

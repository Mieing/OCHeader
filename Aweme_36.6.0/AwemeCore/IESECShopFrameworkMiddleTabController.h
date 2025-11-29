@class IESECServiceProxy, NSString;
@protocol IESECShopTopTabService, IESECShopLayoutService, IESECShopStateService, IESECShopDataService, IESECShopLiveService, IESECShopForwardCoService;

@interface IESECShopFrameworkMiddleTabController : IESECShopControllerV2 <IESECShopEventSubscriber, IESECShopFrameworkMiddleTabController>

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

- (void)didSetPageContextV2:(id)a0;
- (void)controllerDidLoad;
- (void)iesecshop_didSelectTopTabItem:(id)a0;
- (void)configTopTabView;
- (void)foldProfileViewIfNeeded:(id)a0;
- (void).cxx_destruct;
- (void)setupViews;

@end

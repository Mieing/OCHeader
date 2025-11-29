@class IESECTracker, NSString, IESECShopBffTabResponse, IESECShopContext, IESECShopPreloadInfoResponse, IESECShopActivityResponse, IESECShopInfoResponse, IESECStoreContainerViewModel, IESECServiceProxy;
@protocol IESECShopFrameworkService, IESECShopMonitorService, IESECShopStateService, IESECShopForwardCoService;

@interface IESECShopDataService : IESECShopService <IESECShopDataService> {
    IESECShopInfoResponse *_pendingInfoResponse;
    IESECShopBffTabResponse *_pendingTabResponse;
}

@property (retain, nonatomic) IESECTracker *tracker;
@property (nonatomic) unsigned long long apiStatus;
@property (retain, nonatomic) IESECShopInfoResponse *infoResponse;
@property (retain, nonatomic) IESECShopBffTabResponse *tabResponse;
@property (retain, nonatomic) IESECShopActivityResponse *activityResponse;
@property (retain, nonatomic) IESECShopPreloadInfoResponse *preloadInfoResponse;
@property (retain, nonatomic) IESECStoreContainerViewModel *api;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *stateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopMonitorService> *monitorService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardCoService;
@property (nonatomic) BOOL isCloseUp;
@property (retain, nonatomic) IESECServiceProxy<IESECShopFrameworkService> *frameworkService;
@property (readonly, nonatomic) IESECShopContext *routerParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configRouterParams:(id)a0;
- (void)prefetchLynxTemplate;
- (void)fetchPreloadInfoData;
- (void)fetchInfoAndTabData;
- (void)fetchInfoData;
- (void)fetchTabData;
- (void)fetchActivityData;
- (void)configTabResponse:(id)a0;
- (void)updateTrackerBussinessParams;
- (void)prefetchInfo:(id /* block */)a0;
- (void)prefetchInfoDataConsumer:(BOOL)a0 callBack:(id /* block */)a1;
- (void)prefetchTabData:(id /* block */)a0;
- (void)preconnectRelationPicHosts;
- (void)setupBindings;
- (void)apiSplitHandleApiStatusFinish;
- (void)handleInfoResponse;
- (void)handleTabResponse;
- (BOOL)hitEnableShopEnterLiveStyle;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end

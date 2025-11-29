@class NSMutableDictionary, NSDictionary, IESECServiceProxy, NSString;
@protocol IESECShopFrameworkService;

@interface IESECStoreMonitorController : IESECRelationController <IESECStoreMonitorControllerProtocol> {
    double _totalStayPageTime;
}

@property (nonatomic) double firstEnterTime;
@property (nonatomic) double lastEnterTime;
@property (nonatomic) double liveFirstFrameTime;
@property (retain, nonatomic) NSMutableDictionary *perfTabInitFlag;
@property (nonatomic) unsigned long long firstHeaderRequestState;
@property (nonatomic) double requestHeaderStartTime;
@property (nonatomic) double requestHeaderTimeInterval;
@property (nonatomic) BOOL getLynxHeaderPerf;
@property (retain, nonatomic) NSDictionary *lynxAreaTiming;
@property (retain, nonatomic) NSDictionary *storeMetrics;
@property (copy, nonatomic) NSDictionary *btmInfo;
@property (retain, nonatomic) IESECServiceProxy<IESECShopFrameworkService> *frameworkService;
@property (readonly, nonatomic) double metricStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_addObserver;
- (void)didSetPageContextV2:(id)a0;
- (void)iesecshop_containerDidMoveToParentViewController:(id)a0;
- (void)contentViewDidRenderFinish:(BOOL)a0 perfInfo:(id)a1;
- (void)switchTabDidRenderFinish:(BOOL)a0 perfInfo:(id)a1;
- (void)storeContainerDidClose;
- (id)__monitorPerfCategoryWithTabType:(unsigned long long)a0;
- (void)p_trackScreenshot:(id)a0;
- (id)__monitorPerfCategoryWithPerfInfo:(id)a0;
- (void)p_reportLynxHeaderPerf;
- (void)p_reportShopPageDestory;
- (void)p_reportShopPageUserBehavior;
- (void)p_reportLiveFirstFrame;
- (void)p_reportLiveFail;
- (void)p_reportShopLoadMoreWithPerf:(id)a0;
- (void)p_reportNetPerfMetrics:(id)a0;
- (void)p_reportWindowFPS:(long long)a0;
- (void)p_reportHitchsInfo:(double)a0;
- (BOOL)enableReportPerfInfo;
- (id)perfInfoCategory;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end

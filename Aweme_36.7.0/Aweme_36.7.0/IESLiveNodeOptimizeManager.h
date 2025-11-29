@class NSString;
@protocol IESLiveUserFlowService;

@interface IESLiveNodeOptimizeManager : NSObject <NPSchedulingRequestInfoCommonParamsFactory, LSSSchedulingRequestInfoCommonParamsFactory, NPNodeSchedulerRequestDelegate, LSSNodeSchedulerRequestDelegate>

@property (retain, nonatomic) id<IESLiveUserFlowService> userFlowService;
@property (nonatomic) long long networkStatus;
@property (nonatomic) BOOL started;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL useNewNodeOpt;
@property (nonatomic) BOOL syncOpt;
@property (nonatomic) unsigned long long networkTag;
@property (nonatomic) BOOL enableStreamDataListEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)nodeInfoWithHost:(id)a0;
- (void)setConfig;
- (id)excuteWithCommand:(id)a0 userInfo:(id)a1;
- (id)customizedRequestHeaders;
- (id)commonParamsWithUrlString:(id)a0;
- (void)onNetworkStatusChanged:(id)a0;
- (void)startIfNeededWithTag:(unsigned long long)a0;
- (void)nodeWithStreamDataList:(id)a0 withExtra:(id)a1;
- (void)nodeWithStreamDataList:(id)a0;
- (void)preSchedulingWithStreamData:(id)a0 resolution:(id)a1;
- (void)registerObservers;
- (void)valuesForNodeProber;
- (void)updateLiveStrategy;
- (void)settingDidFetchNotification:(id)a0;
- (BOOL)enableBackgroundOptimize;
- (id)pullStreamHost;
- (id)bestIPForHost:(id)a0;
- (id)appInfoReqeustWithDict:(id)a0;
- (id)netInfoForNodeOptimize;
- (id)currentAppInfo:(id)a0;
- (id)bestIPForURL:(id)a0;
- (id)nodeInfoWithURL:(id)a0;
- (id)requestStartupResWithStreamData:(id)a0 extraInfo:(id)a1;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)_start;
- (void)applicationWillEnterForeground;
- (void)dealloc;
- (void)stopIfNeeded;

@end

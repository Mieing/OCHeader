@class NSDictionary, NSString;

@interface AWEIMNetworkMonitorManager : NSObject <IESIMNetworkMonitorService>

@property (nonatomic) double startIM;
@property (nonatomic) double coldLaunch;
@property (nonatomic) double enterMessageTab;
@property (nonatomic) double lastEnterChat;
@property (nonatomic) long long enterChatCount;
@property (nonatomic) BOOL isFirst;
@property (nonatomic) unsigned long long currentPage;
@property (copy, nonatomic) NSDictionary *sceneMap;
@property (weak, nonatomic) id pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downgradeConfig;
+ (BOOL)p_isInDowngradeTimeWithConfig:(id)a0;
+ (void)p_trackDowngrade:(id)a0 scene:(id)a1 realDrop:(BOOL)a2 ruleID:(id)a3;
+ (id)beforeParamsWithUrl:(id)a0 preferMethod:(id)a1 extra:(id)a2;
+ (id)extraParamsWithResponse:(id)a0 error:(id)a1;
+ (id)extraParamsWithTimingInfo:(id)a0 error:(id)a1;
+ (BOOL)enableTrackOptimize;
+ (id)extraParamsWithPayload:(id)a0 error:(id)a1;
+ (void)trackUploadPerformanceWithContext:(id)a0 uploader:(id)a1;
+ (id)extraParamsWithUploadRespons:(id)a0 error:(id)a1;
+ (void)trackRequestPerformanceWithRequestIfNeed:(id)a0 preferMethod:(id)a1;
+ (void)trackDownloadPerformanceWithRequestIfNeed:(id)a0;
+ (id)sharedInstance;

- (BOOL)checkDropRequestPath:(id)a0 cmd:(int)a1 baseURL:(id)a2 isLongConnection:(BOOL)a3;
- (void)markTimingWithScene:(unsigned long long)a0;
- (BOOL)checkDropRequestUrl:(id)a0;
- (id)getRequestScene;
- (id)timingParams;
- (void)trackUploadPerformanceWithContext:(id)a0 uploader:(id)a1;
- (void)markEnterPage:(unsigned long long)a0;
- (void)markLeavePage:(unsigned long long)a0;
- (void)markPageVCForViewDidLoad:(unsigned long long)a0 context:(id)a1;
- (void)markPageVCForAppear:(unsigned long long)a0 context:(id)a1;
- (void)markPageVCForDisappear:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end

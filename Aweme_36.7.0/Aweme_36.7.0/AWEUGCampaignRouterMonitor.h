@class NSString;

@interface AWEUGCampaignRouterMonitor : NSObject <AWERouterDelegate>

@property (nonatomic) double startRouterMemory;
@property (nonatomic) double startRouterAvailableMemory;
@property (nonatomic) double startRouterTime;
@property (nonatomic) BOOL isCaculating;
@property (copy, nonatomic) NSString *logSchema;
@property (copy, nonatomic) NSString *logVC;
@property (nonatomic) double lastRouterMemory;
@property (nonatomic) long long compareCount;
@property (copy, nonatomic) NSString *timerIdentifer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)sharedManager;

- (void)routerDidBeginTransferWithURLString:(id)a0;
- (void)routerDidTransferWithURLString:(id)a0 fromViewController:(id)a1 toViewController:(id)a2 transitionType:(long long)a3;
- (void)routerDidFailTransferingWithURLString:(id)a0 errorMessage:(id)a1;
- (void)campaignDidBeginTransferWithURLString:(id)a0;
- (void)campaignDidTransferWithURLString:(id)a0;
- (void)campaignDidFailTransferingWithURLString:(id)a0;
- (id)getSchemaConfigWithSchema:(id)a0 setting:(id)a1;
- (void)delayXTimeReportMode:(id)a0;
- (void)loadCompleteReportMode:(id)a0;
- (void)logMemoryDiffInfo;
- (void)cancelLoadCompleteTimer;
- (id)paramerWithSchema:(id)a0;
- (id)hostPathWithSchema:(id)a0;
- (void)excuteRouterStartWithSchema:(id)a0;
- (void)excuteRouterFinishWithSchema:(id)a0 vc:(id)a1;
- (void).cxx_destruct;
- (void)resetContext;

@end

@class NSString, IESCombineFeatureConfig;
@protocol FurionSmartCommonServiceProtocol;

@interface AWECommentPreloadSmartService : NSObject <FurionSmartServiceProtocol>

@property (retain, nonatomic) id<FurionSmartCommonServiceProtocol> smartCommonService;
@property (nonatomic) long long skipTimes;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) long long lastRunTime;
@property (retain, nonatomic) IESCombineFeatureConfig *updateCombineTypeConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)runWithConfigBuilder:(id /* block */)a0 completion:(id /* block */)a1;
- (BOOL)ignoreRun:(id)a0;
- (void)didReceiveFeatureEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)prepare;
- (id)serviceName;
- (BOOL)enabled;
- (id)lastResult;

@end

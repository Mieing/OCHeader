@class NSMutableArray, NSArray, NSString, FurionSmartSceneMonitorConfig, NSDictionary, AWEAwemeModel, NSMutableDictionary;
@protocol AWEClientAILLMService;

@interface AWEInterestRatingLLMSmartService : HTSService <IESFCEventObserver, AWEInterestRatingLLMSmartService> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (nonatomic) long long currentVVGap;
@property (nonatomic) BOOL usePitaya;
@property (retain, nonatomic) FurionSmartSceneMonitorConfig *monitorConfig;
@property (nonatomic) long long runCountVVGap;
@property (nonatomic) long long maxCacheVVNum;
@property (retain, nonatomic) NSArray *triggerEventType;
@property (copy, nonatomic) NSString *sceneModel;
@property (copy, nonatomic) NSString *systemPrompt;
@property (copy, nonatomic) NSString *userPrompt;
@property (retain, nonatomic) NSDictionary *inferenceParams;
@property (retain, nonatomic) id<AWEClientAILLMService> llmService;
@property (retain, nonatomic) AWEAwemeModel *lastAweme;
@property (retain, nonatomic) NSMutableDictionary *userInteractionDict;
@property (retain, nonatomic) NSMutableArray *userInteractionOrderList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;
+ (BOOL)enabled;

- (void)runWithConfigBuilder:(id /* block */)a0 completion:(id /* block */)a1;
- (void)onTriggerEvent:(unsigned long long)a0 params:(id)a1;
- (id)getUserInteractionByAweme:(id)a0;
- (void)reportDataMessage:(id)a0 result:(id)a1;
- (void)runWithPitaya;
- (void).cxx_destruct;
- (void)prepare;
- (id)serviceName;
- (BOOL)enabled;
- (void)setupService;
- (id)lastResult;

@end

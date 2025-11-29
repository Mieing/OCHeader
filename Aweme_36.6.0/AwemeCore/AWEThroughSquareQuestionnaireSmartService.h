@class NSSet, NSDictionary, NSString, NSArray;
@protocol FurionSmartCommonServiceProtocol, AWEStorageServiceKVInterface;

@interface AWEThroughSquareQuestionnaireSmartService : NSObject <IESFCEventObserver>

@property (retain, nonatomic) id<FurionSmartCommonServiceProtocol> smartCommonService;
@property (nonatomic) long long skipTimes;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL shouldRun;
@property (nonatomic) long long lastRunTime;
@property (retain, nonatomic) NSDictionary *configMap;
@property (retain, nonatomic) NSSet *triggerEvents;
@property (retain, nonatomic) NSDictionary *commonEventMap;
@property (retain, nonatomic) NSDictionary *reverseCommonEventMap;
@property (nonatomic) long long checkQuestionnaireFailedTimes;
@property (nonatomic) long long errorTimes;
@property (nonatomic) BOOL hasHappen;
@property (copy, nonatomic) NSString *lastTaskId;
@property (copy, nonatomic) NSDictionary *cacheQuestionnaireInput;
@property (copy, nonatomic) NSString *lastAwemeId;
@property (copy, nonatomic) NSDictionary *cacheAwemeInput;
@property (copy, nonatomic) NSArray *shownTaskIDs;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *modelName;
@property (nonatomic) long long runCount;
@property (retain, nonatomic) NSString *checkSessionId;
@property (retain, nonatomic) NSString *lastInInnerAwemeId;
@property (retain, nonatomic) id<AWEStorageServiceKVInterface> kvStorage;

+ (id)getConfigMap;
+ (id)sharedInstance;

- (void)runWithConfigBuilder:(id /* block */)a0 completion:(id /* block */)a1;
- (void)onTriggerEvent:(unsigned long long)a0 params:(id)a1;
- (void)setupObserver;
- (double)getCurrentTimeMs;
- (void)removeCommonEventObservers;
- (void)saveQuestionnaireTaskShown:(id)a0;
- (void)triggerQuestionnairePredictWithAction:(id)a0 params:(id)a1;
- (BOOL)hasQuestionnaireTaskShown:(id)a0;
- (void)cleanServiceAsNotNeedRun;
- (BOOL)checkQuestionnaire:(id)a0;
- (id)getCacheQuestionnaireInput:(id)a0;
- (id)getCacheAwemeInputWithAwemeModel:(id)a0 itemID:(id)a1;
- (id)getShownTaskIDs;
- (BOOL)ignoreRunWithAction:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)prepare;
- (id)serviceName;
- (BOOL)enabled;
- (id)lastResult;

@end

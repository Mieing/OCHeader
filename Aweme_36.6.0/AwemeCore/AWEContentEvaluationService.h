@class NSSet, NSDictionary, AWEContentEvalInfo, NSObject;
@protocol OS_dispatch_queue;

@interface AWEContentEvaluationService : NSObject

@property (copy, nonatomic) NSDictionary *sceneEvalConfig;
@property (copy, nonatomic) NSDictionary *sceneEvalModes;
@property (copy, nonatomic) NSDictionary *sceneClientEvalRule;
@property (copy, nonatomic) NSDictionary *sceneGlobalEvalFactor;
@property (copy, nonatomic) NSSet *sceneEnableClientEvalWhenSort;
@property (retain, nonatomic) AWEContentEvalInfo *evalInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *evaluationQueue;
@property (nonatomic) BOOL contentInfoLazyLoad;

+ (id)sharedInstance;

- (double)calculateScoreForAweme:(id)a0 scene:(id)a1 mode:(id)a2;
- (BOOL)enableSortForScene:(id)a0;
- (id)sortAwemeModels:(id)a0 forScene:(id)a1;
- (BOOL)enableCloudSortForScene:(id)a0;
- (void)evaluateContentIfNeeded:(id)a0 scene:(id)a1;
- (void)p_setupWithConfig:(id)a0;
- (id)contentScoreOfAweme:(id)a0 scene:(id)a1 mode:(id)a2;
- (id)p_calculateScoreForAweme:(id)a0 scene:(id)a1 mode:(id)a2;
- (id)sortAwemeModelsV2:(id)a0 forScene:(id)a1;
- (BOOL)enableClientEvalWhenSortForScene:(id)a0;
- (id)calculateClientEvalScoreWithAweme:(id)a0 scene:(id)a1;
- (id)sortAwemeIDs:(id)a0 forScene:(id)a1;
- (void)clientEvaluateContent:(id)a0 forScene:(id)a1;
- (void)cloudEvaluateContentWithAweme:(id)a0 forScene:(id)a1;
- (void)globalEvaluateContent:(id)a0 forScene:(id)a1;
- (void)cloudEvaluateContentWithAwemeId:(id)a0 cacheScore:(id)a1 cacheStatus:(id)a2 recallReason:(id)a3 forScene:(id)a4;
- (id)calculateGlobalScoreWithAweme:(id)a0 scene:(id)a1;
- (id)globalEvalFactorForScene:(id)a0;
- (id)p_awemeIDsOfModels:(id)a0;
- (BOOL)enableClientSortForScene:(id)a0;
- (BOOL)enableGlobalSortForScene:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end

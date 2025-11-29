@class AWESearchCommonRerankPageContext, AWESearchSessionConsumeRecorder, AWESearchCommonChainMonitor, NSString, NSDictionary, NSMutableDictionary, AWESearchCommonRerankConfig;
@protocol AWESearchCommonRerankManagerDelegate;

@interface AWESearchCommonRerankManager : NSObject

@property (retain, nonatomic) AWESearchCommonRerankConfig *config;
@property (retain, nonatomic) AWESearchSessionConsumeRecorder *recorder;
@property (retain, nonatomic) AWESearchCommonChainMonitor *rerankMonitor;
@property (nonatomic) unsigned long long currentTriggerType;
@property (nonatomic) unsigned long long currentSessionSlideEndRerankCount;
@property (copy, nonatomic) NSString *currentSearchID;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long searchTime;
@property (copy, nonatomic) NSDictionary *pitayaSessionFeature;
@property (copy, nonatomic) NSString *triggerSource;
@property (copy, nonatomic) NSString *actionName;
@property (nonatomic) double rerankStartTime;
@property (nonatomic) BOOL needDynamicRequest;
@property (copy, nonatomic) NSString *rerankPitayaTraceID;
@property (copy, nonatomic) NSString *cacheDataPitayaTraceID;
@property (retain, nonatomic) NSMutableDictionary *recordCacheInfo;
@property (retain, nonatomic) AWESearchCommonRerankPageContext *context;
@property (weak, nonatomic) id<AWESearchCommonRerankManagerDelegate> delegate;

- (void)updateEnterFrom:(id)a0;
- (void)updateSearchTime:(double)a0;
- (void)updateSearchID:(id)a0;
- (void)updateSessionFeature:(id)a0;
- (void)startCacheDataTaskWithModels:(id)a0 completion:(id /* block */)a1;
- (id)initWithConfig:(id)a0 consumeRecorder:(id)a1;
- (void)startRerankTaskWithIndex:(long long)a0 triggerType:(unsigned long long)a1 models:(id)a2 completion:(id /* block */)a3;
- (id)p_errorWithMsg:(id)a0;
- (BOOL)hasBeenPausedExecuteRerankTask;
- (void)showToastWithInfo:(id)a0;
- (void)updateTriggerType:(unsigned long long)a0;
- (void)p_executeRerankTaskWithIndex:(long long)a0 models:(id)a1 completion:(id /* block */)a2;
- (void)p_executeCacheDataTaskWithModels:(id)a0 completion:(id /* block */)a1;
- (id)p_rerankTaskParamsWithModels:(id)a0;
- (BOOL)p_checkModelTranstlationWithtaskParams:(id)a0;
- (id)p_getCandidateDataSource;
- (id)p_getCurrentAllSearchResultRawData;
- (unsigned long long)p_getCurrentDisplayedIndex;
- (void)showRerankInfoWithResultList:(id)a0 candidateList:(id)a1;
- (id)p_getSBSLogParamsWithParams:(id)a0 originalModels:(id)a1;
- (void)showRerankTaskWithSuccess:(BOOL)a0 error:(id)a1;
- (id)p_cacheDataTaskParamsWithModels:(id)a0;
- (void)showRerankCacheDataWithSuccess:(BOOL)a0 error:(id)a1;
- (id)p_getSBSLogAfterRerankRealDocListWithDocCount:(long long)a0;
- (id)p_getSBSLogAfterPreStrategyWithParams:(id)a0 originalModels:(id)a1;
- (id)p_pitayaTaskBaseParamsWithAction:(id)a0;
- (void).cxx_destruct;
- (void)updateQuery:(id)a0;

@end

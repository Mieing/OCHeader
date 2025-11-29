@interface AWESearchPreRequestUtil : NSObject

+ (id)prefetchID;
+ (id)startPassivePredictFetchWithParams:(id)a0 ackCountdownTime:(unsigned long long)a1;
+ (void)handleMissPreRequestWithPreRequestTag:(id)a0 result:(id)a1 reason:(id)a2;
+ (void)startAIGCCommonPassivePredictFetchWithParams:(id)a0 preRequestType:(unsigned long long)a1;
+ (BOOL)enableAIGCPassivePreRequestWithSearchSource:(id)a0;
+ (void)startAIGCPassivePredictFetchWithParams:(id)a0;
+ (id)aigcPreRequestAllowDifferKeys;
+ (BOOL)enableAIGCPreRequest;
+ (BOOL)enableAIGCActivePreRequest;
+ (void)startAIGCActivePredictFetchWithParams:(id)a0 preRequestParams:(id)a1 resultVC:(id)a2;
+ (BOOL)enableGeneralPreRequestFromNewWithSearchSource:(id)a0;
+ (id)searchPreRequestTagOptimizationConfig;
+ (BOOL)enableGeneralRepeatPreRequestFromNewWithSearchSource:(id)a0;
+ (BOOL)enableGeneralFirstPreRequestFromNewWithSearchSource:(id)a0;
+ (BOOL)enableOptimizeSearchPreRequestTag;
+ (id)startPassivePredictFetchWithParams:(id)a0 preRequestTag:(id)a1 ackCountdownTime:(unsigned long long)a2;
+ (id)fetchAIGCPassivePreRequestSourceArray;
+ (BOOL)enableFixAllowDifferKeys;
+ (BOOL)enableFixRealtimeFeatureChannelKey;
+ (unsigned long long)tabManagerType:(id)a0;
+ (BOOL)enableOptimizeFetchSessionID;
+ (BOOL)p_enablePreFetchFromSettingsWithSearchSource:(id)a0 isFirstSearch:(BOOL)a1;
+ (id)createPassivePreNetworkRequestWithParams:(id)a0 preRequestTag:(id)a1 ackCountdownTime:(unsigned long long)a2;
+ (void)startPassivePredictFetchWithType:(unsigned long long)a0 preNetworkRequest:(id)a1 preRequestTag:(id)a2 ackCountdownTime:(unsigned long long)a3;

@end

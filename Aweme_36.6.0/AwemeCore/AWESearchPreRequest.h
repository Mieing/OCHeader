@interface AWESearchPreRequest : NSObject

+ (BOOL)preRequestHitWithType:(unsigned long long)a0 requestParams:(id)a1 preRequestTag:(id)a2 compareKeys:(id)a3 customAllowDifferKeys:(id)a4;
+ (void)handleMissPreRequestWithType:(unsigned long long)a0 preRequestTag:(id)a1 result:(id)a2 reason:(id)a3;
+ (void)handleMissPreRequestWithType:(unsigned long long)a0 searchSource:(id)a1 result:(id)a2 reason:(id)a3 requestCreateTime:(double)a4;
+ (id)preRequestForPrefetchID:(id)a0;
+ (void)handleAllMissPreRequestTag:(id)a0 searchSource:(id)a1 result:(id)a2 reason:(id)a3 requestCreateTime:(double)a4;
+ (void)handleMissPreRequestWithPrefetchID:(id)a0 result:(id)a1 reason:(id)a2;
+ (void)handleMissPreRequestWithType:(unsigned long long)a0 preRequestTag:(id)a1 searchSource:(id)a2 result:(id)a3 reason:(id)a4 requestCreateTime:(double)a5;
+ (void)handleAllMissPreRequestWithResult:(id)a0 reason:(id)a1;
+ (void)commonReportACKIfNeedWithType:(unsigned long long)a0 preRequestTag:(id)a1 searchSource:(id)a2 result:(id)a3 reason:(id)a4 requestCreateTime:(double)a5;
+ (id)allowDifferListFromSettings;
+ (BOOL)preRequestHitWithType:(unsigned long long)a0 requestParams:(id)a1 preRequestTag:(id)a2 compareKeys:(id)a3;
+ (unsigned long long)verticalTypeWithTargetVC:(id)a0;
+ (Class)preRequestProviderWithPreRequestType:(unsigned long long)a0;
+ (Class)verticalProviderWithVerticalType:(unsigned long long)a0;
+ (unsigned long long)verticalType:(unsigned long long)a0;
+ (id)startPreRequestWithType:(unsigned long long)a0 context:(id)a1 compareKeys:(id)a2;
+ (id)searchPreRequestTagWithKeyword:(id)a0 searchSource:(id)a1;
+ (void)removeCSPChunkRequestManagerWithVerticalType:(unsigned long long)a0 preRequestTag:(id)a1;
+ (id)preNetworkRequestWithType:(unsigned long long)a0 preRequestTag:(id)a1;
+ (BOOL)preRequestHitWithType:(unsigned long long)a0 requestParams:(id)a1 preRequestTag:(id)a2 compareKeys:(id)a3 allowDifferKeys:(id)a4;
+ (void)handleFlowWithVerticalType:(unsigned long long)a0 preRequestTag:(id)a1;
+ (void)handleDiscardedWithVerticalType:(unsigned long long)a0 preRequestTag:(id)a1;
+ (void)removeCSPMachineWithVerticalType:(unsigned long long)a0 preRequestTag:(id)a1;
+ (BOOL)reportACKIfNeedWithType:(unsigned long long)a0 preRequestTag:(id)a1 searchSource:(id)a2 result:(id)a3 reason:(id)a4 requestCreateTime:(double)a5;
+ (BOOL)isExpirePreRequest:(id)a0;
+ (id)startPreInitRequestWithType:(unsigned long long)a0 context:(id)a1;
+ (id)p_startPreRequestWithType:(unsigned long long)a0 context:(id)a1 preRequestTag:(id)a2 compareKeys:(id)a3 allowDifferKeys:(id)a4 curPreNetworkRequest:(id)a5;
+ (id)startPreRequestWithType:(unsigned long long)a0 context:(id)a1 compareKeys:(id)a2 allowDifferKeys:(id)a3;
+ (BOOL)p_preRequestHit:(id)a0 currentParams:(id)a1 compareKeys:(id)a2 allowDifferKeys:(id)a3;
+ (void)registerPreRequestParamsCustomCompareBlock:(id)a0;
+ (id)registeredVerticalProviders;
+ (void)clearAllPreInitRequestWithVerticalType:(unsigned long long)a0;
+ (id)startPreRequestWithType:(unsigned long long)a0 context:(id)a1;
+ (BOOL)compareWithValue1:(id)a0 value2:(id)a1;
+ (id)commonFlowManagerForVerticalType:(unsigned long long)a0 preRequestTag:(id)a1;
+ (void)removeFlowManagerWithVerticalType:(unsigned long long)a0 preRequestTag:(id)a1;
+ (id)cspMachineForVerticalType:(unsigned long long)a0 preRequestTag:(id)a1;
+ (id)allPreNetworkRequestWithType:(unsigned long long)a0;
+ (id)startPreRequestWithType:(unsigned long long)a0 context:(id)a1 preRequestTag:(id)a2 compareKeys:(id)a3;
+ (id)createPreNetworkRequestWithType:(unsigned long long)a0 context:(id)a1 preRequestTag:(id)a2;
+ (void)startPreRequestWithType:(unsigned long long)a0 preNetworkRequest:(id)a1 preRequestTag:(id)a2 compareKeys:(id)a3 allowDifferKeys:(id)a4;
+ (BOOL)predictFetchHitWithType:(unsigned long long)a0 predictFetchParams:(id)a1 preRequestTag:(id)a2;
+ (id)reusePreInitWithType:(unsigned long long)a0 context:(id)a1;
+ (void)clearAllPreInitRequest;

@end

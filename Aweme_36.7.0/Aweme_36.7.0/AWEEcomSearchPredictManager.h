@interface AWEEcomSearchPredictManager : NSObject

+ (BOOL)enablePredictFetchRequest;
+ (void)reportPrefetchStatus:(long long)a0 cancelReason:(id)a1 requestCreateTime:(double)a2 requestParams:(id)a3 isFromPredict:(BOOL)a4 prefetchID:(id)a5 extraParams:(id)a6;
+ (BOOL)enablePredictFetchRequestForRepeatSearch;
+ (BOOL)enablePredictFetchRequestForSource:(id)a0;
+ (void)reportPrefetchStatus:(long long)a0 cancelReason:(id)a1 requestCreateTime:(double)a2 requestParams:(id)a3 isFromPredict:(BOOL)a4 prefetchID:(id)a5;
+ (BOOL)enablePredictFetchRequestForSearchButton;
+ (id)manager;
+ (id)sceneList;

@end

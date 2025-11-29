@class IESLLPOIDetailPrefetchStrategy, NSMutableDictionary, IESLLGXLRUCache;

@interface IESLLPOINetworkPrefetcher : NSObject

@property (retain, nonatomic) IESLLGXLRUCache *cache;
@property (retain, nonatomic) NSMutableDictionary *networkCompletions;
@property (retain, nonatomic) NSMutableDictionary *networkImpls;
@property (retain, nonatomic) NSMutableDictionary *trackParamsMap;
@property (retain, nonatomic) NSMutableDictionary *prefetchModelMap;
@property (retain, nonatomic) IESLLPOIDetailPrefetchStrategy *strategy;

+ (id)sharedInstance;

- (void)updateTrackParamsWithParamKey:(id)a0 paramValue:(id)a1 forKey:(id)a2;
- (id)trackParamsForKey:(id)a0;
- (void)clearTrackParamsWithKey:(id)a0;
- (BOOL)isRequestOnAirWithKey:(id)a0;
- (id)cacheDataWithKey:(id)a0;
- (void)clearCacheDataWithKey:(id)a0;
- (void)subscribeKey:(id)a0 block:(id /* block */)a1;
- (id)prefetchModelWithKey:(id)a0;
- (void)didChunkFinishAndHasSubscriberWithKey:(id)a0 data:(id)a1 isFinished:(BOOL)a2;
- (void)didRequestFinishWithKey:(id)a0 cacheData:(id)a1 error:(id)a2 isFinished:(BOOL)a3 trackData:(id)a4;
- (double)getCacheDuration:(id)a0;
- (id)prefetchCacheDataWithSchema:(id)a0 url:(id)a1 headers:(id)a2 params:(id)a3 networkImpl:(id)a4 completion:(id /* block */)a5;
- (id)prefetchChunkModeWithSchema:(id)a0 networkImpl:(id)a1 prefetchModel:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end

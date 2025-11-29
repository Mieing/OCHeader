@class NSString, NSMutableArray, AWEMVChannelPageContext;
@protocol AWEMVDataControllerProtocol;

@interface AWEMVDataFetchStrategyPlugin : NSObject <AWEMVDataPluginProtocol>

@property (retain, nonatomic) id<AWEMVDataControllerProtocol> cacheDataController;
@property (retain, nonatomic) NSMutableArray *refreshCache;
@property (nonatomic) BOOL isMockingRequest;
@property (nonatomic) BOOL isMockRequestCancel;
@property (weak, nonatomic) AWEMVChannelPageContext *mvContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFilterResponse:(id)a0 context:(id)a1;
- (BOOL)shouldInterceptFetchWithContext:(id)a0 completion:(id /* block */)a1;
- (void)prepareRefreshCacheIfNeed;
- (BOOL)shouldUseUnconsumedDataWithContext:(id)a0;
- (id)buildUnconsumedDataWithContext:(id)a0;
- (void)mockRequestWithContext:(id)a0 response:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)shouldUseRefreshCacheWithContext:(id)a0;
- (id)popRefreshCache;
- (void)prepareRefreshCacheIfNeedWithTries:(unsigned long long)a0;
- (BOOL)shouldPrepareRefreshCache;
- (void)appendRefreshCache:(id)a0;
- (void)trackerWithRequestDuration:(double)a0 responseModel:(id)a1 context:(id)a2 error:(id)a3;
- (BOOL)hasPlayerCardWithModels:(id)a0;
- (void).cxx_destruct;
- (void)cancelRequestWithContext:(id)a0;

@end

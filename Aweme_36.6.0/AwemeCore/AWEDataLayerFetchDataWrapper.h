@class AWEDataLayerFetchDataToken, AWEDataLayerFetchDataConfig, AWEDataLayerBaseNetworkProvider;

@interface AWEDataLayerFetchDataWrapper : NSObject

@property (retain, nonatomic) AWEDataLayerFetchDataToken *token;
@property (retain, nonatomic) AWEDataLayerBaseNetworkProvider *networkProvider;
@property (retain, nonatomic) AWEDataLayerFetchDataConfig *config;
@property (copy, nonatomic) id /* block */ completion;

- (id)trackParamsWithDataSource:(long long)a0 hasData:(BOOL)a1;
- (void)callCompletionWithCacheData:(id)a0;
- (void)callCompletionWithNetworkData:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end

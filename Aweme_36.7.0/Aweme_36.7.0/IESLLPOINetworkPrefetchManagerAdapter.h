@class NSString;
@protocol IESLLPOINetworkPrefetchManagerProtocol;

@interface IESLLPOINetworkPrefetchManagerAdapter : NSObject <AWEPOINetworkPrefetchManagerProtocol>

@property (weak, nonatomic) id<IESLLPOINetworkPrefetchManagerProtocol> sourceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertPrefetchManager:(id)a0;

- (id)doSmartPrefetchWithSchema:(id)a0 predictionModel:(id)a1 smartPrefetchType:(unsigned long long)a2 poiBackendType:(id)a3 bizCode:(id)a4 prefetchModel:(id)a5;
- (id)doPreRequestWithSchema:(id)a0 poiBackendType:(id)a1 bizCode:(id)a2 prefetchModel:(id)a3;
- (void)clearSmartPrefetchWithKey:(id)a0;
- (id)doClientCachePreloadWithSchema:(id)a0 bizCode:(id)a1 poiBackendType:(id)a2;
- (void)clearClientCachePreloadWithKey:(id)a0;
- (void)clearCachePrefetchWithKey:(id)a0 clearPreloadView:(BOOL)a1;
- (id)doCachePrefetchWithSchema:(id)a0 url:(id)a1 headers:(id)a2 params:(id)a3 bizCode:(id)a4 poiBackendType:(id)a5;
- (id)prefetchWithSchema:(id)a0 prefetchModel:(id)a1;
- (void)clearPrefetchWithKey:(id)a0;
- (void).cxx_destruct;

@end

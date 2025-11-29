@class IESECServiceProxy, IESECBlenderContext, NSString;
@protocol IESECBlenderPreloadLynx, IESECBlenderPrefetchDelegate, IESECBlenderDataManagerProtocol;

@interface IESECBlenderPrefetch : NSObject <IESECBlenderPrefetch>

@property (retain, nonatomic) IESECServiceProxy<IESECBlenderDataManagerProtocol> *dataManager;
@property (retain, nonatomic) IESECServiceProxy<IESECBlenderPreloadLynx> *preloadLynx;
@property (retain, nonatomic) id<IESECBlenderPrefetchDelegate> delegate;
@property (weak, nonatomic) IESECBlenderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetch:(id)a0 forScene:(long long)a1 completion:(id /* block */)a2 metricsBlock:(id /* block */)a3 customParams:(id)a4;
- (void)serialFetch:(id)a0 forScene:(long long)a1 completion:(id /* block */)a2;
- (void)supplyParallelFetch:(id)a0 forScene:(long long)a1 completion:(id /* block */)a2;
- (void)handleRequest:(id)a0 forScene:(long long)a1 completion:(id /* block */)a2 metricsBlock:(id /* block */)a3 customParams:(id)a4;
- (void)recursiveFetch:(long long)a0 customApiConfig:(id)a1 forScene:(long long)a2 completion:(id /* block */)a3;
- (id)mergeApiConfig:(id)a0 withCustomConfig:(id)a1;
- (id)mergeParams:(id)a0 defaultConfig:(id)a1 customConfig:(id)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end

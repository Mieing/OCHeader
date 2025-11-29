@class NSString;
@protocol AWESearchCachalotDynamicResourceProtocol, AWEEcomSearchMerchandiseResourceLoaderDelegate;

@interface AWEEcomSearchMerchandiseResourceLoaderDefaultImpl : NSObject <AWEEcomSearchMerchandiseResourceLoaderProtocol>

@property (weak, nonatomic) id<AWEEcomSearchMerchandiseResourceLoaderDelegate> delegate;
@property (retain, nonatomic) id<AWESearchCachalotDynamicResourceProtocol> dynamicResourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareGeckoResource;
- (void)ecomPreloadWithURLArray:(id)a0 completion:(id /* block */)a1;
- (void)getGeckoResourceImageWithName:(id)a0 complete:(id /* block */)a1;
- (void)checkSearchChannelStatusWithForce:(BOOL)a0;
- (void)prefetchGSImageForResponse:(id)a0 firstScreen:(BOOL)a1;
- (void)prefetchDynamicPatchImageForResponse:(id)a0 isLoadMore:(BOOL)a1;
- (void)preloadLynxResourceForResponse:(id)a0 isLoadMore:(BOOL)a1 completion:(id /* block */)a2;
- (void)notifyFirstRenderImageLoadFinish;
- (void)checkDynamicDataList:(id)a0 isLoadMore:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end

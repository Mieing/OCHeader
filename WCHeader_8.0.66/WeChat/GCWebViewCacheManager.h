@class NSString, NSMutableDictionary;

@interface GCWebViewCacheManager : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *cacheDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)preloadTransparentWebView:(id)a0 reuseIdentifier:(id)a1 reCreateAfterUsed:(BOOL)a2;
- (void)reCreateWithCacheItem:(id)a0;
- (id)getCacheItemForUrl:(id)a0 reuseIdentifier:(id)a1 isPreload:(BOOL)a2 preinjectData:(id)a3 checkLimitedMode:(BOOL)a4;
- (void)preloadHalfScreenWebViewWithConfig:(id)a0;
- (void)handleHalfScreenWebView:(id)a0 parentVC:(id)a1 visibleChange:(BOOL)a2;
- (long long)mmUIUserInterfaceStyleForVc:(id)a0;
- (id)showHalfScreenWebViewWithConfig:(id)a0;
- (void)removeCacheWebView:(id)a0;
- (void).cxx_destruct;

@end

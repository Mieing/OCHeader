@interface AWEAdLynxCardResourceLoader : NSObject <AWEAdLynxCardResourceLoader>

+ (void)loadLynxResourceIfNeeded:(id)a0;
+ (void)loadWebpResourceIfNeeded:(id)a0;
+ (void)preloadAlphaVideoIfNeeded:(id)a0 aweme:(id)a1;
+ (void)preloadAlphaVideoIfNeededWithURL:(id)a0 isVideo:(BOOL)a1 aweme:(id)a2;
+ (void)trackerEventWithAweme:(id)a0 label:(id)a1 adExtraData:(id)a2;
+ (id)targetFilePathWithURL:(id)a0;
+ (void)updatePreloadResources:(id)a0 withResourceUrls:(id)a1;
+ (void)updateGlobalProps:(id)a0 withAweme:(id)a1;

@end

@interface AWEProfileStorage : NSObject

+ (void)cachedPostWorksForUser:(id)a0 withCompletion:(id /* block */)a1;
+ (void)_aweLazyRegisterStaticLoad;
+ (int)countOfCachedPostWorksFor:(id)a0;
+ (void)loadStorageCacheAfterColdLaunch;
+ (id)cachedPostWorksForUser:(id)a0;
+ (id)__cachedStoragePostWorksForUser:(id)a0;
+ (BOOL)savePostWorks:(id)a0 user:(id)a1;
+ (void)clearPostWorksForUser:(id)a0;
+ (void)appendLivePlaybackPlaceholderPosts:(id)a0;
+ (void)saveLivePlaybackPlaceholderPosts:(id)a0;
+ (id)cachedLivePlaybackPlaceholderPost;

@end

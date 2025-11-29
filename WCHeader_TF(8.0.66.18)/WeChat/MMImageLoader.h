@class NSRecursiveLock, NSString, UIImage, NSError;

@interface MMImageLoader : MMRootService <MMServiceProtocol>

@property (readonly, nonatomic) NSRecursiveLock *lockRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
+ (id)DeprecatedCacheBaseDirectory;
+ (id)CacheBaseDirectory;
+ (id)RelativePathByTargetURL:(id)a0;

- (void)_swiftLoadImageFor:(NSString *)a0 scene:(long long)a1 completionHandler:(void (^)(UIImage *, NSError *))a2;
- (void)swiftLoadImageFor:(id)a0 observer:(id)a1 downloadTaskGenerator:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)swiftImageDataFor:(id)a0 loadOnMainThread:(BOOL)a1;
- (id)swiftImageFor:(id)a0 loadOnMainThread:(BOOL)a1;
- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (void)onServiceClearMemoryCache:(unsigned long long)a0 addedUserType:(unsigned long long)a1;
- (void)onServiceClearMemoryCacheInBackground;
- (void)loadImageFor:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadImageFor:(id)a0 taskGenerator:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)imageForURL:(id)a0 LoadOnMainThread:(BOOL)a1;
- (BOOL)imageCacheExistsForURL:(id)a0;
- (id)imageCacheForURL:(id)a0 LoadOnMainThread:(BOOL)a1;
- (id)imageDataForURL:(id)a0 LoadOnMainThread:(BOOL)a1;
- (id)imagePathForURL:(id)a0;
- (id)makeImagePathForURL:(id)a0;
- (void)loadImageForURL:(id)a0 observer:(id)a1;
- (void)loadImageForURL:(id)a0 observer:(id)a1 scene:(long long)a2;
- (void)loadImageForURL:(id)a0 observer:(id)a1 scene:(long long)a2 onlyNeedData:(BOOL)a3 disableCacheWrite:(BOOL)a4;
- (void)loadImageForURL:(id)a0 observer:(id)a1 reqContext:(id)a2;
- (void)loadImageForURL:(id)a0 requestURL:(id)a1 observer:(id)a2 reqContext:(id)a3;
- (void)loadImageForURL:(id)a0 requestURL:(id)a1 observer:(id)a2 reqContext:(id)a3 scene:(long long)a4;
- (void)cancelLoadForURL:(id)a0 oberver:(id)a1;
- (void)cancelLoadAllURLs:(id)a0;
- (BOOL)isImageLoaded:(id)a0;
- (void)removeCacheForURL:(id)a0;
- (void)saveImage:(id)a0 imageData:(id)a1;
- (void).cxx_destruct;

@end

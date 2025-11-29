@class NSString, NSURLSessionDataTask;
@protocol MVImageLoaderDelegate;

@interface MVImageLoader : NSObject

@property (copy, nonatomic) NSString *loadingUrlString;
@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) NSURLSessionDataTask *currentTask;
@property (weak, nonatomic) id<MVImageLoaderDelegate> delegate;

+ (id)cachePathForUrl:(id)a0;
+ (void)saveCachedImageData:(id)a0 onlineUrl:(id)a1;
+ (id)md5ForURL:(id)a0;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;

- (id)init;
- (void)createCacheDirectoryIfNeeded;
- (void)loadImageUrl:(id)a0 token:(id)a1 completion:(id /* block */)a2;
- (void)loadImageUrlString:(id)a0 completion:(id /* block */)a1;
- (void)cancelCurrentLoadingRequest;
- (void)downloadWithUrl:(id)a0 token:(id)a1 completion:(id /* block */)a2;
- (id)loadCacheImageFromUrl:(id)a0;
- (BOOL)isImageCached:(id)a0;
- (void)_downloadWithUrl:(id)a0 token:(id)a1 completion:(id /* block */)a2;
- (void)writeToCachePathWithImageData:(id)a0 url:(id)a1;
- (BOOL)isOnlineUrl:(id)a0;
- (void)loadLocalImageUrlString:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

@class NSString, NSURLSessionDataTask, NSURLSession;
@protocol MVImageRequestDelegate;

@interface MVImageRequest : MVDownloadOperation

@property (readonly, nonatomic) NSURLSession *urlSession;
@property (nonatomic) BOOL internalExecuting;
@property (nonatomic) BOOL internalFinished;
@property (weak, nonatomic) NSURLSessionDataTask *dataTask;
@property (weak, nonatomic) id<MVImageRequestDelegate> delegate;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) unsigned long long mode;

- (void)createCacheDirectoryIfNeeded;
- (BOOL)isOnlineUrl:(id)a0;
- (void)asyncStart;
- (void)cancel;
- (void)loadImageUrl:(id)a0 token:(id)a1 completion:(id /* block */)a2;
- (void)downloadWithUrl:(id)a0 token:(id)a1 completion:(id /* block */)a2;
- (void)_downloadWithUrl:(id)a0 token:(id)a1 completion:(id /* block */)a2;
- (void)cancelCurrentLoadingRequest;
- (id)loadCacheImageFromUrl:(id)a0;
- (BOOL)isImageCached:(id)a0;
- (id)cachePathForUrl:(id)a0;
- (id)md5ForURL:(id)a0;
- (void)writeToCachePathWithImageData:(id)a0 url:(id)a1;
- (void)loadLocalImageUrlString:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

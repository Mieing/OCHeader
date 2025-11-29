@class NSRecursiveLock, NSString, NSMutableDictionary, WCDownloadImageCdnMgr, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface WCCanvasImageLoader : MMUserService <WCCdnDownloadImageDelegate, MMServiceProtocol> {
    NSObject<OS_dispatch_queue> *_request_queue;
    NSMutableDictionary *m_requestInfoDictionary;
    unsigned int m_imageDataSize;
    NSMutableDictionary *m_imageCaches;
    NSMutableArray *m_imageCacheFIFO;
    unsigned int m_gifDataSize;
    NSMutableDictionary *m_gifDataCaches;
    NSMutableArray *m_gifDataCacheFIFO;
}

@property (retain, nonatomic) NSRecursiveLock *m_lock;
@property (retain, nonatomic) WCDownloadImageCdnMgr *cdnMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;

- (void)onServiceInit;
- (id)imageDataObjectForKey:(id)a0;
- (id)imageObjectForKey:(id)a0;
- (void)setImageDataObject:(id)a0 forKey:(id)a1;
- (void)setImageObject:(id)a0 forKey:(id)a1;
- (void)onServiceMemoryWarning;
- (id)cacheDataFromFile:(id)a0 fromUrl:(id)a1;
- (id)cacheImageFromFile:(id)a0 fromUrl:(id)a1;
- (id)cacheNotGifImageFromFile:(id)a0 fromUrl:(id)a1;
- (id)cacheImageFromData:(id)a0 fromUrl:(id)a1;
- (id)getImageFromCache:(id)a0;
- (id)getImageFromImageCache:(id)a0;
- (id)getDataFromCache:(id)a0;
- (void)callImageDidLoadExt:(id)a0 Url:(id)a1 withUrlMd5:(id)a2;
- (void)callImageDidLoadWithDataExt:(id)a0 Url:(id)a1 withUrlMd5:(id)a2;
- (BOOL)callImageDidLoadWithDataOrFailedExt:(id)a0 Url:(id)a1 withUrlMd5:(id)a2;
- (void)callImageDidLoadOrFailedExt:(id)a0 Url:(id)a1 UrlMd5:(id)a2;
- (void)callAllExtWithOrder:(id)a0 Data:(id)a1 Url:(id)a2 UrlMd5:(id)a3;
- (id)imageForURL:(id)a0 LoadOnMainThread:(BOOL)a1;
- (BOOL)imageCacheExistsForURL:(id)a0;
- (id)imageCacheForURL:(id)a0 LoadOnMainThread:(BOOL)a1;
- (id)imageDataForURL:(id)a0 LoadOnMainThread:(BOOL)a1;
- (id)imagePathForURL:(id)a0;
- (void)loadImageForURL:(id)a0 observer:(id)a1 atScene:(unsigned int)a2 isPreload:(BOOL)a3 useSnsCdnDownload:(BOOL)a4;
- (void)loadImageForURL:(id)a0 observer:(id)a1;
- (void)loadAdImageForURL:(id)a0 observer:(id)a1;
- (void)cancelLoadForURL:(id)a0 oberver:(id)a1;
- (void)cancelLoadAllURLs:(id)a0;
- (BOOL)isImageLoaded:(id)a0;
- (void)removeImageCacheForKey:(id)a0;
- (void)removeGifDataCacheForKey:(id)a0;
- (void)removeCacheForURL:(id)a0;
- (void)removeCacheForURLs:(id)a0;
- (void)saveImage:(id)a0 imageData:(id)a1;
- (void)removeConnectionForUrl:(id)a0;
- (id)fetchSphereThumbIDForOriUrl:(id)a0 thumbSize:(struct CGSize { double x0; double x1; })a1;
- (void)connection:(id)a0 willSendRequestForAuthenticationChallenge:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (id)urlMD5ForConnection:(id)a0;
- (void)onCdnDownloadImageFinish:(id)a0 downloadType:(long long)a1;
- (void)onCdnDownloadImageFail:(id)a0 downloadType:(long long)a1;
- (id)cdnGetSnsOperationsWithFeedId:(id)a0;
- (void)onCdnDownloadImageAddedQueue:(id)a0 downloadType:(long long)a1;
- (void)onCdnDownloadImageBegin:(id)a0 downloadType:(long long)a1;
- (void)onCdnDownloadImageCancel:(id)a0 downloadType:(long long)a1;
- (void)onCdnDownloadImageProcessChanged:(id)a0 downloadType:(long long)a1 current:(long long)a2 total:(long long)a3;
- (void).cxx_destruct;

@end

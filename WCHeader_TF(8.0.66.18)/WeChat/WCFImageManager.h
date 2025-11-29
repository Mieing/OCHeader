@class NSObject, NSString, NSLock, WCFImageCache, NSMutableArray, WCFImageDownloader;
@protocol OS_dispatch_queue;

@interface WCFImageManager : MMUserService <MMServiceProtocol> {
    NSLock *_operationsLock;
}

@property (retain, nonatomic) WCFImageCache *cache;
@property (retain, nonatomic) WCFImageDownloader *downloader;
@property (retain, nonatomic) NSMutableArray *operations;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *blocksQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue1;
@property (nonatomic) BOOL fromShare;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)globalIOQueue;

- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (void)onServiceClearMemoryCache:(unsigned long long)a0 addedUserType:(unsigned long long)a1;
- (void)onServiceClearMemoryCacheInBackground;
- (void)removeOperation:(id)a0;
- (void)addOperation:(id)a0;
- (id)loadImageWithURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 options:(long long)a2 completion:(id /* block */)a3;
- (id)loadImageWithURL:(id)a0 imageIdentifier:(id)a1 size:(struct CGSize { double x0; double x1; })a2 options:(long long)a3 completion:(id /* block */)a4;
- (id)preloadImageWithMedia:(id)a0 isThumb:(BOOL)a1 completion:(id /* block */)a2;
- (id)preloadImageWithMedia:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (id)loadImageWithMedia:(id)a0 isThumb:(BOOL)a1 size:(struct CGSize { double x0; double x1; })a2 options:(long long)a3 completion:(id /* block */)a4;
- (id)loadImageWithMedia:(id)a0 type:(long long)a1 size:(struct CGSize { double x0; double x1; })a2 options:(long long)a3 completion:(id /* block */)a4;
- (id)loadImagesWithBlock:(id /* block */)a0 context:(id)a1 completion:(id /* block */)a2;
- (id)queryCacheForMedia:(id)a0 type:(long long)a1 size:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;
- (id)queryCacheForMedia:(id)a0 type:(long long)a1 size:(struct CGSize { double x0; double x1; })a2 options:(long long)a3 completion:(id /* block */)a4;
- (void)callDownload:(id)a0 media:(id)a1 key:(id)a2 param:(struct { long long x0; struct CGSize { double x0; double x1; } x1; long long x2; long long x3; })a3 completion:(id /* block */)a4;
- (void)callDownload:(id)a0 url:(id)a1 key:(id)a2 size:(struct CGSize { double x0; double x1; })a3 options:(long long)a4 completion:(id /* block */)a5;
- (void)callDownload:(id)a0 operations:(id)a1 param:(struct { long long x0; struct CGSize { double x0; double x1; } x1; long long x2; long long x3; })a2 completion:(id /* block */)a3;
- (void)callCompletion:(id /* block */)a0 operations:(id)a1 image:(id)a2 param:(struct { long long x0; struct CGSize { double x0; double x1; } x1; long long x2; long long x3; })a3 error:(id)a4;
- (void)callCompletion:(id /* block */)a0 image:(id)a1 key:(id)a2 param:(struct { long long x0; struct CGSize { double x0; double x1; } x1; long long x2; long long x3; })a3 error:(id)a4;
- (void)onImageLoaded:(id)a0 operation:(id)a1 key:(id)a2 error:(id)a3 param:(struct { long long x0; struct CGSize { double x0; double x1; } x1; long long x2; long long x3; })a4 finished:(BOOL)a5 completion:(id /* block */)a6;
- (id)imageCache;
- (id)imageDownloader;
- (void).cxx_destruct;

@end

@class NSOperationQueue, WCFImageDownloadQueue, WCFImageCache;

@interface WCFImageDownloader : NSObject

@property (retain, nonatomic) NSOperationQueue *decodeQueue;
@property (retain, nonatomic) WCFImageDownloadQueue *downloadQueue;
@property (nonatomic) long long serial;
@property (readonly, nonatomic) WCFImageCache *cache;

- (id)initWithCache:(id)a0;
- (BOOL)addOperation:(id)a0 forKey:(id)a1;
- (id)operationForKey:(id)a0;
- (void)removeOperation:(id)a0;
- (id)cancelToken;
- (id)requestImageWithURL:(id)a0 key:(id)a1 param:(struct { long long x0; struct CGSize { double x0; double x1; } x1; long long x2; long long x3; })a2 completion:(id /* block */)a3;
- (id)requestImageWithOperations:(id)a0 param:(struct { long long x0; struct CGSize { double x0; double x1; } x1; long long x2; long long x3; })a1 completion:(id /* block */)a2;
- (id)requestImageWithMedia:(id)a0 key:(id)a1 param:(struct { long long x0; struct CGSize { double x0; double x1; } x1; long long x2; long long x3; })a2 completion:(id /* block */)a3;
- (id)addOperation:(id)a0 completion:(id /* block */)a1 token:(id)a2 param:(struct { long long x0; struct CGSize { double x0; double x1; } x1; long long x2; long long x3; })a3;
- (void)OnCdnDownload:(id)a0;
- (void)onOperationFinished:(id)a0 info:(id)a1;
- (void)reportImageDownloadIDKeyWithOperation:(id)a0 info:(id)a1;
- (void).cxx_destruct;

@end

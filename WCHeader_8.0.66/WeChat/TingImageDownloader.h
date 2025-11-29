@class NSString, NSMutableDictionary;

@interface TingImageDownloader : NSObject <MMImageLoaderObserver, WCFacadeExt>

@property (retain, nonatomic) NSMutableDictionary *blockMap;
@property (retain, nonatomic) NSMutableDictionary *momentBlockMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)existHanlderForObserver:(id)a0 inHandlers:(id)a1;
- (id)cachedImageForUrl:(id)a0;
- (void)loadImageWithUrl:(id)a0 observer:(id)a1 completion:(id /* block */)a2;
- (void)cancelImageDownloadForUrl:(id)a0 observer:(id)a1;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (id)thumbnailItem:(id)a0;
- (id)keyForWCMediaItem:(id)a0 downloadType:(long long)a1;
- (id)cachedImageForWCMediaItem:(id)a0 photoType:(long long)a1;
- (id)cachedThumbnailForWCMediaItem:(id)a0;
- (void)loadMomentImage:(id)a0 downloadType:(long long)a1 observer:(id)a2 completion:(id /* block */)a3;
- (void)cancelDownloadMomentImage:(id)a0 downloadType:(long long)a1 observer:(id)a2;
- (void)loadMomentThumbnail:(id)a0 observer:(id)a1 completion:(id /* block */)a2;
- (void)cancelDownloadMomentThumbnail:(id)a0 observer:(id)a1;
- (void)cancelAllDownloadMomentImage:(id)a0;
- (void)onDownloadFinish:(id)a0 downloadType:(long long)a1;
- (void)onDownloadFail:(id)a0 downloadType:(long long)a1;
- (void).cxx_destruct;

@end

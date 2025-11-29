@class NSCache, NSString;
@protocol IESLiveMonitor;

@interface AWELiveWebImageServiceIMP : NSObject <IESLiveStrategyEventDispatcherObserver, IESLiveWebImageService>

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (nonatomic) BOOL optimizeQueryCacheImage;
@property (nonatomic) BOOL avoidImageRepeatToDisk;
@property (nonatomic) BOOL optimizeAlternativeURL;
@property (nonatomic) long long imageLoadPriority;
@property (nonatomic) long long imagePrefetchPriority;
@property (readonly, nonatomic) NSCache *imageCache;
@property (nonatomic) BOOL enableNSCache;
@property (nonatomic) BOOL enableBDCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)ieslive_getWebInternalType;
- (void)ieslive_appliedImageView:(id)a0 imageURLs:(id)a1 placeholderImage:(id)a2 cornerRadius:(double)a3 completed:(id /* block */)a4;
- (void)ieslive_appliedImageView:(id)a0 imageURLs:(id)a1 placeholderImage:(id)a2 needCircular:(BOOL)a3 completed:(id /* block */)a4;
- (void)ieslive_appliedImageView:(id)a0 imageURLs:(id)a1 placeholderImage:(id)a2 webImageOptions:(unsigned long long)a3 cornerRadius:(double)a4 completed:(id /* block */)a5;
- (void)ieslive_cancelCurrentImageLoadWithImageView:(id)a0;
- (void)ieslive_appliedUIButton:(id)a0 controlState:(unsigned long long)a1 imageURLs:(id)a2 placeholderImage:(id)a3 options:(unsigned long long)a4 cornerRadius:(double)a5 completed:(id /* block */)a6;
- (id)imageFromCacheWithKey:(id)a0 cacheType:(long long)a1;
- (id)imageCachePathForKey:(id)a0;
- (BOOL)imageExistInCacheWithKey:(id)a0 cacheType:(long long)a1;
- (void)storeImage:(id)a0 forKey:(id)a1 toDisk:(BOOL)a2;
- (void)storeImage:(id)a0 imageData:(id)a1 forKey:(id)a2 toDisk:(BOOL)a3;
- (void)loadImageWithURL:(id)a0 options:(unsigned long long)a1 complete:(id /* block */)a2;
- (void)loadImageWithURLs:(id)a0 options:(unsigned long long)a1 complete:(id /* block */)a2;
- (void)prefetchImagesWithURLs:(id)a0 complete:(id /* block */)a1;
- (id)createWebPDecoderWithData:(id)a0 scale:(double)a1;
- (id)createWebPPlayer;
- (id)webPPlayerWithName:(id)a0;
- (void)prefetchImagesWithURLs:(id)a0 cacheName:(id)a1 complete:(id /* block */)a2;
- (void)loadImageWithURL:(id)a0 options:(unsigned long long)a1 targetSize:(struct CGSize { double x0; double x1; })a2 complete:(id /* block */)a3;
- (id)createWebPPlayerWithDisplayLinkOptimize:(BOOL)a0;
- (id)imageWithData:(id)a0 preloadAllFrame:(BOOL)a1;
- (void)ieslive_appliedImageView:(id)a0 imageURLs:(id)a1 placeholderImage:(id)a2 cornerRadius:(double)a3 cacheName:(id)a4 completed:(id /* block */)a5;
- (BOOL)strategyUpdateFactor:(id)a0 toValue:(id)a1;
- (void)registerCache;
- (BOOL)cache_opt_appliedImageView:(id)a0 imageURLs:(id)a1 placeholderImage:(id)a2 cornerRadius:(double)a3 needCircular:(BOOL)a4 webImageOptions:(unsigned long long)a5 cacheName:(id)a6 completed:(id /* block */)a7;
- (long long)optimizeRequestPriority:(long long)a0 remotePriority:(long long)a1;
- (BOOL)cache_opt_appliedUIButton:(id)a0 controlState:(unsigned long long)a1 imageURLs:(id)a2 placeholderImage:(id)a3 options:(unsigned long long)a4 cornerRadius:(double)a5 completed:(id /* block */)a6;
- (BOOL)cache_opt_loadImageWithURL:(id)a0 URLs:(id)a1 options:(unsigned long long)a2 complete:(id /* block */)a3;
- (id)hasNSImageCache:(id)a0;
- (id)fixImage:(id)a0 cornerRadius:(double)a1 needCircular:(BOOL)a2;
- (void)setNewNSCacheWithImage:(id)a0 key:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)imageDataForKey:(id)a0;
- (void)setupConfig;

@end

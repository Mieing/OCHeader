@class NSString;

@interface BUADServiceImage : NSObject <BUADServiceImageProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cloneInstance:(id /* block */)a0;
- (id)adServiceVersion;
- (void)setImageViewTarget:(id)a0 imageWithURL:(id)a1 completed:(id /* block */)a2;
- (void)setImageViewTarget:(id)a0 imageWithURL:(id)a1 placeholderImage:(id)a2 completed:(id /* block */)a3;
- (void)downloadImageWithURL:(id)a0 options:(unsigned long long)a1 completed:(id /* block */)a2;
- (void)prefetchURLs:(id)a0 completed:(id /* block */)a1;
- (id)imageFromCacheForURL:(id)a0;
- (id)imageFromCacheForKey:(id)a0;
- (id)cacheKeyForURL:(id)a0;
- (void)storeImage:(id)a0 imageData:(id)a1 forKey:(id)a2 cacheType:(long long)a3 completion:(id /* block */)a4;
- (void)setMaxMemoryCount:(unsigned long long)a0;
- (void)setMaxMemoryCost:(unsigned long long)a0;
- (id)loadImageWithURL:(id)a0 completed:(id /* block */)a1;
- (void)storeImageData:(id)a0 forKey:(id)a1;
- (id)imageDataForKey:(id)a0;

@end

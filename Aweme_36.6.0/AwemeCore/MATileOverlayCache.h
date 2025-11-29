@class NSString, NSCache;

@interface MATileOverlayCache : NSObject <NSCacheDelegate> {
    NSCache *_imageCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTileSize:(struct CGSize { double x0; double x1; })a0;
- (void)setCachedObject:(id)a0 key:(id)a1;
- (void).cxx_destruct;
- (void)clear;
- (id)cachedObjectForKey:(id)a0;
- (void)cache:(id)a0 willEvictObject:(id)a1;

@end

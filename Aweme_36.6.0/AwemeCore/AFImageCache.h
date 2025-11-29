@class NSString;

@interface AFImageCache : NSCache <AFImageCache>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cachedImageForRequest:(id)a0;
- (void)cacheImage:(id)a0 forRequest:(id)a1;

@end

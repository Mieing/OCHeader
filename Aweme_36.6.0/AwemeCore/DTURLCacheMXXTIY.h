@interface DTURLCacheMXXTIY : NSURLCache

+ (id)diskPath;
+ (id)CalculateETag:(id)a0;
+ (BOOL)hasETagInResponse:(id)a0;
+ (id)synthesisRequest:(id)a0;
+ (id)sharedCache;

- (id)ETagForRequest:(id)a0;
- (id)cachedResponseForRequest:(id)a0;
- (void)storeCachedResponse:(id)a0 forRequest:(id)a1;

@end

@class NSString;

@interface LiteAppJsApiAddImageToFavorites : LiteAppJsApi <IHttpCacheExt> {
    NSString *_cacheKey;
}

- (id)init;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)addToFavoritesWithImageData:(id)a0;
- (unsigned long long)getImageDataWithHttpUrl:(id)a0 dataPtr:(id *)a1;
- (id)genKeyForUrl:(id)a0;
- (void)OnHttpGetFinish:(id)a0 response:(id)a1 ErrNo:(int)a2 isWebp:(BOOL)a3;
- (void).cxx_destruct;

@end

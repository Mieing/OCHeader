@class NSString;

@interface WAJSEventHandler_addImageToFavorites : WAJSEventHandler_BaseEvent <IHttpCacheExt> {
    NSString *_cacheKey;
}

- (id)init;
- (void)handleJSEvent:(id)a0;
- (void)addToFavoritesWithImageData:(id)a0;
- (unsigned long long)getImageDataWithHttpUrl:(id)a0 dataPtr:(id *)a1;
- (id)getImageDataWithLocalId:(id)a0;
- (id)getImageDataWithPackageRelativeURL:(id)a0;
- (id)genKeyForUrl:(id)a0;
- (void)OnHttpGetFinish:(id)a0 response:(id)a1 ErrNo:(int)a2 isWebp:(BOOL)a3;
- (void).cxx_destruct;

@end

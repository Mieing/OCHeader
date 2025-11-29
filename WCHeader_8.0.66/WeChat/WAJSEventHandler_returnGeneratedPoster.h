@class NSString;

@interface WAJSEventHandler_returnGeneratedPoster : WAJSEventHandler_BaseEvent <IHttpCacheExt>

@property (copy, nonatomic) id /* block */ getImageCompletion;
@property (retain, nonatomic) NSString *cacheKey;

- (void)handleJSEvent:(id)a0;
- (void)getImageDataFromImageURL:(id)a0 completion:(id /* block */)a1;
- (void)OnHttpGetFinish:(id)a0 response:(id)a1 ErrNo:(int)a2 isWebp:(BOOL)a3;
- (id)genCacheKeyForUrl:(id)a0;
- (void).cxx_destruct;

@end

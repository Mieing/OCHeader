@class NSString;

@interface WebviewJSEventHandler_downloadMediaByUrl : WebviewJSEventHandlerBase <IHttpCacheExt, IWebviewResourceManagerExt>

@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) id /* block */ getDataCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)getDataFromURL:(id)a0 completion:(id /* block */)a1;
- (void)OnHttpGetFinish:(id)a0 response:(id)a1 ErrNo:(int)a2 isWebp:(BOOL)a3;
- (id)genCacheKeyForUrl:(id)a0;
- (void)processImageData:(id)a0;
- (void)processVideoData:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end

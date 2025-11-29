@class HybridContext, NSString, NSMapTable, NSDictionary, NSNumber, LynxView;
@protocol HybridResourceService, HybridLynxResourceProviderDelegate, LynxTemplateProvider;

@interface HybridLynxResourceProvider : NSObject <LynxTemplateProvider, LynxImageFetcher, LynxResourceFetcher, LynxDynamicComponentFetcher, LynxResourceProvider>

@property (retain, nonatomic) NSMapTable *requestMap;
@property (weak, nonatomic) id<HybridLynxResourceProviderDelegate> delegate;
@property (copy, nonatomic) NSString *templateSourceURL;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSNumber *dynamic;
@property (copy, nonatomic) NSNumber *disableGurd;
@property (copy, nonatomic) NSNumber *disableBuildin;
@property (copy, nonatomic) NSNumber *enableMemoryCache;
@property (nonatomic) double containerInitCost;
@property (copy, nonatomic) NSNumber *useForest;
@property (nonatomic) BOOL lockResource;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSDictionary *templateResData;
@property (weak, nonatomic) LynxView *lynxview;
@property (weak, nonatomic) HybridContext *context;
@property (nonatomic) BOOL isGeckoUpdate;
@property (weak, nonatomic) id<LynxTemplateProvider> customTemplateProvider;
@property (retain, nonatomic) id<HybridResourceService> resourceLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)loadImageWithURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 contextInfo:(id)a2 completion:(id /* block */)a3;
- (void)loadTemplateWithUrl:(id)a0 onComplete:(id /* block */)a1;
- (void)loadDynamicComponent:(id)a0 withLoadedBlock:(id /* block */)a1;
- (id /* block */)loadResourceWithURL:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (id)redirectURL:(id)a0;
- (void)request:(id)a0 onComplete:(id /* block */)a1;
- (id /* block */)loadCanvasImageWithURL:(id)a0 contextInfo:(id)a1 completion:(id /* block */)a2;
- (id)imageWithData:(id)a0 downsampling:(BOOL)a1 downsampleSize:(struct CGSize { double x0; double x1; })a2;
- (void)handleImageCallback:(id)a0 uiImage:(id)a1 error:(id)a2 callback:(id /* block */)a3 url:(id)a4 cacheType:(unsigned long long)a5;
- (void)cacheImage:(id)a0 uiImage:(id)a1 imageData:(id)a2 cacheType:(unsigned long long)a3;
- (void).cxx_destruct;
- (void)cancel:(id)a0;

@end

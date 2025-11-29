@class BDXLynxKitParams, BDXResourceLoader, NSRecursiveLock, NSString, BDXContext, LynxView, NSMapTable, NSNumber;
@protocol BDXLynxResourceProviderDelegate, LynxTemplateProvider;

@interface BDXLynxResourceProvider : NSObject <BDXLynxResourceProviderProtocol>

@property (class, nonatomic) BOOL asyncLoadImage;

@property (retain, nonatomic) NSMapTable *requestMap;
@property (retain, nonatomic) NSRecursiveLock *resourceLock;
@property (retain, nonatomic) BDXResourceLoader *resourceLoader;
@property (weak, nonatomic) id<BDXLynxResourceProviderDelegate> delegate;
@property (copy, nonatomic) NSString *templateSourceURL;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (retain, nonatomic) NSNumber *dynamic;
@property (copy, nonatomic) NSString *geckoUpdatePolicy;
@property (copy, nonatomic) NSNumber *disableGurd;
@property (copy, nonatomic) NSNumber *disableBuildin;
@property (copy, nonatomic) NSNumber *disableMemory;
@property (copy, nonatomic) NSNumber *disableCDNCache;
@property (weak, nonatomic) LynxView *lynxView;
@property (weak, nonatomic) BDXContext *context;
@property (retain, nonatomic) BDXLynxKitParams *lynxKitParams;
@property (weak, nonatomic) id<LynxTemplateProvider> customTemplateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodeImage:(id)a0;

- (id /* block */)loadImageWithURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 contextInfo:(id)a2 completion:(id /* block */)a3;
- (void)updateLoaderConfig:(id)a0;
- (void)updateWithLynxParams:(id)a0;
- (void)loadTemplateWithUrl:(id)a0 onComplete:(id /* block */)a1;
- (void)loadDynamicComponent:(id)a0 withLoadedBlock:(id /* block */)a1;
- (id /* block */)loadResourceWithURL:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (id)redirectURL:(id)a0;
- (void)fetchResourceDataWithURLString:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchLocalFileWithURLString:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)request:(id)a0 onComplete:(id /* block */)a1;
- (id)initWithLynxParams:(id)a0;
- (id /* block */)loadCanvasImageWithURL:(id)a0 contextInfo:(id)a1 completion:(id /* block */)a2;
- (id)_loadImageWithURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 contextInfo:(id)a2 completion:(id /* block */)a3;
- (id)getCacheFromBDImageCache:(id)a0 size:(struct CGSize { double x0; double x1; })a1 url:(id)a2;
- (void)cacheImageToMemoryWithCacheKey:(id)a0 resourceProvider:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)cancel:(id)a0;

@end

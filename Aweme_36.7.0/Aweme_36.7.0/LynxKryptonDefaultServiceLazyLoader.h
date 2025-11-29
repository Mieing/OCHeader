@class LynxContext, NSString, LynxKryptonLoader, KryptonDefaultMediaRecorderService, LynxKryptonLoaderServiceImpl;

@interface LynxKryptonDefaultServiceLazyLoader : NSObject <KryptonServiceLazyLoader> {
    NSString *_temporaryDirectory;
    KryptonDefaultMediaRecorderService *_currentRecorderService;
    LynxKryptonLoader *_currentLoaderService;
    LynxKryptonLoaderServiceImpl *_currentLoaderServiceImpl;
    LynxContext *_weakLynxContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isLynxGenericFetcherEnabled;

- (id)initWithLynxContext:(id)a0;
- (id)createServiceInstance:(id)a0;
- (void)registerToKryptonApp:(id)a0;
- (unsigned char)usingLynxGenericFetcherInCanvas;
- (void).cxx_destruct;
- (void)setTemporaryDirectory:(id)a0;

@end

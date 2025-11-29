@class LynxContext, NSString, LynxKryptonLoader, KryptonDefaultMediaRecorderService;

@interface LynxKryptonDefaultServiceLazyLoader : NSObject <KryptonServiceLazyLoader> {
    NSString *_temporaryDirectory;
    KryptonDefaultMediaRecorderService *_currentRecorderService;
    LynxKryptonLoader *_currentLoaderService;
    LynxContext *_weakLynxContext;
    id /* block */ _resourceFetcherProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLynxContext:(id)a0;
- (id)createServiceInstance:(id)a0;
- (void)setResourceFetcherProvider:(id /* block */)a0;
- (void)registerToKryptonApp:(id)a0;
- (void).cxx_destruct;
- (void)setTemporaryDirectory:(id)a0;

@end

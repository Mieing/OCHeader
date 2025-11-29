@class NSString;

@interface PIAWebViewContainer : NSObject <PIALifeCycleReceiver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeAfterPrepareTask;
+ (id)getReceiverInstance;

- (void)onOpenScheme:(id)a0;
- (void)engine:(id)a0 onLoadStart:(id)a1;
- (void)engine:(id)a0 onURLChange:(id)a1;
- (void)onNavigationCommit:(id)a0;
- (void)engine:(id)a0 onLoadFinish:(id)a1;
- (void)onEngineDestroy:(id)a0;
- (id)p_getPageConfigFromURL:(id)a0;
- (void)injectPIAContextAndFetchManifest:(id)a0;
- (void)releasePIAPortWithInstance:(id)a0;
- (void)releaseContextWithInstance:(id)a0;
- (void)updateUserAgent:(id)a0 URL:(id)a1;
- (void)fetchManifestFromContext:(id)a0;
- (void)p_updateManifest:(id)a0 context:(id)a1;
- (void)p_tryCacheManifestIfNeed:(id)a0 context:(id)a1;
- (void)p_validateAsyncWithContext:(id)a0 version:(id)a1 completion:(id /* block */)a2;
- (void)p_onFetchManifest:(id)a0 context:(id)a1 manifestString:(id)a2;
- (id)_init;

@end

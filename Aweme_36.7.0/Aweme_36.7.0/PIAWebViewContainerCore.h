@class NSString;

@interface PIAWebViewContainerCore : NSObject <PIALifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeAfterPrepareTask;
+ (id)getReceiverInstance;

- (void)engine:(id)a0 onLoadStart:(id)a1;
- (void)engine:(id)a0 onURLChange:(id)a1;
- (void)engine:(id)a0 onLoadFinish:(id)a1;
- (void)onEngineDestroy:(id)a0;
- (void)updateUserAgent:(id)a0 URL:(id)a1;
- (void)injectPIAEngineAndFetchManifest:(id)a0 URL:(id)a1;
- (void)reportPVEvent:(id)a0 webView:(id)a1;

@end

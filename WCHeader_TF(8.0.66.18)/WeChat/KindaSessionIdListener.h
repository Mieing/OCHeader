@class NSString, LiteAppDynamicModuleCallback, MMWebViewController, WAAppTask;

@interface KindaSessionIdListener : NSObject <MMKindaSessionIdListener>

@property (weak, nonatomic) MMWebViewController *webViewController;
@property (weak, nonatomic) WAAppTask *appTask;
@property (retain, nonatomic) LiteAppDynamicModuleCallback *liteappCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onSessionId:(id)a0;
- (BOOL)isWebViewInUI;
- (BOOL)isLiteAppAlive;
- (void)unlisten;
- (void).cxx_destruct;

@end

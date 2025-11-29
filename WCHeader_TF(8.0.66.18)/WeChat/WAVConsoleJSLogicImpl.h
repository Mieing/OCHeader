@class NSString, YYBaseWebView;
@protocol WAVConsoleJSLogicImplDelegate;

@interface WAVConsoleJSLogicImpl : MMObject

@property (copy, nonatomic) NSString *curRandomUUID;
@property (copy, nonatomic) NSString *curContextUUID;
@property (weak, nonatomic) YYBaseWebView *webView;
@property (weak, nonatomic) id<WAVConsoleJSLogicImplDelegate> delegate;

- (id)init;
- (id)weixinJSBridge;
- (id)fetchPublicResLogic;
- (void)handleJSApiDispatchMessage:(id)a0 webviewId:(unsigned int)a1;
- (void)endEventWithResult:(id)a0 callbackID:(id)a1;
- (void)tryInjectWeixinJSBridge:(id)a0;
- (void)resetSysInitMarkIfNeeded;
- (void)sysInitDocument:(id)a0;
- (void)injectWeixinJSBridge;
- (void)injectVConsole;
- (void)sendMessageToJSBridge:(id)a0 completionBlock:(id /* block */)a1;
- (void)sendEventToJSBridge:(id)a0 params:(id)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end

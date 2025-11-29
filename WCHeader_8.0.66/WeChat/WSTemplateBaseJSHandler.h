@class NSString, MMUIViewController;
@protocol WSTemplateBaseJSHandlerDelegate;

@interface WSTemplateBaseJSHandler : NSObject <WSTemplateJSLogicImplDelegate>

@property (weak, nonatomic) id<WSTemplateBaseJSHandlerDelegate> delegate;
@property (weak, nonatomic) MMUIViewController *containerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSApi_openAdPage:(id)a0 callbackID:(id)a1;
- (id)jsEventsNeedRegister;
- (BOOL)onJsApiHandlerForwardDealWithFunc:(id)a0 params:(id)a1 callbackID:(id)a2;
- (void)handleJSApi_OpenWebView:(id)a0 callbackID:(id)a1;
- (void)handleJSApi_log:(id)a0 callbackID:(id)a1;
- (void)handleJSApi_openWeAppPage:(id)a0 callbackID:(id)a1;
- (void)handleJSApi_reportKV:(id)a0 callbackID:(id)a1;
- (void)handleJSApi_ClosePage:(id)a0 callbackID:(id)a1;
- (void)handleJSApi_openProfilePage:(id)a0 callbackID:(id)a1;
- (void)handleJSApi_playVideo:(id)a0 callbackID:(id)a1;
- (void)handleJSApi_openFinderView:(id)a0 callbackID:(id)a1;
- (void).cxx_destruct;

@end

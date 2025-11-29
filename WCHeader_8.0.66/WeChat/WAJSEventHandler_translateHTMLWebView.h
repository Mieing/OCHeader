@class NSString, WAWebViewPlugin_HTMLWeb;

@interface WAJSEventHandler_translateHTMLWebView : WAJSEventHandler_BaseEvent <WAWebViewPlugin_HTMLWeb_Ext>

@property (weak, nonatomic) WAWebViewPlugin_HTMLWeb *htmlWeb;
@property (nonatomic) BOOL translate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)handleJSEvent:(id)a0;
- (void)onHTMLWeb:(id)a0 translateFinish:(BOOL)a1;
- (void)onHTMLWeb:(id)a0 translateRevertFinish:(BOOL)a1;
- (void).cxx_destruct;

@end

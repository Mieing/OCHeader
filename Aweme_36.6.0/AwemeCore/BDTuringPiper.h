@class NSString, WKWebView, NSMutableDictionary;

@interface BDTuringPiper : NSObject <WKScriptMessageHandler>

@property (weak, nonatomic) WKWebView *webView;
@property (retain, nonatomic) NSMutableDictionary *webOnCommands;
@property (retain, nonatomic) NSMutableDictionary *nativeOnCommands;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)on:(id)a0 callback:(id /* block */)a1;
- (void)callNative:(id)a0 command:(id)a1;
- (id)nativeOnCommandForPiperName:(id)a0;
- (BOOL)webOnPiper:(id)a0;
- (void)call:(id)a0 msg:(long long)a1 params:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;

@end

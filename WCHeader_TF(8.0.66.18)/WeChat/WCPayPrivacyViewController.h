@class WCPayPrivacyToolView, GetPayUserDutyResp, NSString, NSURLRequest, WCPayGetPayUserDutyCgi, WCPaySetPayUserDutyCgi;
@protocol WCPayPrivacyViewControllerDelegate;

@interface WCPayPrivacyViewController : MMWebViewController <MMWebViewDelegate, YYWebViewDelegate, WCPayPrivacyToolViewDelegate, WCPayGetPayUserDutyCgiDelegate, WCPaySetPayUserDutyCgiDelegate>

@property (weak, nonatomic) id<WCPayPrivacyViewControllerDelegate> m_privacyDelegate;
@property (retain, nonatomic) WCPaySetPayUserDutyCgi *m_setDutyCgi;
@property (retain, nonatomic) WCPayGetPayUserDutyCgi *m_getDutyCgi;
@property (retain, nonatomic) WCPayPrivacyToolView *m_toolView;
@property (retain, nonatomic) GetPayUserDutyResp *getPayUserDutyCgiResp;
@property double currentWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSURLRequest *request;

+ (id)instanceWithDelegate:(id)a0 html:(id)a1;

- (void)updateHtmlString:(id)a0;
- (void)viewDidLoad;
- (void)updateContent;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)a0;
- (void)updateToolView;
- (void)updateFrame;
- (void)viewDidLayoutSubviews;
- (id)initWithDelegate:(id)a0 html:(id)a1 presetUI:(id)a2;
- (void)onWCPayGetPayUserDutyCgiResp:(id)a0;
- (void)onWCPayGetPayUserDutyCgiError:(id)a0;
- (void)onErrorClose;
- (void)onWCPaySetPayUserDutyCgiResp:(id)a0;
- (void)onWCPaySetPayUserDutyCgiError:(id)a0;
- (void)onWCPayPrivacyToolViewClickAgree:(BOOL)a0;
- (void)onWebViewDidFinishLoad:(id)a0;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2 isMainFrame:(BOOL)a3 navigationAction:(id)a4;
- (void)reportWithScene:(unsigned long long)a0;
- (void)updateHtmlView;
- (void)webviewDidReceiveScriptMessage:(id)a0 handler:(id)a1 rawMessage:(id)a2;
- (void).cxx_destruct;

@end

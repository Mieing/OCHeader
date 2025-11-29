@class CJPayBizWebViewController, NSString, NSDictionary, WKWebView, NSMutableDictionary;
@protocol CJPay3DSModuleDelegate;

@interface CJPay3DSVerifyModule : NSObject <CJPay3DSVerifyProtocol>

@property (copy, nonatomic) NSDictionary *setupDic;
@property (copy, nonatomic) NSString *referenceId;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) WKWebView *dmWebview;
@property (retain, nonatomic) WKWebView *setupWebview;
@property (retain, nonatomic) NSMutableDictionary *cardToReferenceModel;
@property (retain, nonatomic) CJPayBizWebViewController *challengeVC;
@property (retain, nonatomic) NSMutableDictionary *cardToBlocks;
@property (weak, nonatomic) id<CJPay3DSModuleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPlugin;

- (void)setup3DSVerify:(id)a0 completion:(id /* block */)a1 timeOut:(double)a2;
- (void)prepareDM;
- (void)prepareDMWith:(id)a0;
- (void)challengeFor3DS:(id)a0 completion:(id /* block */)a1;
- (id)default3DSRiskInfo;
- (id)buildConfirmRequestParams:(id)a0;
- (BOOL)currentChannelIsForeignCard;
- (BOOL)isPreSetupReady;
- (id)currentChannelCJIdentify;
- (void)asyncReadContentFrom:(id)a0 completion:(id /* block */)a1;
- (void)ddcWithUrl:(id)a0 token:(id)a1 completion:(id /* block */)a2;
- (id)p_buildWebivew:(id)a0 completion:(id /* block */)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;

@end

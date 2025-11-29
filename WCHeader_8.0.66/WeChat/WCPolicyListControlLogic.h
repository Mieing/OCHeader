@class NSString, MMWebViewController;

@interface WCPolicyListControlLogic : NSObject <MMWebViewDelegate>

@property (retain, nonatomic) NSString *policylist_url;
@property (weak, nonatomic) MMWebViewController *curWebViewController;
@property (retain, nonatomic) NSString *policylist_list;
@property (retain, nonatomic) NSString *policylist_ticket;
@property (retain, nonatomic) NSString *doublecheck_content;
@property (retain, nonatomic) NSString *doublecheck_cancel;
@property (retain, nonatomic) NSString *doublecheck_ok;
@property (nonatomic) BOOL hideCloseBtn;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) BOOL skipOpIfDisagree;
@property (nonatomic) BOOL endWithAnyResponse;
@property (nonatomic) BOOL autoCloseWebView;
@property (copy, nonatomic) id /* block */ endBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)showPolicyListUrl:(id)a0 fromViewController:(id)a1;
- (id)topViewController;
- (void)startLoading;
- (void)stopLoading;
- (void)endWithIsAgreed:(BOOL)a0;
- (void)onWebViewDisagree;
- (void)onWebViewClickClose;
- (id)accessStrFromDic:(id)a0 forKey:(id)a1;
- (void)agreementOpWithDic:(id)a0;
- (id)onWebViewPassParams:(id)a0 Webview:(id)a1;
- (void).cxx_destruct;

@end

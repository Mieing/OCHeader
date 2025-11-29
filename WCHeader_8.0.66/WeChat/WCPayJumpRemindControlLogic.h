@class MMWebViewController, WCPayJumpRemindInfo, NSString;
@protocol MMUIViewControllerDelegate;

@interface WCPayJumpRemindControlLogic : MMObject <MMTipsViewControllerDelegate, MMWebViewDelegate>

@property (retain, nonatomic) MMWebViewController *m_gdprUserKeyInfoWebviewController;
@property (copy, nonatomic) id /* block */ interceptBlk;
@property (copy, nonatomic) id /* block */ continueBlk;
@property (retain, nonatomic) WCPayJumpRemindInfo *jumpRemindInfo;
@property (weak, nonatomic) id<MMUIViewControllerDelegate> vcRootDelegate;
@property (nonatomic) unsigned int clientScene;
@property (nonatomic) unsigned int payScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJumpRemindInfo:(id)a0 clientScene:(unsigned int)a1 payScene:(unsigned int)a2 vcRootDelegate:(id)a3 onIntercept:(id /* block */)a4 onContinue:(id /* block */)a5;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 tipTag:(long long)a2;
- (id)getAppendClientVersionInUrl:(id)a0 clientScene:(unsigned int)a1 payScene:(unsigned int)a2;
- (void)handleJumpUrl;
- (id)onWebViewPassParams:(id)a0 Webview:(id)a1;
- (void)onAppTaskDidEnterBackground:(id)a0 mode:(long long)a1;
- (void)excuteBlk:(BOOL)a0 nativepath:(id)a1;
- (void).cxx_destruct;

@end

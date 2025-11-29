@class NSString, MMUIViewController, XMailCommitBindCgi;
@protocol XMailBindMailControlLogicDelegate;

@interface XMailBindMailControlLogic : MMObject <MMWebViewDelegate, XMailCommitBindCgiDelegate, MMUIViewControllerExt, XMailPrepareBindCgiDelegate>

@property (retain, nonatomic) XMailCommitBindCgi *commitBindCgi;
@property (weak, nonatomic) id<XMailBindMailControlLogicDelegate> delegate;
@property (weak, nonatomic) MMUIViewController *rootViewController;
@property (retain, nonatomic) NSString *defaultMailAddr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLogic;
- (void)showLoginMailWebViewWithUrl:(id)a0 fromViewController:(id)a1;
- (id)currentViewController;
- (void)startLoading;
- (void)stopLoading;
- (void)startCommitBindWxRegMailAddr:(id)a0 fromViewController:(id)a1;
- (void)checkBeforeSwitchToMailAddr:(id)a0 completionblock:(id /* block */)a1;
- (void)exitIfBackToRootVC;
- (void)MMUIViewControllerDidBeDismissed:(id)a0;
- (void)MMUIViewControllerDidBePoped:(id)a0;
- (void)onWebViewClickClose:(id)a0;
- (id)onWebViewPassParams:(id)a0 Webview:(id)a1;
- (void)onXMailCommitBindCgiSuccess:(id)a0 mailAddr:(id)a1;
- (void)onXMailPrepareBindCgi:(id)a0 success:(BOOL)a1 loginUrl:(id)a2 wxRegMailAddr:(id)a3 wxMailRegUrl:(id)a4 wxMailHeadUrl:(id)a5;
- (void).cxx_destruct;

@end

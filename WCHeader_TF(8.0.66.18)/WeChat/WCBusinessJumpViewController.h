@class NSString, NSDictionary, MMUIViewController;

@interface WCBusinessJumpViewController : MMUIViewController <IContactMgrExt> {
    NSString *_url;
    NSString *_jumpUrl;
    MMUIViewController *_parentViewController;
}

@property (copy, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) NSDictionary *dictTranslateInfo;
@property (nonatomic) BOOL sendreqWhenViewDidAppear;

- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (id)initWithUrl:(id)a0 translateInfo:(id)a1 parentViewController:(id)a2;
- (void)viewDidDisappear:(BOOL)a0;
- (void)removeSelfFromNavigationController;
- (void)setLoadingViewTitle:(id)a0;
- (void)stopLoadingAndShowOK:(id)a0;
- (void)stopLoadingAndShowError:(id)a0;
- (void)sendTranslateReq;
- (void)handleTranslateLinkResult:(id)a0 isAsync:(BOOL)a1 isSuccess:(BOOL)a2 error:(id)a3 andParameter:(id)a4;
- (BOOL)isTranslateLinkResultNeedCache:(id)a0 andParameter:(id)a1;
- (void)showFailErrorMsg:(id)a0;
- (void)showFailErrorMsg:(id)a0 handler:(id /* block */)a1;
- (void)onReturn;
- (void)handleBackAppWithErr:(int)a0;
- (void)handleBusinessJump:(id)a0 extParams:(id)a1 result:(id)a2;
- (void)handleRefreshTokenJump:(id)a0;
- (void)handleRedirectUrlResult:(id)a0;
- (void)PresentModalViewController:(id)a0 animated:(BOOL)a1 forceFullScreen:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end

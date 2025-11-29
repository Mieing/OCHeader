@class NSString, AWEBatManBusinessModel;
@protocol XPlayBusinessConfigProtocol, XPlayItemProtocol, AWEBatManAuthServiceTrakerDelegate;

@interface AWEBatManAuthProcessManager : NSObject <AWEBatManIDCardAuthViewControllerActionDelegate>

@property (weak, nonatomic) id<XPlayItemProtocol> playItem;
@property (retain, nonatomic) id<XPlayBusinessConfigProtocol> businessConfig;
@property (retain, nonatomic) AWEBatManBusinessModel *businessModel;
@property (nonatomic) BOOL isShowLoginPrivacyDialog;
@property (nonatomic) BOOL useNewAuthLogic;
@property (weak, nonatomic) id<AWEBatManAuthServiceTrakerDelegate> trackerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)trackLogWithMessage:(id)a0;
- (void)realStartAuthWithCompletion:(id /* block */)a0;
- (void)realStartRealNameWithCompletion:(id /* block */)a0;
- (void)realStartAuthCGWithAuthInfo:(id)a0 completion:(id /* block */)a1;
- (id)createAuthModelWith:(id)a0;
- (void)showRefuseLoginAlertWith:(id)a0 completion:(id /* block */)a1;
- (void)startDouyinRealNameAuthWithAuth:(id)a0 completion:(id /* block */)a1;
- (void)startNameInterconnectionAuthWithAuth:(id)a0 completion:(id /* block */)a1;
- (void)startOpenPlatformAuthWithAuth:(id)a0 completion:(id /* block */)a1;
- (void)startDouyinLoginWithCompletion:(id /* block */)a0;
- (id)createBatmanAuthModel;
- (void)orientationRotateTo:(long long)a0;
- (id)stringBussinessResult:(long long)a0;
- (void)startNewRealNameLocalAuthWithAuth:(id)a0 completion:(id /* block */)a1;
- (void)callRealNameAuthWith:(id)a0 callback:(id /* block */)a1;
- (void)callRealNameInterconnectionAuthWith:(id)a0 callback:(id /* block */)a1;
- (void)callNewRealNameLocalAuthViewControllerWith:(id)a0 callback:(id /* block */)a1;
- (void)showRefuseOpenPlatformAuthAlertWith:(id)a0 completion:(id /* block */)a1;
- (void)callOpenPlatformAuthRequestWithAuth:(id)a0 callback:(id /* block */)a1;
- (void)checkRealNameAuthActionStatus:(id /* block */)a0;
- (long long)bussinessResultTypeOfAuth:(long long)a0;
- (int)trackerOpenplatformOfBusinessResult:(long long)a0;
- (void)onCloseButtonClickedWithCheck:(BOOL)a0;
- (void)onConfirmButtonClickedWithCheck:(BOOL)a0;
- (void)onRetainDialogConfirmClicked;
- (void)onRetainDialogExitClicked;
- (void)startAuthWithWithXPlayItem:(id)a0 xplayBusinessConfig:(id)a1 batManBusinessModel:(id)a2 completion:(id /* block */)a3;
- (void)startRealNameAuthWithXPlayItem:(id)a0 xplayBusinessConfig:(id)a1 batManBusinessModel:(id)a2 completion:(id /* block */)a3;
- (void)startAuthCGWithXPlayItem:(id)a0 xplayAuthInfo:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end

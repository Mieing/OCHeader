@class IPadAuthSuccessContainView, NSString, IPadQRCodeOAuthLogic, IPadAuthContainView;
@protocol IPadQRCodeOAuthViewControllerDelegate;

@interface IPadQRCodeOAuthViewController : MMUIViewController <IPadAuthContainViewDelegate, IPadQRCodeOAuthLogicDelegate>

@property (retain, nonatomic) IPadAuthContainView *authContainView;
@property (retain, nonatomic) IPadAuthSuccessContainView *authSuccContainView;
@property (retain, nonatomic) IPadQRCodeOAuthLogic *authLogic;
@property (weak, nonatomic) id<IPadQRCodeOAuthViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithReqInfo:(id)a0;
- (void)initDataWithReqInfo:(id)a0;
- (void)viewDidLoad;
- (void)initNavigationBar;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)updateWithAuthData:(id)a0;
- (void)onCancelButtonClicked;
- (void)onRefreshButtonClicked;
- (void)onGetAuthData:(id)a0;
- (void)onScanQRCode;
- (void)onCancelAuth;
- (void)onQRCodeExpire;
- (void)onConfirmAuth:(id)a0 confirmRedirectUrl:(id)a1 confirmWording:(id)a2 nickName:(id)a3 appIconUrl:(id)a4 appNickname:(id)a5;
- (void)onAuthFailWithErrMsg:(id)a0 errCode:(int)a1 errType:(unsigned int)a2;
- (void).cxx_destruct;

@end

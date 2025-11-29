@class UIButton, NSString, UIImageView, MMUIActivityIndicatorView, UILabel, PushLoginURLCGI, WCButtonListView;
@protocol WCAccountOneClickLoginViewControllerDelegate;

@interface WCAccountOneClickLoginViewController : WCAccountBaseViewController <PushLoginURLCGIDelegate> {
    UIImageView *_headImgView;
    UILabel *_tipsLabel;
    UILabel *_nickNameLabel;
    UIButton *_loginBtn;
    UIButton *_disconnectBtn;
    UIButton *_cancleLogin;
    MMUIActivityIndicatorView *_logingLoading;
    PushLoginURLCGI *_pushLoginURLCGI;
    BOOL _isDoingAuth;
    id<WCAccountOneClickLoginViewControllerDelegate> _delegate;
}

@property (retain, nonatomic) WCButtonListView *bottomWatchLiveButtonView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)useTableView;
- (id)getPushLoginURLCGI;
- (void)showLoginingView;
- (void)onMore;
- (void)onDisconnectBtnClicked;
- (void)onLoginBtnClicked;
- (void)onPushLoginURLFailedWithError;
- (void)onPushLoginURLSuccess;
- (void)onPushLoginURLCanceled;
- (void)onPushLoginURLConfrimed;
- (id)onPushLoginURLGetCurrentViewController;
- (void)loginByQRCode;
- (void)cancleOneClickLogin;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;

@end

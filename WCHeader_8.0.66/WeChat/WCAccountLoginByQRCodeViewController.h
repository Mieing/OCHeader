@class UIView, NSString, UIImage, NSURLConnection, WCButtonListView, UIImageView, UIButton, NSMutableData, UILabel, MMUIActivityIndicatorView;
@protocol WCAccountLoginByQRCodeViewControllerDelegate;

@interface WCAccountLoginByQRCodeViewController : WCAccountBaseViewController <NSURLConnectionDelegate> {
    UIView *_scanQRCodeView;
    UIView *_qrCodeFrameView;
    UIImageView *_qrCodeImgView;
    MMUIActivityIndicatorView *_loadingView;
    UIView *_qrCodeScannedView;
    UIImageView *_headImgView;
    UIImage *_headImg;
    UILabel *_tipsLabel;
    UILabel *_nickNameLabel;
    UIButton *_cancelLogIn;
    UIButton *_refreshBtn;
    NSURLConnection *_downloadConnection;
    BOOL _isDownloading;
    NSMutableData *_headImgData;
    WCButtonListView *_bottomWatchLiveButtonView;
    id<WCAccountLoginByQRCodeViewControllerDelegate> m_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onGetQRCodeImg:(id)a0;
- (void)showUserInfoViewWithHeadImgURL:(id)a0 nickName:(id)a1;
- (void)showQRCodeScanView;
- (void)showLoginingViewWithNickName:(id)a0 headImgURL:(id)a1;
- (void)showFailedView;
- (void)showQRCodeFailedView;
- (void)showQRCodeExpiredView;
- (void)refreshQCodeView;
- (void)removeRefreshBtn;
- (void)createScanQRCodeView;
- (void)createQRCodeScannedView;
- (void)createHeadImgView;
- (void)createNickNameLabel;
- (void)createQRCodeFrame;
- (void)createQRCodeView;
- (void)createLoadingView;
- (void)createTipsView;
- (void)onCancel;
- (void)onRefreshBtnClicked;
- (void)startDownloadHeadImgWithURL:(id)a0;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)makeViewCenterInIpad;
- (void)updateTipsLabelY;
- (void)setDelegate:(id)a0;
- (void)viewDidTransitionToNewSize;
- (void).cxx_destruct;

@end

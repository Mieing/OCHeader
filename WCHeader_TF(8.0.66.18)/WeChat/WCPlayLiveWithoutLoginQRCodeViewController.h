@class MMUIActivityIndicatorView, UIImageView, UILabel, UIButton;

@interface WCPlayLiveWithoutLoginQRCodeViewController : WCAccountBaseViewController

@property (retain, nonatomic) UIImageView *qrCodeImgView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UIButton *refreshButton;
@property (copy, nonatomic) id /* block */ cancelCompletion;
@property (copy, nonatomic) id /* block */ didAppearCompletion;
@property (copy, nonatomic) id /* block */ refreshQrcodeCompletion;

- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)useSheetView;
- (BOOL)useTableView;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidTransitionToNewSize;
- (void)layoutUI;
- (void)updateQRCode:(id)a0;
- (void)onCancel;
- (void)onRefreshBtnClicked:(id)a0;
- (void)showLoadingView;
- (void)stopLoadingView;
- (void)cleanQrcode;
- (void)showRefreshView;
- (void)willEnterForeground;
- (void).cxx_destruct;

@end

@class UIView, MMWebImageView, NSString, FinderQRCodeResponse, UIImageView, UIButton, WCFinderQCCodeNameCardViewModel, WCFinderAuthInfoIconView, UILabel;

@interface WCFinderQRCodeViewController : MMUIViewController <WCFinderQRCodeCgiDelegate>

@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) MMWebImageView *avatar;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *icon;
@property (retain, nonatomic) UIImageView *qrcodeView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *saveQRCodeButton;
@property (retain, nonatomic) WCFinderQCCodeNameCardViewModel *viewModel;
@property (retain, nonatomic) FinderQRCodeResponse *qrcodeResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)layoutView;
- (void)didTapSaveQRCodeButton;
- (void)qrcodeCgi:(id)a0 didGetResponse:(id)a1;
- (void)qrcodeCgi:(id)a0 didFailWithError:(id)a1;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end

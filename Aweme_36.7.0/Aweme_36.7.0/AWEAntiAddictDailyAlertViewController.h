@class NSString, UIImageView, AWEAntiAddictDailyAlertConfigModel, AWEAntiAddictDailyAlertBaseViewModel, UIView, IESLiveVideoGiftController;
@protocol AWEAntiAddictDailyAlertViewProtocol, AWEAntiAddictDailyAlertViewControllerDelegate;

@interface AWEAntiAddictDailyAlertViewController : UIViewController <AWEAntiAddictDailyAlertViewDelegate, IESLiveVideoGiftControllerDelegate>

@property (nonatomic) double VCHeight;
@property (nonatomic) BOOL hasDismiss;
@property (nonatomic) BOOL shouldTransfer;
@property (retain, nonatomic) NSString *transferUrl;
@property (nonatomic) BOOL isDay;
@property (nonatomic) unsigned long long viewType;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) UIImageView *defaultImgView;
@property (retain, nonatomic) AWEAntiAddictDailyAlertBaseViewModel *viewModel;
@property (retain, nonatomic) AWEAntiAddictDailyAlertConfigModel *configModel;
@property (retain, nonatomic) UIView<AWEAntiAddictDailyAlertViewProtocol> *alertView;
@property (retain, nonatomic) IESLiveVideoGiftController *videoController;
@property (weak, nonatomic) id<AWEAntiAddictDailyAlertViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void)didFinishPlayingWithError:(id)a0;
- (void)videoGiftController:(id)a0 didEndPlayingFrame:(id)a1;
- (void)didClickConfirmButton;
- (void)didClickMaskView;
- (void)trackShow;
- (void)setupBinding;
- (id)initWithTimeType:(BOOL)a0 viewType:(unsigned long long)a1 configModel:(id)a2 delegate:(id)a3;
- (void)didClickCancelButton;
- (void)didClickOptionButton:(id)a0;
- (void)didClickLinkText;
- (void)configView;
- (id)setupAlertView;
- (void)setupIconForAlertView:(id)a0;
- (void)updateSimplifyAlertViewWithSelectedIndex:(long long)a0;
- (id)iconAlphaPlayerFilePath;
- (id)iconLottieFilePath;
- (id)iconImageFilePath;
- (id)setupDefaultImage;
- (void)layoutIconView:(id)a0 forAlertView:(id)a1;
- (void)updateAntiAddictRemindStatWithValue:(id)a0 OfDay:(BOOL)a1;
- (void)updateAntiAddictRemindValueTo:(id)a0 ofDay:(BOOL)a1;
- (void)trackSetRemindSuccessForDay:(BOOL)a0 withValue:(id)a1;
- (id)geckoFilePath;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end

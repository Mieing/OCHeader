@class NSString, BDTuringLDGuideViewModel, BDTuringLiveDetectModel, UIButton;

@interface BDTuringLDGuideViewController : UIViewController

@property (retain, nonatomic) UIButton *roundedRectButton;
@property (copy, nonatomic) NSString *helpUrl;
@property (copy, nonatomic) NSString *agreement_title;
@property (copy, nonatomic) NSString *agreement_url;
@property (retain, nonatomic) BDTuringLDGuideViewModel *turingLDGuideViewModel;
@property (retain, nonatomic) BDTuringLiveDetectModel *verifyModel;

+ (void)ensurePortrait;

- (void)closeButtonClicked;
- (void)configureSettingsWithAid:(id)a0;
- (id)initWithVerifyModel:(id)a0;
- (void)checkboxButtonTapped:(id)a0;
- (void)roudedButtonClicked:(id)a0;
- (void)helpButtonTapped:(id)a0;
- (void)checkCameraPermissionAndProceed;
- (void)verifyFailCallback;
- (void)closeGuideViewWithCompletion:(id /* block */)a0;
- (void)closeAndOpenDetectView;
- (void)showPermissionDeniedAlert;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)handleTap:(id)a0;

@end

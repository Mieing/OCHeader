@class UILabel, UIView, AWEVideoPublishViewModel, UIImageView, UIButton, NSMutableDictionary, NSDictionary, ACCAIGCLoraLawAlertView, AWEAIGCLoraSuiteTipsVCConfig, ACCAnimatedButton;

@interface AWEAIGCLoraSuiteTipsViewController : AWEHalfScreenSuperViewController

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *optimizeCloseButton;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *lawTipsText;
@property (retain, nonatomic) UILabel *lawTipsSubText;
@property (retain, nonatomic) UIView *centerContainerView;
@property (retain, nonatomic) ACCAnimatedButton *bottomButtonForAlbum;
@property (retain, nonatomic) UIButton *bottomButtonForCapture;
@property (retain, nonatomic) ACCAIGCLoraLawAlertView *bottomLawView;
@property (nonatomic) BOOL isFirstLoad;
@property (retain, nonatomic) AWEAIGCLoraSuiteTipsVCConfig *uiConfig;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (nonatomic) BOOL forceDarkStyle;
@property (retain, nonatomic) NSMutableDictionary *trackInfo;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (copy, nonatomic) id /* block */ clickButtonOpenAlbum;
@property (copy, nonatomic) id /* block */ clickButtonOpenCapture;

- (id)accui_emptyPageConfigForState:(unsigned long long)a0;
- (void)accui_emptyPagePrimaryButtonTapped:(id)a0;
- (id)accui_emptyPageOnView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })accui_emptyPageEdgeInsets;
- (BOOL)onlyTopCornerClips;
- (BOOL)useSmootherTransition;
- (id)initWithUIConfig:(id)a0;
- (void)bindService;
- (void)closeViewWithAnimate:(BOOL)a0 completion:(id /* block */)a1;
- (void)tapCaptureButton;
- (void)tapLawAlertConfirmButton;
- (void)tapLawAlertRejectButton;
- (void)setUpUIView;
- (void)completeButtonAction:(id)a0;
- (void)trackEnterCreateLoraPage;
- (void)setUpTopView;
- (void)setUpOptimizeBottomView;
- (void)setUpMedialView;
- (void)setUpBottomView;
- (id)exampleImage:(id)a0 correctIcon:(BOOL)a1 describe:(id)a2;
- (void)closeViewButtonClick:(id)a0;
- (void)tapAlbumButton;
- (void)closeView;
- (void).cxx_destruct;
- (unsigned long long)viewStyle;
- (double)cornerRadius;
- (void)viewWillAppear:(BOOL)a0;
- (unsigned long long)animationStyle;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setUpContainerView;
- (double)containerHeight;
- (double)containerWidth;

@end

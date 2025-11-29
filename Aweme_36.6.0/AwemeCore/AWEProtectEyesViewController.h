@class AVPlayer, TTVideoEngine, UIImage, DUXAbandonedButton, NSString, UIImageView, UIButton, AWEProtectEyesImageController, DUXSlider, UILabel, AVPlayerLayer;

@interface AWEProtectEyesViewController : UIViewController <AWERouterViewControllerProtocol>

@property (retain, nonatomic) UIImageView *videoImageView;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXSlider *slider;
@property (retain, nonatomic) DUXAbandonedButton *protectEyesButton;
@property (retain, nonatomic) UILabel *warmLabel;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (nonatomic) long long protectEyesBeforeValue;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIButton *videoButton;
@property (nonatomic) BOOL isProtectEyesOpen;
@property (nonatomic) long long protectEyesEnterValue;
@property (retain, nonatomic) TTVideoEngine *engine;
@property (nonatomic) BOOL isTrackModeSetting;
@property (nonatomic) long long enterProtectEyesValue;
@property (nonatomic) BOOL downloadResource;
@property (nonatomic) BOOL showLoading;
@property (retain, nonatomic) UIImage *bgImage;
@property (retain, nonatomic) AWEProtectEyesImageController *eyeImageController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)setLutFilter:(id)a0;
- (void)setLutFilter:(id)a0 HDRLutImage:(id)a1;
- (void)setLutFilterStrength:(double)a0;
- (void)closeAction:(id)a0;
- (void)changePretectEyesState:(BOOL)a0;
- (void)updateProtectEyesState;
- (void)trackModeSetting:(id)a0;
- (void)protectEyesButtonAction;
- (void)trackTouchSwitch:(long long)a0;
- (void)trackAlertConfirmed:(long long)a0;
- (void)trackQuitEyeCareMode;
- (id)videoDirectory;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)playAction;
- (void)playVideo;
- (void)playbackFinished:(id)a0;
- (void)createUI;

@end

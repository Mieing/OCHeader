@class UIView, IESLiveVideoGiftController, AWEAwemeModel, NSString, UIButton, LOTAnimationView, LOTComposition, IESLiveVideoGiftMetalConfiguration, UIVisualEffectView;

@interface AWECampaignBigRedPacketViewController : UIViewController <IESLiveVideoGiftControllerDelegate>

@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) IESLiveVideoGiftController *redpacketAlphaPlayer;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) LOTComposition *lottie;
@property (retain, nonatomic) IESLiveVideoGiftMetalConfiguration *alphaPlayerConfig;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL didAppeared;
@property (nonatomic) BOOL hasErrorOccurred;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)a0;
- (void)feedContainerViewControllerDidSwitchTab:(id)a0;
- (void)contentTapped;
- (void)trackInteractiveVideoActionLogWithMessage:(id)a0;
- (void)onLongPressGesture;
- (void)setupAnimationUI;
- (void)tryToPlayAlphaVideo;
- (void)monitorService:(id)a0 status:(unsigned long long)a1 level:(unsigned long long)a2 error:(id)a3 extraInfo:(id)a4 campaignID:(id)a5;
- (void)closeButClicked;
- (id)initWithLottie:(id)a0;
- (id)initWithAlphaPlayerConfiguration:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)addObservers;

@end

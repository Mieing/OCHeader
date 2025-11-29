@class UIView, AWEVideoPlayerController, NSString, AWEButton, AFDCloseFriendsWidgetCreateGuideModel, AFDModalViewHelper, UIButton, AWEUILoadingView, NSDictionary, AVPlayerLayer, UILabel, AVPlayer;

@interface AFDCloseFriendsWidgetCreateGuideViewController : UIViewController <AWEPanelTransitionWithBackground, AWEVideoPlayerControllerDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *descriptionTextLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWEButton *nextButton;
@property (nonatomic) long long currentStep;
@property (retain, nonatomic) UIView *videoContainerView;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) AWEVideoPlayerController *playerController;
@property (retain, nonatomic) AWEUILoadingView *playerLoadingView;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (retain, nonatomic) NSString *insertItemID;
@property (retain, nonatomic) NSDictionary *eventParam;
@property (retain, nonatomic) NSString *guideLoadType;
@property (nonatomic) unsigned long long maxGuideStep;
@property (retain, nonatomic) AFDCloseFriendsWidgetCreateGuideModel *model;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)a0;
- (void)presentedViewPanFinished;
- (void)nextButtonClicked:(id)a0;
- (void)playbackDidFinishForURL:(id)a0;
- (void)preparedToPlayForURL:(id)a0;
- (void)closeButtonClicked:(id)a0;
- (id)initWithEventParam:(id)a0 model:(id)a1;
- (id)initWithInsertItemID:(id)a0 eventParam:(id)a1 model:(id)a2;
- (void)setupMaxGuideStep;
- (BOOL)isHitModel;
- (void)trackWidgetGuideShowWithParams:(id)a0;
- (void)trackUGWidgetGuideShow;
- (void)trackWidgetGuideClickWithTarget:(id)a0;
- (void)trackUGWidgetGuideClickWithClickTarget:(id)a0;
- (void)markCloseCountWithFromNextButton:(BOOL)a0;
- (void)__configPlayer;
- (void)handleAppBecomeActiveNotification;
- (void)handleAppResignActiveNotification;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end

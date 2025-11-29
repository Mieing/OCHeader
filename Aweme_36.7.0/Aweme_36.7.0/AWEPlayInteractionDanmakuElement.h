@class NSString, LOTAnimationView, AWEPlayDanmakuInputContainView;

@interface AWEPlayInteractionDanmakuElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWEPlayDanmakuInputContainView *danmakuInputView;
@property (copy, nonatomic) NSString *accountType;
@property (nonatomic) BOOL hasTrackPubShow;
@property (nonatomic) BOOL hasFakeDanmakuSwitch;
@property (nonatomic) BOOL danmakuPostPauseVideoPlay;
@property (nonatomic) BOOL hasOuterPageContextHandler;
@property (retain, nonatomic) LOTAnimationView *guideAnimationView;
@property (copy, nonatomic) id /* block */ inputGuideShowHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)activateInfoWithContext:(id)a0;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (Class)aAWEPadTabBarAdapterClass;
+ (Class)aAWEPlayInteractionDanmakuElementAdapterClass;
+ (double)animationDuration;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (id)aAWEPadModuleAdapter;
- (void)videoPlayerWillTrackPlayTime;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (id)aAWEPlayInteractionAdapter;
- (id)aAWEPadTabBarAdapter;
- (id)aAWEPlayInteractionDanmakuElementAdapter;
- (BOOL)isFromDanmakuMessage;
- (void)setupOuterPageContextHandlerIfNeed;
- (BOOL)shouldShowGuideAnimation;
- (void)showAnimationIfNeedAfterSeconds:(long long)a0;
- (void)resetDanmakuInputGuideBeforeDisplayIfNeed;
- (void)updateDanmakuElementStateIfNeed;
- (void)showInputGuideAnimation;
- (void)showHideGuideAnimation;
- (void)showGuideAnimationIfNeed;
- (void)hideGuideAnimationIfNeed;
- (BOOL)hasShowGuideInStorage;
- (void)reversePlayGuideLottie;
- (void)updateDanmakuInputGuideShowTime:(long long)a0;
- (void)showOldDanmakuGuideStyleAnimation;
- (void)showDanmakuGuideStyleLottie;
- (void)handleDanmakuInputClickFromGuide:(BOOL)a0;
- (BOOL)enableKeepClicking:(double)a0;
- (void)handleDanmakuGuideLottieInputClick;
- (BOOL)canShowDanmakuGuideAnimation;
- (BOOL)shouldAppearDanmakuView;
- (void).cxx_destruct;
- (void)play;
- (void)reset;
- (void)viewDidLoad;

@end

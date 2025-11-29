@class UIButton, NSString, LOTAnimationView, AWEPlayInteractionMusicFavoriteViewModel, AWEFeedVideoButton, UIView, AWEPlayInteractionFavoriteResourceConfig;
@protocol AWEFeedVideoButtonProtocol;

@interface AWEPlayInteractionMusicFavoriteElement : AWEPlayInteractionRightElement <AWERightElementButtonLayout, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) AWEFeedVideoButton *favoriteButton;
@property (retain, nonatomic) LOTAnimationView *favoriteAnimationView;
@property (retain, nonatomic) AWEPlayInteractionMusicFavoriteViewModel *viewModel;
@property (retain, nonatomic) AWEPlayInteractionFavoriteResourceConfig *resourceConfig;
@property (nonatomic) BOOL isFavoriteAnimationFinished;
@property (nonatomic) BOOL shouldDelayUpdate;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIButton<AWEFeedVideoButtonProtocol> *button;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)activateInfoWithContext:(id)a0;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidDisappear;
- (id)aAWEPadModuleAdapter;
- (void)viewDidChangeBreakPoint;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (id)showStringFromNumber:(id)a0;
- (void)bindEvent;
- (void)announceAccessibility:(id)a0;
- (void)playFavoriteAnimation;
- (void)p_stopFavoriteAnimation;
- (void)p_playFavoriteAnimation;
- (void)setupFavoriteStatus;
- (void)setupPadElementSizeWithConfig:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })a0;
- (void)updateAccesibilityLabel;
- (void)updateFavoriteCount;
- (void)playUnfavoriteAnimation;
- (id)p_favoriteImageName:(BOOL)a0;
- (void)p_playUnfavoriteAnimation;
- (void)buttonClicked:(BOOL)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end

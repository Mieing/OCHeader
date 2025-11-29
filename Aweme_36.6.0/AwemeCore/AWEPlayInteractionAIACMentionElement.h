@class NSString, AWECodeGenGetCurrentMentionsResponseModel, LOTAnimationView, UIImageView, UILabel, AWEPadPlayInteractionAIViewModel, UIButton;

@interface AWEPlayInteractionAIACMentionElement : AWEPlayInteractionLeftElement <AWEPadPlayInteractionAIElementProtocol>

@property (retain, nonatomic) LOTAnimationView *flower;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) AWEPadPlayInteractionAIViewModel *viewModel;
@property (retain, nonatomic) AWECodeGenGetCurrentMentionsResponseModel *mentionModel;
@property (nonatomic) double lastUpdateTime;
@property (copy, nonatomic) NSString *knowledge;
@property (nonatomic) BOOL isDidDisplay;
@property (nonatomic) BOOL realAppear;
@property (nonatomic) BOOL needResumeInViewAppear;
@property (nonatomic) BOOL shouldResume;
@property (nonatomic) double sendContentTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (id)activateInfoWithModel:(id)a0 context:(id)a1;

- (void)initializeElement;
- (void)viewController_didDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)didClickButton;
- (double)gapTime;
- (void)trackEvent:(id)a0 extraParams:(id)a1;
- (void)updateElementIfNeededWithPlayBackTime:(double)a0;
- (void)trackShowEventIfNeeded;
- (void)updateElementWithPlayBackTime:(double)a0 animated:(BOOL)a1;
- (void)executeHiddenElementWithAnimated:(BOOL)a0;
- (void)executeShowElementWithAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)context;
- (void)setupUI;

@end

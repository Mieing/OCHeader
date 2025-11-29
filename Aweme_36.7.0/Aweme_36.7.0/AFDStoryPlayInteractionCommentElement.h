@class UIButton, UILabel, NSString;
@protocol AWEAwemeFeedVideoButtonProtocol, AWEPlayInteractionCommentElementViewModelProtocol, AFDFeedVideoButtonProtocol, AWECommentInputViewManagerProtocol, AWEFeedVideoButtonProtocol;

@interface AFDStoryPlayInteractionCommentElement : AWEPlayInteractionBaseElement <AFDStoryPlayInteractionElementProtocol>

@property (retain, nonatomic) id<AWEPlayInteractionCommentElementViewModelProtocol> viewModel;
@property (retain, nonatomic) UIButton<AWEFeedVideoButtonProtocol, AWEAwemeFeedVideoButtonProtocol, AFDFeedVideoButtonProtocol> *commentButton;
@property (nonatomic) BOOL inputviewBottomBarControllerDidAppear;
@property (retain, nonatomic) UILabel *flatStyleLabel;
@property (nonatomic) double videoDidActivityStartTime;
@property (retain, nonatomic) id<AWECommentInputViewManagerProtocol> commentInputViewManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPlayInteractionCommentElementDOUYINLiteAdapterClass;

- (void)videoDidActivity;
- (void)initializeElement;
- (void)updateCommentCount;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewWillAppear;
- (id)aAWEPadModuleAdapter;
- (void)viewDidChangeBreakPoint;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (id)showStringFromNumber:(id)a0;
- (void)bindEvent;
- (id)aAWEPlayInteractionCommentElementDOUYINLiteAdapter;
- (void)onCommentButtonClicked;
- (id)commentButtonLabelString;
- (void)initCommentGlobalUniqueInstance;
- (void)setupPadKeybindings;
- (void)setupPadElementSizeWithConfig:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })a0;
- (void)updateAccesibilityLabel;
- (void)changeCommentButtonLabel:(long long)a0;
- (double)elementWidthWithAweme:(id)a0;
- (id)getCommentCount;
- (void)updateLayout;
- (void).cxx_destruct;
- (unsigned long long)elementType;
- (void)reset;
- (void)viewDidLoad;
- (id)context;
- (unsigned long long)elementPosition;
- (void)playAnimation;

@end

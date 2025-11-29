@class UIView, AWEPlayInteractionCommentElementViewModel, UIImage, NSString, UIButton, AWEBubble, NSNumber, AWEFeedVideoButton;
@protocol AWEInteractionElementReplacementAnimationProtocol, AWECommentInputViewManagerProtocol, AWEInteractionElementLongPressProtocol, AWEFeedVideoButtonProtocol;

@interface AWEPlayInteractionCommentElement : AWEPlayInteractionRightElement <AWERightElementButtonLayout, AWEElementSelfFilterProtocol, AWEPlayInteractionElementLightAdaptProtocol, AWEPlayInteractionCommentElementProtocol>

@property (retain, nonatomic) AWEFeedVideoButton *commentButton;
@property (retain, nonatomic) UIImage *commentFestivalImage;
@property (nonatomic) BOOL commentButtonImageFestivalMode;
@property (nonatomic) BOOL inputviewBottomBarControllerDidAppear;
@property (retain, nonatomic) AWEPlayInteractionCommentElementViewModel *viewModel;
@property (retain, nonatomic) NSNumber *originalAdCommentCount;
@property (retain, nonatomic) AWEBubble *commentTipsBubble;
@property (nonatomic) double videoDidActivityStartTime;
@property (nonatomic) BOOL buttonIconChanged;
@property (retain, nonatomic) id<AWECommentInputViewManagerProtocol> commentInputViewManager;
@property (retain, nonatomic) id<AWEInteractionElementLongPressProtocol> longPressGestureManager;
@property (retain, nonatomic) id<AWEInteractionElementReplacementAnimationProtocol> replaceAnimator;
@property (nonatomic) BOOL isLightVideo;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIButton<AWEFeedVideoButtonProtocol> *button;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)activateInfoWithContext:(id)a0;
+ (Class)aAWEPlayInteractionCommentElementDOUYINLiteAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;

- (void)videoDidActivity;
- (void)initializeElement;
- (void)updateCommentCount;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewWillAppear;
- (id)aAWEPadModuleAdapter;
- (void)videoPlayerWillTrackPlayTime;
- (void)viewDidChangeBreakPoint;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (id)showStringFromNumber:(id)a0;
- (void)bindEvent;
- (id)aAWEPlayInteractionCommentElementDOUYINLiteAdapter;
- (id)_getCommentCount;
- (void)onCommentButtonClicked;
- (id)aAWEPlayInteractionAdapter;
- (void)beginReplaceAnimation:(id)a0;
- (void)updateFestivalCommentButton;
- (id)commentButtonLabelString;
- (void)initCommentGlobalUniqueInstance;
- (void)setupPadKeybindings;
- (void)setupPadElementSizeWithConfig:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })a0;
- (void)removePadKeybindings;
- (void)stopReplaceAnimation;
- (void)adaptJingXuanElementSizeWithConfig:(struct { double x0; double x1; double x2; double x3; double x4; })a0 type:(long long)a1;
- (void)processCommentBtnLongPressGesture:(id)a0;
- (void)resetCommentIcon;
- (void)updateWithadjustCommentCountIfNeeded;
- (void)adCommentTrack:(id)a0;
- (id)_getCommentCountWithAdComment;
- (void)commentButtonClicked;
- (void)updateAccesibilityLabel;
- (void)changeCommentButtonLabel:(long long)a0;
- (void)updateElementForLightVideo:(BOOL)a0 shadowController:(id)a1;
- (void)longPressTriggerInputView;
- (void)longPressTriggerPopover;
- (BOOL)shouldShieldLongPress;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end

@class NSString, AWEPlayInteractionLikeElementViewModel, AWEPlayInteractionLikeAnimationView, AFDAmbassador;
@protocol AWEPlayInteractionLikeElementAmbassadorProtocol, AWEPlayInteractionLikeViewSubElementProtocol;

@interface AWEPlayInteractionLikeElement : AWEPlayInteractionRightElement <AWEPlayInteractionLikeViewDelegate, UIGestureRecognizerDelegate, AWEHPMessageObserverProtocol, AWEElementSelfFilterProtocol, AWEPlayInteractionElementLightAdaptProtocol, AWEInteractionMessageObserverProtocol, AWEPlayInteractionLikeElementProtocol>

@property (retain, nonatomic) id<AWEPlayInteractionLikeViewSubElementProtocol> viewElement;
@property (weak, nonatomic) AWEPlayInteractionLikeAnimationView *doubleClickAnimationView;
@property (retain, nonatomic) AFDAmbassador<AWEPlayInteractionLikeElementAmbassadorProtocol> *ambassador;
@property (retain, nonatomic) AWEPlayInteractionLikeElementViewModel *viewModel;
@property (nonatomic) BOOL isScreenDoubleClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)activateInfoWithContext:(id)a0;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (BOOL)shouldActivateWithData:(id)a0 context:(id)a1;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didDisplay;
- (id)aAWEPadModuleAdapter;
- (void)videoPlayerWillTrackPlayTime;
- (void)viewDidChangeBreakPoint;
- (void)triggerButtonClicked;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)bindEvent;
- (id)aAWEPlayInteractionAdapter;
- (void)announceAccessibility:(id)a0;
- (void)playLikeAnimation;
- (void)handleHPMessage:(id)a0;
- (void)handleInteractionMessage:(id)a0;
- (void)updateElementForLightVideo:(BOOL)a0 shadowController:(id)a1;
- (void)setupPadKeyBindings;
- (void)playDiggAnimation:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (BOOL)isDoubleClickAlienationOffCmdActivate;
- (void)onLikeTappedWithExtraInfo:(id)a0;
- (void)playDiggAnimation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isDiggAlienationOffCmdActivate;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end

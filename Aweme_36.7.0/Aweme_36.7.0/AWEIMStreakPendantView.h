@class UILongPressGestureRecognizer, NSString, NSDictionary, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol AWEIMStreakPendantViewDelegate, IESIMHunterContainerProtocol;

@interface AWEIMStreakPendantView : UIView <UIGestureRecognizerDelegate, DUXActionPopoverDelegate, HunterContainerLifeCycleProtocol>

@property (retain, nonatomic) UIView<IESIMHunterContainerProtocol> *containerView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGesture;
@property (nonatomic) double lastTapTime;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGes;
@property (nonatomic) BOOL hasGetFrontInitReady;
@property (nonatomic) double petElfContainerViewMoveNotSendEventDistance;
@property (nonatomic) BOOL hasSendActionMove;
@property (nonatomic) BOOL canMoveAndHit;
@property (nonatomic) BOOL pendantIsInMove;
@property (nonatomic) BOOL disableNativeClick;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) struct CGSize { double width; double height; } showSize;
@property (nonatomic) double indent_width;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL shouldSendUpdateEventAfterOnside;
@property (nonatomic) double ordinateValueBeforeKeyboardShow;
@property (nonatomic) BOOL layoutChangedBecauseKeyboardHide;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (weak, nonatomic) id<AWEIMStreakPendantViewDelegate> delegate;
@property (nonatomic) BOOL canGetRightLayoutInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)optSchemaEnable;
+ (BOOL)fixDoubleClickEnable;

- (void)containerDidFirstScreen:(id)a0;
- (void)popoverDidDisappear:(id)a0;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)pageLayoutCoordinateAnimationWithAnimated:(BOOL)a0 fromLayout:(id)a1 toLayot:(id)a2;
- (void)loadHunterView;
- (void)updatePendantFrameWithKeyboardShow:(BOOL)a0;
- (double)im_bigFontScreenWidthOfChatVC;
- (void)logWithExecutePhase:(id)a0 eventName:(id)a1 extra:(id)a2;
- (id)p_getConversationID;
- (void)loadIMHunterView;
- (struct CGPoint { double x0; double x1; })p_getStartPosition;
- (id)p_getMessageListPageLayoutInfo;
- (void)p_sendSetContainerSizeReadyEvent;
- (void)p_sendUpdateEventWithParams:(id)a0;
- (void)logSendEventToFront:(id)a0 params:(id)a1;
- (id)buildHunterDynamicPatchModel;
- (void)p_panForFlamePetElfPendantView:(id)a0;
- (void)p_tapForFlamePetElfPendantView:(id)a0;
- (void)p_longPressFlamePetElfPendantView:(id)a0;
- (void)p_doubleTappedFlamePetElfPendantView:(id)a0;
- (void)p_containerAddListenEvent;
- (void)pp_longPressFlamePetElfPendantView:(id)a0;
- (void)p_triggerImpactFeedback;
- (void)p_sendClickEvent;
- (void)p_sendMoveEventWithState:(id)a0;
- (void)p_saveCurrentPositionWithDict:(id)a0;
- (double)im_bigFontScreenHeightOfChatVC;
- (void)tryShowPendant;
- (void)logReceiveFrontEvent:(id)a0 params:(id)a1;
- (void)actionPopover:(id)a0 didSelectAction:(id)a1;
- (void)sendUpdateEventWithCurrentParams:(id)a0;
- (void)sendPlayPetSpeakAnimationEventWithRequestInfo:(id)a0;
- (void)cancelSendUpdateEventToFrontStatus;
- (void)sendUpdateEventSetPendantCanNotMove;
- (void)p_setupUI;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateData;

@end

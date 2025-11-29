@class AWEPlayInteractionLongPressPanelModalPresentViewController, NSString, UIAlertController, AWEPlayInteractionLongPressModalHandler, UILongPressGestureRecognizer;

@interface AWEPlayInteractionLongPressPanelController : AWEPlayInteractionNewBaseController <UIGestureRecognizerDelegate, AWEPlayInteractionLongPressModalHandlerDelagate, AWEPlayInteractionLongPressPanelControllerProtocol>

@property (retain, nonatomic) UIAlertController *reportAlertController;
@property (retain, nonatomic) UILongPressGestureRecognizer *dislikeGesture;
@property (nonatomic) BOOL didSpeedAction;
@property (nonatomic) double beforePlayRate;
@property (copy, nonatomic) NSString *trackSource;
@property (retain, nonatomic) AWEPlayInteractionLongPressModalHandler *modalHandler;
@property (nonatomic) BOOL modalCancelShowLongPressPanel;
@property (retain, nonatomic) AWEPlayInteractionLongPressPanelModalPresentViewController *fakePanelVC;
@property (nonatomic) BOOL isFakePanelSheetShowing;
@property (nonatomic) BOOL enableLongPressModal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;

- (void)showPanel;
- (id)aAWEPadModuleAdapter;
- (void)showDislikeOnVideo:(id)a0;
- (BOOL)isPanelShowed;
- (id)aAWEPlayInteractionAdapter;
- (void)hideToast;
- (void)showOnVideo;
- (BOOL)isModalFastSpeeding;
- (void)bindToSpeedControlViewModel;
- (BOOL)shouldShowLongPressMenu;
- (id)lppSubSceneWithContext:(id)a0;
- (void)trackShowLongPressPanelWithTappedPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)sceneForModel:(id)a0;
- (void)longPressModalGestureBegan:(id)a0;
- (void)longPressModalGestureEnded:(id)a0;
- (void)longPressModalGestureCancelledOrFailed:(id)a0;
- (void)longPressModalDidReachAction:(unsigned long long)a0;
- (void)longPressModalDidTriggerAction:(unsigned long long)a0;
- (void)longPressModalDidLeaveAction:(unsigned long long)a0;
- (void)showPadMorePanel;
- (BOOL)isVideoUnavailable;
- (void)setupLongPressManagerForModal;
- (id)LongPressPanelLogExtraDictGet;
- (id)createLongPressPanelConfig;
- (BOOL)enableLongPressModalExperiment;
- (void)setupModalHandler;
- (id)longPressModalQuickItems;
- (id)createLongPressModalQuickItems:(id)a0;
- (BOOL)shouldLongPressFastPlay;
- (double)currentPlaySpeed;
- (void)dismissFakePanelSheetWithAnimated:(BOOL)a0 releasePanel:(BOOL)a1;
- (void)resetModal;
- (void)createFakePanelSheet;
- (void)showFakePanelSheet:(BOOL)a0;
- (void)updateSpeed;
- (void)exitLongPressModal;
- (void)trackLongPressModalFunctionClick:(unsigned long long)a0;
- (void)showToast:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillAppear;
- (void)reset;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (void)willDisplay;
- (void)viewWillDisappear;

@end

@class NSMutableDictionary, UISwipeGestureRecognizer, NSString, ACCGroupedPredicate, ACCRecordViewControllerInputData;
@protocol ACCPropPickerService, ACCRecordPropService, ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCRecordGestureService, ACCSystemGestureService, ACCFocusService, ACCSideslipPropService, ACCSideslipPropPanelService, AWERecordInspirationServiceProtocol, ACCCameraService;

@interface ACCSideslipPropComponent : ACCFeatureComponent <ACCRecordGestureServiceSubscriber, ACCRecordPropServiceSubscriber, ACCSideslipPropServiceSubscriber, UIGestureRecognizerDelegate, ACCRecordSwitchModeServiceSubscriber, AWERecordInspirationServiceSubscriber>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordGestureService> gestureService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCPropPickerService> propPickerService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (retain, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (retain, nonatomic) id<ACCSystemGestureService> systemGestureService;
@property (retain, nonatomic) id<ACCFocusService> focusService;
@property (retain, nonatomic) id<AWERecordInspirationServiceProtocol> inspirationService;
@property (retain, nonatomic) NSMutableDictionary *gestureDic;
@property (retain, nonatomic) UISwipeGestureRecognizer *swipLeft;
@property (retain, nonatomic) UISwipeGestureRecognizer *swipRight;
@property (retain, nonatomic) ACCGroupedPredicate *disableGesture;
@property (nonatomic) BOOL disableGesByProp;
@property (nonatomic) BOOL disableGesByRecording;
@property (retain, nonatomic) id disposable;
@property (retain, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (nonatomic) BOOL isFirstShowPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)propServiceWillApplyProp:(id)a0 propSource:(long long)a1;
- (void)propServiceDidApplyProp:(id)a0 success:(BOOL)a1;
- (void)sideslipPropService:(id)a0 didChangeShowState:(unsigned long long)a1;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)tapGestureDidRecognized:(id)a0;
- (void)inspirationWillExitEffectTakeSame;
- (void)refreshGestureEnabled;
- (void)p_addSwipGesture:(unsigned long long)a0;
- (void)p_enableGestures:(BOOL)a0;
- (void)p_removeSwipGesture:(unsigned long long)a0;
- (void)swipeUpAction;
- (void)registerSwipeGesture:(id)a0 direction:(unsigned long long)a1;
- (void)handleSwipeGesture:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;

@end

@class UIButton, ACCLightningRecordAnimationView, NSString;
@protocol ACCRecordFlowService, ACCRecorderViewContainer, ACCRecordButtonService;

@interface ACCRecordButtonEventComponent : ACCFeatureComponent <ACCRecordButtonServiceSubscriber, ACCRecordFlowServiceSubscriber, ACCRecordAnimationViewTouchesPlugin, ACCLightningRecordAnimationViewNewTouchDispatchDelegate>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordButtonService> buttonService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (weak, nonatomic) ACCLightningRecordAnimationView *recordAnimationView;
@property (weak, nonatomic) UIButton *recordButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flowServiceDidUpdateDuration:(double)a0;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)animationView:(id)a0 touchesBegan:(id)a1 withEvent:(id)a2;
- (void)animationView:(id)a0 touchesMoved:(id)a1 withEvent:(id)a2;
- (void)animationView:(id)a0 touchesEnded:(id)a1 withEvent:(id)a2;
- (void)animationView:(id)a0 touchesCancelled:(id)a1 withEvent:(id)a2;
- (void)bindServices:(id)a0;
- (void)updateRecordButtonWithCurrentDuration:(double)a0;
- (void)stopRecordButtonAnimationWithIgnoreProgress:(BOOL)a0;
- (void)updateProgressAndMarksDisplay;
- (BOOL)enableNewTouchEventDispatch;
- (void)recordButtonServiceStateDidChange;
- (void)recordButtonServiceMixSubTypeDidChange;
- (void).cxx_destruct;

@end

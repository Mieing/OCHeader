@class NSString, ACCRecordFlowComponent;
@protocol ACCRecordSwitchModeService, ACCRecordPropService, ACCRecorderViewContainer, AWEStudioBusinessCameraFlowControlProtocol, ACCShootSourceService, AWERecordFlowSourceService, ACCFeatureComponent, ACCRecordFlowService, ACCCameraService;

@interface ACCRecordFlowComponentZoomPlugin : ACCFeatureComponent <ACCRecordAnimationViewTouchesPlugin, ACCRecordFlowServiceSubscriber, ACCShootSourceServiceSubscriber, ACCPanelViewDelegate, AWERecordFlowSourceEventService, AWEStudioBusinessCameraBasicActionProtocol, ACCFeatureComponentPlugin>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<AWERecordFlowSourceService> flowSourceService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<AWEStudioBusinessCameraFlowControlProtocol> cameraServiceFlowContext;
@property (readonly, weak, nonatomic) ACCRecordFlowComponent *hostComponent;
@property (nonatomic) double cameraZoomFactor;
@property (nonatomic) struct CGPoint { double x; double y; } lastTouchPoint;
@property (nonatomic) double oldZoomFactor;
@property (nonatomic) BOOL isZooming;
@property (nonatomic) BOOL isCountdowning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)panelViewController:(id)a0 willShowPanelView:(id)a1;
- (void)panelViewController:(id)a0 didDismissPanelView:(id)a1;
- (void)cameraFlowActionCompletion:(BOOL)a0;
- (void)cameraFlowActionBegin;
- (void)cameraFlowActionStepChangedWith:(unsigned long long)a0 currentStep:(unsigned long long)a1;
- (void)touchBegin;
- (void)componentDidMount;
- (void)animationView:(id)a0 touchesBegan:(id)a1 withEvent:(id)a2;
- (void)animationView:(id)a0 touchesMoved:(id)a1 withEvent:(id)a2;
- (void)bindServices:(id)a0;
- (void)shootSourceServiceStartTouch:(id)a0;
- (void)shootSourceServiceMoveTouch:(id)a0;
- (void)captureAnimationViewTouchMoved:(id)a0;
- (void)touchMoved:(struct CGPoint { double x0; double x1; })a0;
- (void)showZoomInfoIfNeededForScale:(double)a0;
- (void)dismissZoomScaleHitBeforePause;
- (void).cxx_destruct;

@end

@class UIView, CECMomentCameraFlipViewModel, NSString, UIPinchGestureRecognizer, CECMomentCameraScaleViewModel, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol CECMomentCameraFlowService, CECMomentCameraService, CECMomentCameraSwitchTabService;

@interface CECMonmentCameraGestureComponent : AFDMomentCameraBaseComponent <CECMomentCameraFlowServiceSubscriber, UIGestureRecognizerDelegate>

@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<CECMomentCameraService> cameraService;
@property (weak, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) CECMomentCameraScaleViewModel *scaleViewModel;
@property (retain, nonatomic) CECMomentCameraFlipViewModel *flipViewModel;
@property (retain, nonatomic) UIView *parentView;
@property (retain, nonatomic) UIView *preview;
@property (nonatomic) BOOL isSyncMultiCameraMode;
@property (nonatomic) long long currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindObserver;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)componentDidLoad;
- (void)addPinchGestureForZoom;
- (void)addGestureWithView:(id)a0 gesture:(id)a1;
- (void)handlePinchGestureForZoom:(id)a0;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (void)addPanGesture;
- (void)addTapGesture;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)handlePanGesture:(id)a0;
- (void)handleTapGesture:(id)a0;

@end

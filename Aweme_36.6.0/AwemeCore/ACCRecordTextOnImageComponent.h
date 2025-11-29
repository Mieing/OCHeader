@class NSString, AWETextOnImageModel, _TtC9CameraKit10CameraView, UIGestureRecognizer;
@protocol ACCCameraService, ACCRecordFlowService, ACCRecorderViewContainer, ACCRecordPropService;

@interface ACCRecordTextOnImageComponent : ACCFeatureComponent <ACCRecordPropServiceSubscriber, ACCRecordFlowServiceSubscriber, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIGestureRecognizer *panGesture;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) _TtC9CameraKit10CameraView *cameraView;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) BOOL isGestureLocated;
@property (nonatomic) struct CGPoint { double x; double y; } panStartCenter;
@property (retain, nonatomic) AWETextOnImageModel *textOnImageModel;
@property (copy, nonatomic) NSString *nleJson;
@property (copy, nonatomic) NSString *subEffectId;
@property (nonatomic) BOOL isTextOnImageEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)flowServiceDidMarkDuration:(double)a0;
- (void)flowServiceWillAddFragment:(id)a0;
- (void)flowServiceDidCompleteRecord;
- (void)componentDidMount;
- (void)panAction:(id)a0;
- (BOOL)isTouchingTextBox:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })updateTextviewCenterTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setupGestures;
- (void)tapAction:(id)a0;

@end

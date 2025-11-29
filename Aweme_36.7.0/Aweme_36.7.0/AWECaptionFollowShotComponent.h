@class NSString, UIGestureRecognizer;
@protocol ACCRecordSelectMusicService, ACCCameraService, ACCRecordFlowService, ACCRecorderViewContainer, ACCRecordPropService;

@interface AWECaptionFollowShotComponent : ACCFeatureComponent <ACCRecordPropServiceSubscriber, ACCRecordFlowServiceSubscriber, UIGestureRecognizerDelegate>

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordSelectMusicService> selectMusicService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) BOOL isGestureLocated;
@property (nonatomic) struct CGPoint { double x; double y; } panStartCenter;
@property (retain, nonatomic) UIGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIGestureRecognizer *panGesture;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)flowServiceDidMarkDuration:(double)a0;
- (void)flowServiceWillAddFragment:(id)a0;
- (void)flowServiceDidRemoveFragment:(id)a0;
- (void)flowServiceDidCompleteRecord;
- (id)captionFollowShotModel;
- (void)componentDidMount;
- (void)handleApplicationDidBecomeActive;
- (void)panAction:(id)a0;
- (BOOL)isTouchingTextBox:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })updateTextviewCenterTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)refreshCircleStartTimeIfNeed;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })calculateSafeArea;
- (void)updatePositionWithTranslation:(struct CGPoint { double x0; double x1; })a0 updateAll:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setupObservers;
- (id)cameraView;
- (void)setupGestures;
- (void)tapAction:(id)a0;

@end

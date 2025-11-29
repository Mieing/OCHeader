@class NSString, IESLiveCameraZoomGestureHandler, IESLiveCountTimer, IESLiveCameraZoomGuideView;

@interface IESLiveCameraZoomFragment : IESLiveRoomComponent <IESLiveAnchorCameraZoomService, IESLiveCameraZoomAction, IESLiveAnchorRoomStatusChangeEvents>

@property (nonatomic) BOOL isSupportZoom;
@property (nonatomic) BOOL isCameraZooming;
@property (retain, nonatomic) IESLiveCameraZoomGestureHandler *handler;
@property (retain, nonatomic) IESLiveCameraZoomGuideView *guideView;
@property (retain, nonatomic) IESLiveCountTimer *showGuideViewTimer;
@property (nonatomic) double lastCameraZoomFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)pauseAnchorLiveWithType:(unsigned long long)a0;
- (void)showGuideView;
- (BOOL)shouldShowGuideView;
- (void)cameraPositionChanged;
- (void)clearThresholdView;
- (BOOL)gestureShouldBegin;
- (void)getIsSupportedZoom;
- (void)setupGusture;
- (void)setupGuideViewIfNeed;
- (void)handleCameraZoomGesture:(id)a0;
- (void)clearGuideView;
- (void).cxx_destruct;
- (BOOL)shouldReceiveTouch:(id)a0;

@end

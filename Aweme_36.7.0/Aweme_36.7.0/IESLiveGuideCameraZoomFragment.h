@class IESLiveCameraZoomGestureHandler, NSString, UIPinchGestureRecognizer;

@interface IESLiveGuideCameraZoomFragment : IESLiveGuideComponent <IESLiveCameraZoomAction, IESLiveGuideActions, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIPinchGestureRecognizer *zoomGesture;
@property (nonatomic) BOOL isSupportZoom;
@property (nonatomic) BOOL hasCameraSet;
@property (retain, nonatomic) IESLiveCameraZoomGestureHandler *handler;
@property (nonatomic) double lastCameraZoomFactor;
@property (nonatomic) BOOL isVRLiveMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)cameraDidSet;
- (void)switchVRLiveMode:(BOOL)a0;
- (void)cameraPositionChanged;
- (void)getIsSupportedZoom;
- (void)handleCameraZoomGesture:(id)a0;
- (void)addZoomGestureIfNeed;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end

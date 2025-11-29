@class NSString, CMMotionManager;

@interface IESLivePlaybackAutoRotateFragment : IESLivePlaybackComponent <IESLivePlaybackComponentLifeCycle, IESLivePlaybackAutoRotateRouter>

@property (nonatomic) BOOL isAutoRotating;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (nonatomic) unsigned long long errorCnt;
@property (nonatomic) long long lastDetectOrientation;
@property (nonatomic) double sensitivityThresh;
@property (nonatomic) BOOL isManualRotating;
@property (nonatomic) BOOL onceAutoRotated;
@property (nonatomic) BOOL disableAutoRotate;
@property (nonatomic) double startTimestampForLandscape;
@property (nonatomic) double startTimestampForOrientationSwitch;
@property (nonatomic) long long lastOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)willAutoRotateToSize:(struct CGSize { double x0; double x1; })a0;
- (void)animationRotateToSize:(struct CGSize { double x0; double x1; })a0 duration:(double)a1;
- (void)didAutoRotateToSize:(struct CGSize { double x0; double x1; })a0;
- (void)installMotionDectector;
- (void)uninstallMotionDectector;
- (void)didDetectOrientationChangeFrom:(long long)a0 to:(long long)a1;
- (id)descForMotionDirection:(long long)a0;
- (void)dispatchOrientationChangeFrom:(long long)a0 to:(long long)a1;
- (void)showToastIfNeed;
- (void)rotateOrientation:(long long)a0 rotateModel:(unsigned long long)a1;
- (long long)roomOrientationState:(long long)a0;
- (void).cxx_destruct;
- (void)clear;
- (long long)currentInterfaceOrientation;
- (void)dealloc;
- (void)setup;
- (void)processMotionData:(id)a0;

@end

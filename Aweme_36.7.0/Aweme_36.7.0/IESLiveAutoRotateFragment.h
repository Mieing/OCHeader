@class NSString, CMMotionManager;

@interface IESLiveAutoRotateFragment : IESLiveRoomComponent <IESLiveAutoRotateRouter>

@property (nonatomic) BOOL isAutoRotating;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (nonatomic) unsigned long long errorCnt;
@property (nonatomic) long long lastDetectOrientation;
@property (nonatomic) double sensitivityThresh;
@property (nonatomic) BOOL onceAutoRotated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)willAutoRotateToSize:(struct CGSize { double x0; double x1; })a0;
- (void)animationRotateToSize:(struct CGSize { double x0; double x1; })a0 duration:(double)a1;
- (void)didAutoRotateToSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isInterfaceVertical;
- (void)installMotionDectector;
- (void)uninstallMotionDectector;
- (void)didDetectOrientationChangeFrom:(long long)a0 to:(long long)a1;
- (id)descForMotionDirection:(long long)a0;
- (void)dispatchOrientationChangeFrom:(long long)a0 to:(long long)a1;
- (void)showToastIfNeed;
- (long long)interfaceOrientationForDeviceOrientation:(long long)a0;
- (long long)deviceOrientationForInterfaceOrientation:(long long)a0;
- (void).cxx_destruct;
- (void)clear;
- (long long)currentInterfaceOrientation;
- (void)dealloc;
- (void)setup;
- (void)processMotionData:(id)a0;

@end

@interface VPVRCamera : NSObject {
    struct CardboardHeadTracker { } *_cardboardHeadTracker;
    BOOL _didGetInitialHeadPose;
    long long _firstUpdateTimestampInNanoseconds;
    long long _statusBarOrientation;
    int _viewportOrientation;
}

@property (nonatomic, getter=isGyroEnabled) BOOL gyroEnabled;
@property (nonatomic) double gyroSensitivity;
@property (nonatomic) BOOL shouldUseRequiredInterfaceOrientation;
@property (nonatomic) long long requiredInterfaceOrientation;

- (void)recenter;
- (void)updateStatusBarOrientation;
- (int)viewportOrientationWithInterfaceOrientation:(long long)a0;
- (void)updateCurrentViewportOrientation;
- (struct { void /* unknown type, empty encoding */ x0[4]; })lookAtWithEye:(id)a0 front:(SEL)a1 up:(void /* unknown type, empty encoding */)a2;
- (struct { })appliedQuaternion;
- (void)updateCameraPose;
- (struct { void /* unknown type, empty encoding */ x0[4]; })perspectiveWithFovy:(float)a0 aspectRatio:(float)a1 nearZ:(float)a2 farZ:(float)a3;
- (struct { void /* unknown type, empty encoding */ x0[4]; })lookAtWithEye:(id)a0 front:(SEL)a1 up:(BOOL)a2 shouldApplyGyroPose:(void /* unknown type, empty encoding */)a3;
- (id)init;
- (void)dealloc;

@end

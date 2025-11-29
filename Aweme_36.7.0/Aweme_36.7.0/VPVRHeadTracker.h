@class VPVREye;
@protocol VPVRHeadTrackerDelegate;

@interface VPVRHeadTracker : NSObject {
    struct CardboardHeadTracker { } *_cardboardHeadTracker;
    struct { void /* unknown type, empty encoding */ vector; } _currentQuaternion;
    struct { void /* unknown type, empty encoding */ vector; } _freezeQuaternion;
    struct { void /* unknown type, empty encoding */ vector; } _initialQuaternion;
    BOOL _didGetInitialHeadPose;
    long long _firstUpdateTimestampInNanoseconds;
    struct { void /* unknown type, empty encoding */ vector; } _deltaFreezeQuaternion;
    struct { void /* unknown type, empty encoding */ vector; } _currentAndFreezeQuaternion;
    struct { void /* unknown type, empty encoding */ vector; } _appliedQuaternion;
    struct { void /* unknown type, empty encoding */ vector; } _appliedQuaternionWithExtraQuat;
    struct { void /* unknown type, empty encoding */ vector; } _appliedQuaternionWithExtraSlerpQuat;
}

@property (retain, nonatomic) VPVREye *leftEye;
@property (retain, nonatomic) VPVREye *rightEye;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } headViewMatrix;
@property (nonatomic) long long postNotifyVRHeadPoseCount;
@property (nonatomic, getter=isHeadTrackingEnabled) BOOL headTrackingEnabled;
@property (nonatomic) double gyroSensitivity;
@property struct { void /* unknown type, empty encoding */ vector; } extraQuaternion;
@property (nonatomic) long long postNotifiVRPoseInterval;
@property (weak, nonatomic) id<VPVRHeadTrackerDelegate> trackerDelegate;

- (void)recenter;
- (struct { void /* unknown type, empty encoding */ x0[4]; })viewPoseMatrixWithEyeType:(unsigned long long)a0;
- (id)initWithLeftEye:(id)a0 andRightEye:(id)a1;
- (void)updateHeadPoseWithOutputTextureOrientation:(unsigned long long)a0 disableZaxis:(BOOL)a1;
- (struct { void /* unknown type, empty encoding */ x0[4]; })modelViewProjectionMatrixWithEyeType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

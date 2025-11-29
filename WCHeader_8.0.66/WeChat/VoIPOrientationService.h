@class NSString, CMMotionManager;

@interface VoIPOrientationService : MMUserService <MMServiceProtocol>

@property (class, readonly, nonatomic) long long interfaceOrientation;

@property (nonatomic) double deviceAngleDegree;
@property (nonatomic) long long deviceOrientation;
@property (retain, nonatomic) CMMotionManager *motion;
@property (nonatomic) BOOL isSystemLockActived;
@property (nonatomic) long long motionOrientation;
@property (readonly, nonatomic) BOOL isMotionActived;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)flagWithOrientation:(long long)a0 isFrontCamera:(BOOL)a1;
+ (BOOL)isEnable;
+ (BOOL)shouldUpdateDeviceAngleDegree;
+ (BOOL)isEnableWithRemoteClientVersion:(unsigned int)a0 remoteDevice:(id)a1;
+ (BOOL)shouldShowSystemLockToastWithRemoteClientVersion:(unsigned int)a0 remoteDevice:(id)a1;
+ (BOOL)isMiniInAppViewEnableWithRemoteClientVersion:(unsigned int)a0 remoteDevice:(id)a1;
+ (long long)realtimeDeviceOrientation;

- (void)updateDeviceAngleDegree:(double)a0;
- (void)updateDeviceOrientation:(long long)a0;
- (void)open;
- (void)close;
- (id)init;
- (void)dealloc;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)didChangeRotation:(id)a0;
- (void).cxx_destruct;

@end

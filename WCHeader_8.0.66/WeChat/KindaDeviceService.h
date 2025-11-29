@class NSString;

@interface KindaDeviceService : NSObject <MMKDeviceService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isRoot;
- (id)soterCpuId;
- (id)soterUid;
- (BOOL)useLastestTouchInfo;
- (BOOL)isDeviceOpenBiometricVerification;
- (BOOL)isDeviceTouchIdHardwareSupported;
- (BOOL)isDeviceSupportFaceId;
- (BOOL)isDeviceSupportTouchId;
- (void)updateBiometricVerificationState:(int)a0 biometricVerificationState:(BOOL)a1;
- (void)invokePhoneCall:(id)a0;

@end

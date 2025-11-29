@interface WCPayTouchIDAuthHelper : MMObject

+ (void)showTouchIDAuthView:(id)a0 whenSuccess:(id /* block */)a1 whenFail:(id /* block */)a2;
+ (void)showTouchIDAuthView:(id)a0 whenSuccess:(id /* block */)a1 whenFail:(id /* block */)a2 askUnlock:(id)a3;
+ (void)internalShowTouchIDAuthView:(id)a0 whenSuccess:(id /* block */)a1 whenFail:(id /* block */)a2;
+ (void)showTouchIDAuthView:(id)a0 whenSuccessData:(id /* block */)a1 whenFail:(id /* block */)a2;
+ (void)showTouchIDAuthView:(id)a0 disableFallBack:(BOOL)a1 whenSuccessData:(id /* block */)a2 whenFail:(id /* block */)a3;
+ (void)showTouchIDAuthView:(id)a0 disableFallBack:(BOOL)a1 whenSuccessData:(id /* block */)a2 whenFail:(id /* block */)a3 askUnlock:(id)a4;
+ (void)internalShowTouchIDAuthView:(id)a0 disableFallBack:(BOOL)a1 whenSuccessData:(id /* block */)a2 whenFail:(id /* block */)a3;
+ (void)showTouchIDAuthView:(id)a0 disableFallBack:(BOOL)a1 callback:(id /* block */)a2;
+ (void)showTouchIDAuthView:(id)a0 disableFallBack:(BOOL)a1 callback:(id /* block */)a2 askUnlock:(BOOL)a3;
+ (void)internalShowTouchIDAuthView:(id)a0 disableFallBack:(BOOL)a1 callback:(id /* block */)a2;
+ (void)askForUnlockTouchID:(id)a0 whenSuccess:(id /* block */)a1 whenFail:(id /* block */)a2;
+ (BOOL)canUseTouchIDFromData:(id)a0;
+ (BOOL)isInWhiteList:(id)a0;
+ (BOOL)isDeviceJailBreak;
+ (BOOL)isDeviceTouchIDHardwareSupported;
+ (BOOL)isDeviceFaceIDHardwareSupported;
+ (BOOL)isTouchIDEnrolledInDevice;
+ (BOOL)isDeviceTouchIDHardwareSupportedAndNotJailBreak;
+ (BOOL)isDeviceTouchIDAvailable;
+ (BOOL)isUsingFaceID;
+ (BOOL)isDeviceTouchIDAvailableAndNotJailBreak;
+ (void)logAbTestItem:(id)a0 transactionId:(id)a1 event:(int)a2;
+ (BOOL)isLockOut:(id)a0;

@end

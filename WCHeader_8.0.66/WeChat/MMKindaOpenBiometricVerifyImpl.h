@class NSString;

@interface MMKindaOpenBiometricVerifyImpl : NSObject <MMKindaOpenBiometricVerifyManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openBiometricVerify:(id)a0 bSupportFaceAndTouch:(BOOL)a1 selectType:(long long)a2;

@end

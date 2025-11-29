@interface CJPayBridgePlugin_faceVerification : TTBridgePlugin

@property (nonatomic) double invokeTimeStamp;

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)p_invokeCallback:(id /* block */)a0 msg:(long long)a1 params:(id)a2;
- (void)p_doFaceLivenessWithParam:(id)a0 callback:(id /* block */)a1;
- (void)faceVerificationWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end

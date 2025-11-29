@interface CJPayBridgePlugin_faceVerifyFullPage : TTBridgePlugin

@property (nonatomic) double invokeTimeStamp;

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)faceVerifyFullPageWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end

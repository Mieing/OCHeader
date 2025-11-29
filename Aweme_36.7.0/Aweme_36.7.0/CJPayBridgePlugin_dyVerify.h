@interface CJPayBridgePlugin_dyVerify : TTBridgePlugin

@property (nonatomic) double invokeTimeStamp;

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (BOOL)p_isEngimaCcit;
- (void)dyVerifyWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end

@interface CJPayBridgePlugin_sendDeviceInfo : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (id)metaSecPageCallback;
- (void)sendDeviceInfoWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void)setDeviceInfoWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end

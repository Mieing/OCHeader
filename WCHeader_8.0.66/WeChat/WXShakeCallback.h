@class LiteAppDynamicModuleCallback;

@interface WXShakeCallback : MMVoidCallback

@property (retain, nonatomic) LiteAppDynamicModuleCallback *jsCallback;

- (void)call;
- (void).cxx_destruct;

@end

@class NSString;

@interface CJPayBridgePlugin_CJAuth : TTBridgePlugin <CJPayAPIDelegate>

@property (copy, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (void)onResponse:(id)a0;
- (void)CJAuthWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void).cxx_destruct;

@end

@class NSMutableDictionary;

@interface ADFGBridgeRegister : NSObject {
    NSMutableDictionary *_methodDic;
}

+ (id)sharedRegister;

- (void)registerBridge:(id /* block */)a0;
- (void)_registerBridge:(id)a0 handler:(id /* block */)a1;
- (BOOL)respondsToBridge:(id)a0;
- (id)methodInfoForBridge:(id)a0;
- (void)unregisterBridge:(id)a0;
- (void)executeCommand:(id)a0 engine:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end

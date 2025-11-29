@interface CJPayBridgePlugin_Route : TTBridgePlugin

+ (void)registerBridge;
+ (unsigned long long)instanceType;

- (BOOL)removeAllWebVCWith:(id)a0 fromVC:(id)a1;
- (void)p_setCloseType:(id)a0 type:(id)a1;
- (void)goH5WithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void)setWebviewInfoWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;
- (void)closeWebviewWithParam:(id)a0 callback:(id /* block */)a1 engine:(id)a2 controller:(id)a3;

@end

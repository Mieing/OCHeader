@interface BDXBridgeVibrateMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)vibrateWithStyle:(long long)a0;
- (id)methodName;

@end

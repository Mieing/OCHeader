@interface BDXBridgePlayMusicMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)findCurrentVCWithView:(id)a0;
- (id)methodName;

@end

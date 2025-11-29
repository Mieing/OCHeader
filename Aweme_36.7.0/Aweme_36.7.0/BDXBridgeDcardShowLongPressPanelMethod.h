@interface BDXBridgeDcardShowLongPressPanelMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (SEL)selectorFromScene:(id)a0;
- (long long)authType;
- (id)methodName;

@end

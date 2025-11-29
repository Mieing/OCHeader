@interface BDXBridgeSendLifeMallLogMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)awegroupon_callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)awegroupon_getValidParameters:(id)a0;
- (id)awegroupon_getValidBTMResponder:(id)a0;
- (id)awegroupon_getValideComponentView:(id)a0;
- (id)getValidParameters:(id)a0;
- (id)getValidBTMResponder:(id)a0;
- (id)getValideComponentView:(id)a0;
- (long long)authType;
- (id)methodName;

@end

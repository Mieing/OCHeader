@interface BDXBridgeOpenGuideDSSharePanelMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)openSharePanel:(id)a0;
- (id)allowedDictionaryForJSBMessageType;
- (long long)authType;
- (id)methodName;

@end

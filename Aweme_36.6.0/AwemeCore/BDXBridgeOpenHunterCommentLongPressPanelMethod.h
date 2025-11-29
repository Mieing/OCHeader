@interface BDXBridgeOpenHunterCommentLongPressPanelMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)publishCommentPanelJSBEventWithName:(id)a0 params:(id)a1;
- (void)openLongPressPanelWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end

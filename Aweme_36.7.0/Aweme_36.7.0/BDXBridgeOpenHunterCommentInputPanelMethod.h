@interface BDXBridgeOpenHunterCommentInputPanelMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)commentInputContext:(id)a0 awemeInfo:(id)a1;
- (id)generateInputConfig:(id)a0;
- (void)attachTrackServiceTo:(id)a0 paramModel:(id)a1;
- (void)publishCommentPanelJSBEventWithName:(id)a0 params:(id)a1;
- (void)openSimpleInputPanelWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)openDefaultInputPanelWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)generateIdentifierID:(id)a0 referString:(id)a1;
- (id)generateCommentInputManager:(id)a0 identifierID:(id)a1;
- (id)obtainImageDataArray:(id)a0;
- (id)multiImageAbsolutePaths:(id)a0;
- (long long)authType;
- (id)methodName;

@end

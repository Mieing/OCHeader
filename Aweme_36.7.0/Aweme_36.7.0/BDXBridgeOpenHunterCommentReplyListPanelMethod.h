@interface BDXBridgeOpenHunterCommentReplyListPanelMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)generateInputConfig:(id)a0;
- (void)openCommentReplyListWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)generateCommentVC:(id)a0 paramModel:(id)a1 config:(id)a2;
- (long long)authType;
- (id)methodName;

@end

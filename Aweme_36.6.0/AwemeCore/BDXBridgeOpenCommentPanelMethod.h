@interface BDXBridgeOpenCommentPanelMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleHotspotCommentWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleAwemeCommentWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)p_fixStickerIDWithDict:(id)a0 model:(id)a1;
- (void)p_attachToCommentReport:(id)a0 logExtra:(id)a1;
- (long long)authType;
- (id)methodName;

@end

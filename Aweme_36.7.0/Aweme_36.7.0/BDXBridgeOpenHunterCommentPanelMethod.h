@interface BDXBridgeOpenHunterCommentPanelMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)handleDanmakuWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleHotspotWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end

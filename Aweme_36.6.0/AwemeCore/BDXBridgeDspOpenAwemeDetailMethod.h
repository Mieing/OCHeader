@interface BDXBridgeDspOpenAwemeDetailMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)openVideoDetailWithAwemeList:(id)a0 version:(id)a1 hasMore:(BOOL)a2 awemeId:(id)a3 sessionId:(id)a4 musicId:(id)a5 chartId:(id)a6 extra:(id)a7 completionHandler:(id /* block */)a8;
- (void)trackFeedEnterWithGroupId:(id)a0 authorId:(id)a1 extra:(id)a2;
- (void)requestTemplateInfoWithTemplateId:(id)a0 completion:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end

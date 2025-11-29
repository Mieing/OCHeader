@interface BDXBridgeDspMusicChartRequestMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)produceJSBAwemeInfoWithAwemeList:(id)a0;
- (id)produceJSBMusicModelWithMusicInfo:(id)a0;
- (long long)authType;
- (id)methodName;

@end

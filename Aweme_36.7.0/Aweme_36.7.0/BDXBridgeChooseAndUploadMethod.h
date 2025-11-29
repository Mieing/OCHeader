@interface BDXBridgeChooseAndUploadMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)getUploadParamsModel:(id)a0 media:(id)a1;
- (id)getFileModel:(id)a0;
- (id)getMediaParamsModel:(id)a0;
- (id)chooseMethod;
- (unsigned long long)transMediaType:(unsigned long long)a0;
- (unsigned long long)transMediaCameraType:(long long)a0;
- (unsigned long long)transMediaSourceType:(long long)a0;
- (long long)authType;
- (id)methodName;

@end

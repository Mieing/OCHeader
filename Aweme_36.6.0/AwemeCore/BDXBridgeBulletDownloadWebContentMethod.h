@interface BDXBridgeBulletDownloadWebContentMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)preloadURLs:(id)a0 userAgent:(id)a1 completionHandler:(id /* block */)a2;
- (long long)authType;
- (id)methodName;

@end

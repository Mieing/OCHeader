@class NSString;

@interface AWEXBridgePdaAwemeRequestMethod : BDXBridgeMethod <BDXBridgeMethodCallProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowBackgroundThreadCall;
+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)_callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)storeAwemeCache:(id)a0 withConfig:(id)a1;
- (id)awe_checkAwemeCacheConfig:(id)a0;
- (id)awe_convertPrefetchRequestModel:(id)a0;
- (id)cropResponse:(id)a0 withConfig:(id)a1;
- (BOOL)awe_isSupportedMethod:(id)a0;
- (id)enumerateDictionaryWithOrigin:(id)a0 withCrop:(id)a1;
- (long long)authType;
- (id)methodName;

@end

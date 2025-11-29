@class NSString;

@interface BDXBridgeGetCurrentGCJLocationMethod : BDXBridgeMethod <BDXBridgeGetCurrentGCJLocationMethodProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)iesll_useSafeLocationInGCJLocationBridge;
+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)gcjLocationParamsWithParamModel:(id)a0 locationModel:(id)a1 isPopSelect:(BOOL)a2;
- (void)handlerGetGCJCurrentLocationWithParamModel:(id)a0 completion:(id /* block */)a1;
- (void)iesll_callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)iesll_handlerGetGCJCurrentLocationWithParamModel:(id)a0 completion:(id /* block */)a1;
- (id)iesll_gcjLocationParamsWithParamModel:(id)a0 locationModel:(id)a1 isPopSelect:(BOOL)a2;
- (long long)authType;
- (id)methodName;

@end

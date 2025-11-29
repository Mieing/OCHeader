@interface BDXBridgeGetMovieLocateMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)permissionStatusForLocation;
- (void)getLocationWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)positionPermisson:(id)a0 completionHandler:(id /* block */)a1;
- (void)getStorageWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (id)gcjLocationParamsWithParamModel:(id)a0 locationModel:(id)a1 isPopSelect:(BOOL)a2;
- (void)handlerGetGCJCurrentLocationWithParamModel:(id)a0 completion:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end

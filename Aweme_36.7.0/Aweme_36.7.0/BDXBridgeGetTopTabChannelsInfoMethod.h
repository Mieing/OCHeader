@interface BDXBridgeGetTopTabChannelsInfoMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)awegroupon_callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)awegroupon_getCurrentSceneL1;
- (BOOL)awegroupon_currentVCStackHasSearchVC;
- (void)awegroupon_trackNearbyTabInfoResultWithResult:(id)a0;
- (id)getCurrentSceneL1;
- (BOOL)currentVCStackHasSearchVC;
- (void)trackNearbyTabInfoResultWithResult:(id)a0;
- (long long)authType;
- (id)methodName;

@end

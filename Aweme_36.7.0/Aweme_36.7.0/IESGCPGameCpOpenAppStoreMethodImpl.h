@interface IESGCPGameCpOpenAppStoreMethodImpl : IESGCPGameCpOpenAppStoreMethod

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canOpenAppStoreFrom:(id)a0;
- (void)openAppStoreUsingStoreKitWith:(id)a0 completion:(id /* block */)a1;
- (id)commercialParamsWithExtraParams:(id)a0;
- (void)reportOpenResultTrackWithIsLaunch:(BOOL)a0 packageInfo:(id)a1 viewTrackerInfo:(id)a2;

@end

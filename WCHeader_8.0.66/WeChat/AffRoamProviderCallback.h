@interface AffRoamProviderCallback : NSObject {
    struct AffRoamProviderDispatcherBridgeObjcImpl { void /* function */ **x0; struct AffRoamProviderDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct AffRoamProviderDispatcherBridgeObjcImpl { void /* function */ **x0; struct AffRoamProviderDispatcherCallback *x1; id x2; } *)a0;
- (void)onGetChatLogSizeComplete:(unsigned long long)a0 size:(unsigned long long)a1 res:(id)a2;
- (void)onGetRoamFileEncKeyComplete:(unsigned long long)a0 error:(int)a1 createNew:(BOOL)a2 encKeyList:(id)a3;
- (void)onGetAdamTunnelCryptoInfoComplete:(unsigned long long)a0 cryptoResult:(id)a1;
- (void)onGetIlinkDeviceBindingSessionComplete:(unsigned long long)a0 error:(int)a1 response:(id)a2;
- (void)onGetChatPackageComplete:(unsigned long long)a0 isLastPkg:(BOOL)a1 offset:(unsigned long long)a2 chatPackage:(id)a3;
- (void)onGetChatPackageCloudComplete:(unsigned long long)a0 isLastPkg:(BOOL)a1 offset:(unsigned long long)a2 chatPackage:(id)a3;
- (void)onDownloadFromCdnComplete:(unsigned long long)a0 resp:(id)a1;
- (void)onDownloadProgressEvent:(id)a0 finished:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)onRemoveMediaComplete:(unsigned long long)a0;
- (void)onCopyToCdnComplete:(unsigned long long)a0 resp:(id)a1;
- (void)onUploadToCdnComplete:(unsigned long long)a0 resp:(id)a1;
- (void)onBatchUploadToCdnComplete:(unsigned long long)a0 resp:(id)a1;
- (void)onUploadProgressEvent:(id)a0 finished:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)onAppendToCdnComplete:(unsigned long long)a0 resp:(id)a1;
- (void)onGetAllConversationListInfoForBackupPrepareComplete:(unsigned long long)a0 timeRangeList:(id)a1;
- (void)onInsertChatPackageComplete:(unsigned long long)a0;
- (void)onInsertChatPackageCloudComplete:(unsigned long long)a0;
- (void)onGetRoamBackupPackagesComplete:(unsigned long long)a0 response:(id)a1;
- (void)onSetRoamBackupPackagesComplete:(unsigned long long)a0 response:(id)a1;
- (void)onGetNetworkInfosComplete:(unsigned long long)a0 infos:(id)a1;
- (void)onGetDeviceNetworkInfosComplete:(unsigned long long)a0 response:(id)a1;
- (void)onGetDeviceAvailableStorageSpaceComplete:(unsigned long long)a0 availableBytes:(unsigned long long)a1 minThreshold:(unsigned long long)a2;
- (void)onFilterRestoreMediaComplete:(unsigned long long)a0 filteredSize:(unsigned long long)a1 filteredMediaIdList:(id)a2;

@end

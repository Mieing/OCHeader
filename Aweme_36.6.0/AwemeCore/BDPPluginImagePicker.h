@interface BDPPluginImagePicker : BDPBridgeInstancePlugin

- (void)detailConfigChooseImageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)defaultChooseImageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)trackImageMonitorWithErrorCode:(long long)a0 errMsg:(id)a1 uniqueID:(id)a2 isOriginal:(BOOL)a3 detailConfig:(BOOL)a4;
- (void)trackImageMonitorWithErrorCode:(long long)a0 errMsg:(id)a1 uniqueID:(id)a2 isOriginal:(BOOL)a3 detailConfig:(BOOL)a4 writeFail:(long long)a5 emptyData:(long long)a6 orientationFail:(long long)a7;
- (void)requestPermissionWithUniqueID:(id)a0 imageModel:(id)a1 executeTaskBlk:(id /* block */)a2 callBack:(id /* block */)a3;
- (void)chooseImageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end

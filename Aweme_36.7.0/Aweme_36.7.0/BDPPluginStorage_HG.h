@interface BDPPluginStorage_HG : BDPBridgeInstancePlugin

- (void)setStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getStorageInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)clearStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setStorageSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getStorageSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeStorageSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getStorageInfoSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)clearStorageSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getPrivateStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setPrivateStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removePrivateStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)clearPrivateStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getPrivateStorageInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateInternalStorageSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end

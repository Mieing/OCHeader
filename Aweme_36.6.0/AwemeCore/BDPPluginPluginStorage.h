@interface BDPPluginPluginStorage : BDPBridgeInstancePlugin

- (void)setPluginStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getPluginStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getPluginStorageInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removePluginStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)clearPluginStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setPluginStorageSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getPluginStorageSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getPluginStorageInfoSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removePluginStorageSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)clearPluginStorageSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end

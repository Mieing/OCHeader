@class BDPMMKVStorage;

@interface BDPPluginInnerStorage : BDPBridgeInstancePlugin

@property (retain, nonatomic) BDPMMKVStorage *foreverStorage;
@property (retain, nonatomic) BDPMMKVStorage *userStorage;

- (void)_buildStorageIfNeeded;
- (id)_storageForCacheType:(id)a0;
- (void)innerSetStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)innerGetStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)innerSetStorageSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)innerGetStorageSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)innerGetStorageInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)innerRemoveStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)innerClearStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)innerGetStorageInfoSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)innerRemoveStorageSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)innerClearStorageSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end

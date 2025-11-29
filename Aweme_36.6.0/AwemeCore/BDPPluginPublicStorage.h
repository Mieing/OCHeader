@interface BDPPluginPublicStorage : BDPBridgeInstancePlugin

- (void)setStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getStorageInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)clearStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end

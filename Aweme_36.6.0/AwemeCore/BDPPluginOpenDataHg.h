@interface BDPPluginOpenDataHg : BDPBridgeInstancePlugin

+ (unsigned long long)pluginMode;
+ (void)bootstrapLaunch;

- (void)openUserProfileWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getCloudStorageByRelationWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getUserCloudStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeUserCloudStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setUserCloudStorageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setUserGroupWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end

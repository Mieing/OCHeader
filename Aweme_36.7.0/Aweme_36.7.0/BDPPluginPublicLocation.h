@interface BDPPluginPublicLocation : BDPBridgeInstancePlugin

+ (void)handleGetLocationResultWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2 isHighAccuracy:(BOOL)a3 locationModel:(id)a4 error:(id)a5;

- (void)openLocationWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getLocationWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end

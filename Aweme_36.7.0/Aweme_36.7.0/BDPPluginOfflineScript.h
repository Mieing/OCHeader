@interface BDPPluginOfflineScript : BDPBridgeInstancePlugin

- (id)tryGetPackageInfoWithParam:(id)a0 andUniqueID:(id)a1 andError:(id *)a2;
- (void)tryToEvaluteTheScripts:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)loadOfflineScriptWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end

@interface BDPPluginGameLoadSubpackage : BDPBridgeInstancePlugin

@property (nonatomic) BOOL hasChangePkgsWhenLoadFailed;

- (void)p_changePkgInfosNextLaunch:(id)a0;
- (void)createLoadSubPackageTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end

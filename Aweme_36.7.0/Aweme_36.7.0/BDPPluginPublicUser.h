@interface BDPPluginPublicUser : BDPBridgeInstancePlugin

@property (nonatomic) BOOL isLoginFinish;

+ (unsigned long long)pluginMode;

- (void)getUserInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)loginWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (id)init;

@end

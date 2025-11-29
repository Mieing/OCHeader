@interface WeChat.MagicPkgConfigService : MMUserService <MMServiceProtocol>

- (id)getPkgConfigWithBizName:(id)a0;
- (id)getVersionFromAppConfigWithBizName:(id)a0;
- (id)getAppConfigWithInstanceVersionWithBizNameOrInstanceName:(id)a0 version:(int)a1;
- (id)getVersionFromAppConfigWithInstanceVersionWithBizNameOrInstanceName:(id)a0 version:(int)a1;
- (id)saveDebugPkgAppConfigWithAppId:(id)a0;
- (void)removeDebugKvWithBizName:(id)a0;
- (id)saveUdrPkgAppConfigAndVersionWithLowerBizName:(id)a0 resource:(id)a1;
- (id)saveBootPkgAppConfigAndVersionWithLowerBizName:(id)a0 version:(int)a1;
- (id)init;

@end

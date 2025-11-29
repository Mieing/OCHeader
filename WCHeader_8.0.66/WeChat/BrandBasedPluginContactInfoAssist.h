@class NSString, CContactVerifyLogic;

@interface BrandBasedPluginContactInfoAssist : PluginContactInfoAssist <contactVerifyLogicDelegate>

@property (retain, nonatomic) CContactVerifyLogic *contactVerifyLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterContactSession;
- (void)handleTopSwitchChange:(id)a0;
- (void)handleMuteSwitchChange:(id)a0;
- (void)installPlugin;
- (void)uninstallPlugin;
- (void)handleOnAddContactOk:(id)a0;
- (void)contactAddContactOk:(id)a0;
- (void).cxx_destruct;

@end

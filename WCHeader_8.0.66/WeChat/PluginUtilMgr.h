@class NSString, NSDictionary, NSArray, NSSet;

@interface PluginUtilMgr : MMRootService <MMServiceProtocol, IMMLanguageMgrExt, IUpdateProfileMgrExt, MMKernelExt> {
    NSDictionary *m_dicNameToType;
    NSArray *m_arrNames;
    NSArray *m_arrLocalizedNickNames;
    NSArray *m_arrOfficialNames;
    NSSet *m_officialNamesSet;
    NSArray *m_arrLocalizedOfficialNickNames;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initLocalizedName;
- (void)initLocalizedOfficialName;
- (void)initOfficialName;
- (id)init;
- (id)pluginTypeToName:(long long)a0;
- (long long)nameToPluginType:(id)a0;
- (id)getPluginLocalizedNickName:(long long)a0;
- (BOOL)hasOfficialUserName:(id)a0;
- (BOOL)hasOfficialExpectWeixinUserName:(id)a0;
- (id)getOfficialUserNameWithType:(long long)a0;
- (id)getOfficialLocalizedNickNameWithType:(long long)a0;
- (void)refreshLocalizedName;
- (void)onLanguageChange;
- (void)onRegCountryChange;
- (void)onManulLoginOK;
- (void).cxx_destruct;

@end

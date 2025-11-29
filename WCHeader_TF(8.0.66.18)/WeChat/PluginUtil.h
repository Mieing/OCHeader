@interface PluginUtil : NSObject

+ (unsigned int)pluginTypeToUnInstallBit:(long long)a0;
+ (BOOL)isPluginInstalled:(long long)a0;
+ (BOOL)isPluginPresentedContact:(id)a0;
+ (BOOL)isBrandContactPluginType:(long long)a0;
+ (BOOL)isUseSvrHeadImagePluginContact:(id)a0;
+ (void)installPlugin:(long long)a0 sync:(BOOL)a1;
+ (void)unInstallPlugin:(long long)a0 sync:(BOOL)a1;
+ (void)installPlugin:(long long)a0;
+ (void)unInstallPlugin:(long long)a0;
+ (void)clearPluginData:(long long)a0;
+ (BOOL)isPluginUserName:(id)a0;
+ (void)refreshLocalizedName;
+ (id)getPluginContact:(long long)a0;
+ (long long)getPluginContactType:(id)a0;
+ (long long)getPluginUserNameType:(id)a0;
+ (id)getPluginUserName:(long long)a0;
+ (id)getPluginLocalizedNickName:(long long)a0;
+ (BOOL)isOfficialContact:(id)a0;
+ (BOOL)isPluginOpened:(long long)a0;
+ (void)genericFunctionSwitch:(unsigned int)a0 statusBit:(unsigned int)a1 setOpen:(BOOL)a2 sync:(BOOL)a3;
+ (void)newGenericFunctionSwitch:(unsigned int)a0 statusBit:(unsigned int)a1 setOpen:(BOOL)a2 sync:(BOOL)a3;
+ (BOOL)isPluginShow:(long long)a0;
+ (unsigned int)opPushMailPlugin:(unsigned int)a0 pwd:(id)a1;
+ (unsigned int)openPushMailPlugin:(id)a0;
+ (unsigned int)closePushMailPlugin;
+ (unsigned int)clearLBSPluginData;
+ (void)setAlbumPrivacyOption:(unsigned int)a0;
+ (unsigned int)getAlbumPrivacyOption;
+ (void)openPlugin:(long long)a0 sync:(BOOL)a1;
+ (void)closePlugin:(long long)a0 sync:(BOOL)a1;
+ (BOOL)isOfficialUserName:(id)a0;
+ (BOOL)isOfficialExpectWeixinContact:(id)a0;
+ (BOOL)isOfficialExpectWeixinUserName:(id)a0;
+ (id)getOfficialUserNameWithType:(long long)a0;
+ (id)getOfficialLocalizedNickNameWithType:(long long)a0;
+ (id)getWenxinAliasName;
+ (BOOL)isInMyContactList:(long long)a0;
+ (void)updatePluginHeadImageWithUserName:(id)a0;
+ (BOOL)isMinishopPluginSwitchEnabled;

@end

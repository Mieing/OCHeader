@class ApnsBannerDisplayContentSettingOplog, NotificationBannerDisplayContentSettingOplog;

@interface DelaySwitchSettingLogic : MMObject {
    BOOL m_bNeedToSync;
}

@property (retain, nonatomic) NotificationBannerDisplayContentSettingOplog *quickReplyOplog;
@property (retain, nonatomic) ApnsBannerDisplayContentSettingOplog *apnsContentOplog;

- (id)init;
- (void)dealloc;
- (void)enterBackground;
- (void)commitAllSwitchSetting;
- (void)chatProfileSwitchSetting:(id)a0 withType:(unsigned long long)a1 andValue:(BOOL)a2;
- (void)contactProfileSwitchSetting:(id)a0 withType:(unsigned long long)a1 andValue:(BOOL)a2;
- (void)individualPrivacySwitchSetting:(unsigned long long)a0 andValue:(BOOL)a1;
- (void)messageNotifycationSwitchSetting:(unsigned long long)a0 andValue:(BOOL)a1;
- (void)pluginSwitchSetting:(unsigned long long)a0 andValue:(BOOL)a1;
- (void)processChatProfileSetting:(id)a0 withType:(int)a1 andValue:(BOOL)a2;
- (void)setChatRoomMsgNeedPushFlag:(id)a0 needPushFlag:(unsigned int)a1;
- (void)processContactProfileSetting:(id)a0 withType:(int)a1 andValue:(BOOL)a2;
- (void)processIndividualPrivacySetting:(id)a0 withType:(int)a1 andValue:(BOOL)a2;
- (void)processMessageNotifycationSetting:(id)a0 withType:(int)a1 andValue:(BOOL)a2;
- (void)processPluginSetting:(id)a0 withType:(int)a1 andValue:(BOOL)a2;
- (void)setWCPayTransferDelaySwitch:(unsigned long long)a0;
- (void)setWCPaySettingDelaySwitch:(unsigned long long)a0 clearBitMask:(unsigned long long)a1;
- (void)discoverEntranceSwitchSetting:(unsigned long long)a0 andValue:(BOOL)a1;
- (void)discoverEntrancePluginSwitchSetting:(unsigned long long)a0 andValue:(BOOL)a1;
- (void)setExtStatusSwitchInvertedAtServerWithFunctionId:(unsigned int)a0 statusBit:(unsigned long long)a1 andSetClose:(BOOL)a2;
- (void)setExtStatus2SwitchInvertedAtServerWithFunctionId:(unsigned int)a0 statusBit:(unsigned long long)a1 andSetOpen:(BOOL)a2;
- (void)CreateSettingEventType:(unsigned int)a0 andValue:(BOOL)a1 andBitset:(unsigned int)a2;
- (void)CreateSettingExtStautsEventType:(unsigned int)a0 andValue:(BOOL)a1 andBitset:(unsigned long long)a2;
- (void)setDiscoverEtranceSettingFlagMask:(unsigned long long)a0 setOpen:(BOOL)a1;
- (void)setApnsContentSetting:(unsigned int)a0;
- (void)saveApnsContentLocalChange;
- (void)commitApnsContentSettingChange;
- (void)setQuickReplySwitchOn:(BOOL)a0;
- (void)setQuickReplyContentSetting:(unsigned int)a0;
- (void)saveQuickReplyLocalChange;
- (void)commitQuickReplySettingChange;
- (void)processWCCommentInteractionsNotificationSetting:(int)a0 shouldOpen:(BOOL)a1;
- (void).cxx_destruct;

@end

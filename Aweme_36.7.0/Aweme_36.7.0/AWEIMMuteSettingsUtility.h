@interface AWEIMMuteSettingsUtility : NSObject

+ (long long)muteSettingsMaskOfConversation:(id)a0;
+ (long long)foldGroupChatExpOptionValue;
+ (void)presentMuteSettingsVCOnViewController:(id)a0 ofConversation:(id)a1 extraParams:(id)a2;
+ (long long)muteSettingsSourceMaskOfConversation:(id)a0;
+ (id)muteStringFromMuteSettingMask:(long long)a0;
+ (id)muteSettingsTypeToIdentifierDict;
+ (BOOL)__enableSubscribeUnreadCountOnMuteWithMute:(BOOL)a0;
+ (BOOL)shouldBeDealAsMuteCauseIsFoldedConversation:(id)a0;
+ (void)__updateDefaultMuteConfigWithConversation:(id)a0 muteConfigString:(id)a1;
+ (id)muteSettingsIdentifierToTypeDict;
+ (long long)muteSettingsMaskOfCurrentUnreadMessageInConversation:(id)a0 subscribeUnreadCountsOnMute:(id)a1;
+ (BOOL)isHintTypeGroupOwnerMessage:(id)a0;
+ (BOOL)isAtMeMessage:(id)a0;
+ (BOOL)isGroupOwnerRedPocketMessage:(id)a0 withConversation:(id)a1;
+ (BOOL)isHintTypeGroupOwnerMessageWithIESMessage:(id)a0;
+ (BOOL)isGroupOwnerRedPocketMessageWithIESMessage:(id)a0 conversation:(id)a1;
+ (BOOL)isAtMeMessageWithIESMessage:(id)a0;
+ (BOOL)enableSubscribeUnreadCountOnMuteOfConversation:(id)a0;
+ (BOOL)enableSubscribeUnreadCountOnMuteOfBaseConversationModel:(id)a0;
+ (long long)muteSettingsMaskOfCurrentUnreadMessageInConversation:(id)a0;
+ (BOOL)isImportantMessage:(id)a0 inConversation:(id)a1 forMuteSettingsType:(long long)a2;
+ (BOOL)isAirbornImportantMessage:(id)a0 forMuteSettingsType:(long long)a1 conversation:(id)a2;
+ (BOOL)isAirbornImportantIESMessage:(id)a0 mask:(long long)a1 conversation:(id)a2;
+ (long long)typeForImportantMessage:(id)a0 conversation:(id)a1;
+ (BOOL)isAutoSyncMessage:(id)a0;
+ (BOOL)isAutoSyncMessageWithIESMessage:(id)a0;
+ (BOOL)isContainOwnerAtMeMessage:(id)a0;

@end

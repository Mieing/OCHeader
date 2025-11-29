@interface AWEIMMessageConventor : NSObject

+ (id)convertMessageFromTIMOMessage:(id)a0 config:(id)a1;
+ (BOOL)isHTSAdapterExist;
+ (id)shieldCloseFriendMomentMessageInMsgConventorIfNeeded:(id)a0;
+ (void)assignMentionMaskForMessage:(id)a0 fromTIMOMessage:(id)a1;
+ (void)configMsg:(id)a0 withTTMsg:(id)a1;
+ (Class)aAWEIMModuleServiceHTSAdaperClass;
+ (id)p_containTips:(id)a0;
+ (void)configMsg:(id)a0 withSMsg:(id)a1 contentDict:(id)a2 extDict:(id)a3;
+ (id)convertMessageFromTIMOMessage:(id)a0 calculateSize:(BOOL)a1 config:(id)a2;
+ (id)convertMessageFromTIMOMessage:(id)a0 chatModelType:(long long)a1 calculateSize:(BOOL)a2;
+ (id)convertMessageFromTIMOMessage:(id)a0 chatModelType:(long long)a1;
+ (id)generateNoticeTipsMessageFromTIMOMessage:(id)a0;
+ (id)convertMessageFromTIMOMessage:(id)a0 conversationHint:(BOOL)a1 chatModelType:(long long)a2;
+ (id)generateAntiSpamMessageFromTIMOMessage:(id)a0;
+ (id)converMessageFromStrangerMsg:(id)a0 calculaeSize:(BOOL)a1;
+ (id)converMessageFromStrangerMsg:(id)a0;
+ (BOOL)p_isNewWatchOnceBubble:(long long)a0;
+ (BOOL)__specialForbidMessageWithMessageType:(long long)a0 aweType:(long long)a1;
+ (id)projectXMessageStyleSetupWithIMMessage:(id)a0 busiType:(long long *)a1;
+ (id)_getUpgradeDictionaryTipsFromUid:(id)a0;
+ (void)__postConfigMsg:(id)a0;
+ (void)_calculateMessageSize:(id)a0;
+ (long long)__getMentionMaskFromArrayString:(id)a0;
+ (id)p_getUpgradeXDictionaryTipsFromUid:(id)a0 messageType:(long long)a1 outBusinessType:(long long *)a2 ext:(id)a3;
+ (id)p_getUnSupportMessageDictionaryTipWithBusinessType:(long long *)a0;
+ (id)p_getUpgradeXDictionaryForCardWithOutBusinessType:(long long *)a0 ext:(id)a1;
+ (id)generateAntiSpamMessageFromTIMOMessage:(id)a0 conversationHint:(BOOL)a1;
+ (void)__didReceiveShowPopupsWithDialogArray:(id)a0 conversationID:(id)a1;
+ (void)_didReceiveStrongTipsNotice:(id)a0;
+ (BOOL)isMsgShouldBeFiltered:(id)a0;
+ (id)textColorForUnknownMessageFromSelf;
+ (id)awemeAppStoreURLString;
+ (long long)AWEIMMessageStateFromTIMOMessageStatus:(long long)a0;
+ (void)__assignMentionMaskForMessage:(id)a0 fromTIMOMessage:(id)a1;
+ (BOOL)shouldDowngradeGameInviteMessage:(id)a0;
+ (id)downgradeGameInviteMessageToTextMessage:(id)a0;

- (id)aAWEIMModuleServiceHTSAdaper;

@end

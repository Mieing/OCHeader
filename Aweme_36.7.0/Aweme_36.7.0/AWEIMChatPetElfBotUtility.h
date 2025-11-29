@class NSString;

@interface AWEIMChatPetElfBotUtility : NSObject <AWEUserMessage>

@property (copy) NSString *feedbackContent;
@property (copy) NSString *feedbackSchema;
@property (nonatomic) BOOL didFetchPetElfBotUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elfBotMessagePublishTrackBasicParamsWithSelectMessages:(id)a0 con:(id)a1;
+ (BOOL)isPetElfBotEnableInConversation:(id)a0;
+ (BOOL)publishMsgEnable;
+ (long long)publishMsgDateFilter;
+ (BOOL)abEnable;
+ (id)feedbackContent;
+ (void)setFeedbackContent:(id)a0;
+ (id)feedbackSchema;
+ (void)setFeedbackSchema:(id)a0;
+ (id)getStreakPetCommonParamsWithConversation:(id)a0;
+ (BOOL)canDisplayFeedback:(id)a0;
+ (BOOL)canAtPetElfBotInConversation:(id)a0;
+ (BOOL)needUpdatePetElfBotData:(id)a0 inConversation:(id)a1;
+ (void)updatePetElfBotData:(id)a0 inConversation:(id)a1 completion:(id /* block */)a2;
+ (id)getPetElfBotUserInConversation:(id)a0;
+ (void)openPetElfBotSettingPanelInConversation:(id)a0;
+ (long long)getStreakStatusForTrackingWithConversation:(id)a0;
+ (BOOL)isPetAvailableInConversation:(id)a0;
+ (void)syncTechTrackEvent:(id)a0 paramsBlock:(id /* block */)a1;
+ (void)publishMemoryChangeEventWithConversationID:(id)a0 scene:(id)a1;
+ (void)publishMemoryGenerateEventWithConversationID:(id)a0 estimatedSecond:(long long)a1 statusInfo:(id)a2;
+ (BOOL)hasRaisePetInConversation:(id)a0;
+ (void)trackAtElfBotInConversation:(id)a0 forScene:(id)a1;
+ (id)getPetElfBotNicknameForUser:(id)a0 inConversation:(id)a1;
+ (id)getPetElfBotAvatarURLInConversation:(id)a0;
+ (id)getPetElfBotNicknameInConversation:(id)a0;
+ (BOOL)didFetchPetElfBotUser;
+ (id)getPetElfBotInConversation:(id)a0;
+ (void)setDidFetchPetElfBotUser:(BOOL)a0;
+ (void)removePetElfCacheInConversation:(id)a0 completion:(id /* block */)a1;
+ (id)getPetElfBotAvatarURLForUser:(id)a0 inConversation:(id)a1;
+ (id)getTransferPetElfPanelSchemaWithActiveTab:(long long)a0 conversation:(id)a1;
+ (id)getPetElfBotNicknameForMsg:(id)a0 inConversation:(id)a1;
+ (BOOL)isFeatureEnableForConvShortID:(id)a0;
+ (id)getTransferPetElfPanelBaseSchemaWithConversationID:(id)a0;
+ (id)getInvitePetElfBotPanelBaseSchemaWithConversationID:(id)a0;
+ (id)transferQueryDictWithConversation:(id)a0 enterMethod:(id)a1;
+ (void)openPetElfBotPanelActiveTab:(long long)a0 conversation:(id)a1 enterMethod:(id)a2;
+ (void)openPetElfBotInvitePanelInConversation:(id)a0 enterMethod:(id)a1;
+ (void)openFeedbackPanelWithMessage:(id)a0 inConversation:(id)a1;
+ (void)reFetchFeedBackContentWithMessage:(id)a0 inConversation:(id)a1 completion:(id /* block */)a2;
+ (void)p_uploadFeedBackType:(long long)a0 inConversation:(id)a1 forMsg:(id)a2;
+ (id)positiveKeys;
+ (BOOL)isPetElfBot:(id)a0;
+ (id)getSendAtPetElfMessageParams:(id)a0 inConversation:(id)a1;
+ (void)openPetElfAchieveOrInvitePanel:(id)a0;
+ (void)tryOpenFeedbackPanelWithMessage:(id)a0 inConversation:(id)a1;
+ (id)getPetElfBotAvatarURLForMsg:(id)a0 inConversation:(id)a1;
+ (id)getBotNameFromReferMsg:(id)a0 inConversation:(id)a1;
+ (void)didAddEmojiKey:(id)a0 toBotMessage:(id)a1 conID:(id)a2;
+ (BOOL)isSelfDislikeMsg:(id)a0;
+ (id)getTrackLongPressMsgParamsInConversation:(id)a0 message:(id)a1 force:(BOOL)a2;
+ (id)shareInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

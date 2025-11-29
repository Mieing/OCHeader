@interface AWEIMGeneralFansGroupConversationFeatureConfig : AWEIMBigGroupConversationFeatureConfig

- (BOOL)enableLiveSubscribeExpireHint;
- (BOOL)enableChatDetailHistoryMediaWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableUsingFansGroupMuteStrategyWithConversation:(id)a0;
- (BOOL)enableFansGroupFeedEmojiReplyWithConversation:(id)a0;
- (BOOL)enableGroupOpenNoticeMessageWithConversation:(id)a0;
- (BOOL)enableEditShowGroupEntranceOnUserProfileWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableMutingFilterWithConversation:(id)a0;
- (BOOL)enableMuteSettingOptionFoldWithConversation:(id)a0;
- (BOOL)enableMutingFilterWithBaseConversation:(id)a0;
- (BOOL)enableGroupAvatarWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableMuteSettingWithConversation:(id)a0;
- (BOOL)enableGroupBlockWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableBanAdvUserJoinSwitchWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableBanAskPraiseUserJoinSwitchWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableGroupWelcomeWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableNotAllowSelfItemShareWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableLiveFansSubscriptionAutoRemoveWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableFansGroupCommodityEntryWithConversation:(id)a0;
- (BOOL)useFansGroupStyleForGroupMemberListPage;
- (BOOL)enableGroupNoticeBannerWithConversation:(id)a0;
- (BOOL)enableLiveGroupAnnouncementBannerWithConversation:(id)a0;
- (BOOL)enableFansGroupCouponEntryWithConversation:(id)a0;
- (BOOL)enableFansGroupMentionAll;

@end

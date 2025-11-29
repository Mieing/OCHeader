@interface AWEIMOfficialGroupConversationFeatureConfig : AWEIMBigGroupConversationFeatureConfig

- (BOOL)enableEntryLimitWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableAutoSyncLiveWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableAutoSyncWorkWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableGroupBlockWithConversation:(id)a0 permissionType:(unsigned long long)a1;
- (BOOL)enableGroupNoticeBannerWithConversation:(id)a0;
- (BOOL)enableLiveGroupAnnouncementBannerWithConversation:(id)a0;

@end

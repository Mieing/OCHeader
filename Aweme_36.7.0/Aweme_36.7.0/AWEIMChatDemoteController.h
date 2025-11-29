@class NSDictionary, NSString;

@interface AWEIMChatDemoteController : NSObject <AWEUserMessage>

@property (copy, nonatomic) NSDictionary *demotedConShortIDs;
@property (copy, nonatomic) NSDictionary *oldMsgDegrade;
@property (copy, nonatomic) NSDictionary *lastEnterConTime;
@property (copy, nonatomic) NSDictionary *hasInheritedDemotation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableDemoteStrategyForConversation:(id)a0;
+ (BOOL)isConversationDemoted:(id)a0;
+ (BOOL)shouldFilterUnreadByAISingleWithConvSyncExt:(id)a0;
+ (void)setDemoteStatus:(BOOL)a0 forConversation:(id)a1;
+ (void)didEnterConversation:(id)a0;
+ (void)didUnmuteConversation:(id)a0;
+ (void)batchUpdateDemoteStatusForChats:(id)a0;
+ (BOOL)shouldDemoteUnreadCountWithChat:(id)a0;
+ (BOOL)enableReportingFilterReason;
+ (BOOL)shouldDemoteUnreadCountWithChat:(id)a0 filterReason:(id *)a1;
+ (BOOL)shouldDemoteUnreadCountByAIPrivateChatWithChat:(id)a0;
+ (BOOL)isTargetChatTypeWithChat:(id)a0;
+ (BOOL)abtest_shouldDemoteUnreadCountWithChat:(id)a0;
+ (BOOL)shouldDemoteUnreadCountWithChat:(id)a0 enableNewDemoteStrategy:(BOOL)a1 filterReason:(id *)a2;
+ (BOOL)shouldDemoteUnreadCountWithChat:(id)a0 enableNewDemoteStrategy:(BOOL)a1;
+ (id)p_getDemotedFlagFromLocalCache:(id)a0;
+ (id)getChatTypeName:(id)a0;
+ (BOOL)enableDemoteChatType:(id)a0;
+ (BOOL)p_isRecentUnmuteConversation:(id)a0;
+ (double)getLastMsgDemoteTime:(id)a0;
+ (long long)getDemoteUnreadCountForType:(id)a0;
+ (double)getLastReadDemoteTime:(id)a0;
+ (void)p_batchupdateLocalCacheForChats:(id)a0;
+ (BOOL)shouldUpsertDemoteChat:(id)a0;
+ (void)setDetmoteCacheForConversation:(id)a0 status:(BOOL)a1;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)storeOldMsgDegrade:(id)a0;
- (void)storeLastEnterConTime:(id)a0;
- (void)storeHasInheritedDemotation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

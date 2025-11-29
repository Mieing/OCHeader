@class NSString;

@interface IESIMGroupManagementImpl : NSObject <IESIMGroupManagementInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)fetchGroupUpgradeSettingWithConversation:(id)a0 completion:(id /* block */)a1;
- (void)fetchGroupSettingEntryLimitWithConversation:(id)a0 completion:(id /* block */)a1;
- (void)updateGroupManagementWithConversation:(id)a0 type:(unsigned long long)a1 updateValue:(id)a2 completion:(id /* block */)a3;
- (void)refreshGroupManagementInfoWithConversationID:(id)a0 type:(int)a1 updateValue:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchGroupSettingEntryLimitWithConversationID:(id)a0 serverExtra:(id)a1 completion:(id /* block */)a2;
- (id)createChangeMemeberViewControllerWith:(unsigned long long)a0 conversation:(id)a1;
- (Class)changeMemberViewControllerClass;
- (id)createAddGroupAdminViewController;
- (id)createGroupEntryLimitsViewControllerWithGroupEntrySettingMenuModel:(id)a0 groupEntryLimitDict:(id)a1 extra:(id)a2 selectedCompletion:(id /* block */)a3;
- (id)createGroupEntryLimitsViewControllerWithEntrySettings:(id)a0 groupEntryLimitDict:(id)a1;
- (id)createApplyJoinGroupDataManager;
- (void)setApplyJoinGroupEntranceDataManagerDelegate:(id)a0;
- (long long)unreadCountOfApplyJoinGroupEntrance;
- (long long)unreadCountOfApply;
- (long long)unreadCountOfPrompt;
- (void)fetchLatestJoinGroupApplyAtCodeStart;
- (void)removeApplyJoinGroupEntrance;
- (id)tagsWithText:(id)a0 originX:(double)a1;
- (id)tagsWithText:(id)a0 originX:(double)a1 fixedLightStyle:(BOOL)a2;
- (id)notAllowSelfItemShareTitle;
- (id)notAllowSelfItemShareDesc;
- (id)autoSyncLiveMessageTitle;
- (id)autoSyncLiveMessageDesc;
- (id)autoSyncLiveMessageDescFromLive;
- (id)autoSyncFeedVideoMessageTitle;
- (id)autoSyncFeedVideoMessageDesc;
- (id)autoSyncFeedVideoMessageDescFromLive;
- (id)autoSyncMemberManageMessageTitle;
- (id)autoSyncMemberManageMessageDesc;
- (id)liveFansSubscriptionAutoRemoveTitle;
- (id)liveFansSubscriptionAutoRemoveDesc;
- (id)liveWindowAutoSyncDescription;
- (id)trackInfoWithConversation:(id)a0;
- (void)p_constructListWithConversation:(id)a0 setting:(id)a1;
- (id)p_str2Map:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

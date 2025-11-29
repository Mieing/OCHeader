@class HTSEventContext, NSString, NSArray, AWELiveVisibleScopeExemptionDataController, IESLiveVisibleScopeFriendsDataController, NSMutableDictionary, HTSLiveApi, IESLiveVisibleScopeChatGroupDataController, NSMutableArray, IESLiveVisibleScopeHistoryDataController, IESLiveVisibleScopeFansDataController;

@interface AWEVisibleScopeManager : NSObject

@property (retain, nonatomic) NSString *curUserID;
@property (retain, nonatomic) NSMutableArray *selectedUidList;
@property (retain, nonatomic) NSMutableArray *selectedUserList;
@property (retain, nonatomic) NSArray *originSelectedUserList;
@property (nonatomic) unsigned long long currentDetailPageType;
@property (nonatomic) BOOL isRequestOnAir;
@property (retain, nonatomic) NSMutableDictionary *trackClickSource;
@property (retain, nonatomic) NSMutableArray *strangerList;
@property (retain, nonatomic) IESLiveVisibleScopeHistoryDataController *historyDataController;
@property (retain, nonatomic) IESLiveVisibleScopeFriendsDataController *friendsDataController;
@property (retain, nonatomic) IESLiveVisibleScopeFansDataController *fansDataController;
@property (retain, nonatomic) IESLiveVisibleScopeFansDataController *followingDataController;
@property (retain, nonatomic) IESLiveVisibleScopeChatGroupDataController *chatGroupDataController;
@property (retain, nonatomic) AWELiveVisibleScopeExemptionDataController *exemptionDataController;
@property (retain, nonatomic) HTSLiveApi *api;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSMutableArray *selectedChatGroupList;
@property (nonatomic) BOOL isPlayBack;
@property (nonatomic) BOOL isExemptionScene;

+ (id)liveUserForRequestLiveInfo:(id)a0;
+ (id)p_keyWithUserID:(id)a0;
+ (id)liveChatGroupForVisibleListData:(id)a0;
+ (id)liveChatGroupForGroupListResponse:(id)a0;

- (BOOL)isUserSelected:(id)a0;
- (BOOL)canAddSelectedUser;
- (id)initWithType:(unsigned long long)a0 AwemeID:(id)a1 trackContext:(id)a2;
- (void)updateInitialSelectedUsers:(id)a0;
- (void)uploadFullSelectedUserListWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)chatGroupListStr:(id)a0;
- (BOOL)checkAndAddOrRemoveUser:(id)a0 source:(unsigned long long)a1;
- (BOOL)isStrangerListContainsUser:(id)a0;
- (id)toastStrOfPrivateAccount;
- (void)trackSelectedUsers:(unsigned long long)a0;
- (id)correctSelectUidListWithUpdateFailedList:(id)a0 cancelFailedList:(id)a1;
- (void)updateVisibleUserListOf:(unsigned long long)a0;
- (void)trackSelectedExemptionUserList;
- (void)updateFullSelectedExemptionUserListWithCompletion:(id /* block */)a0;
- (BOOL)isAwemeUserSelected:(id)a0;
- (BOOL)isDisableForUser;
- (BOOL)isDisableForChatGroup:(id)a0;
- (BOOL)isChatGroupSelected:(id)a0;
- (id)dataControllerForType:(unsigned long long)a0;
- (id)dataSourceForType:(unsigned long long)a0;
- (void)refreshAllUserList:(id /* block */)a0;
- (void)loadMoreAllUserListWithCurrentType:(unsigned long long)a0 completion:(id /* block */)a1;
- (unsigned long long)checkAlertAndAddOrRemoveChatGroup:(id)a0;
- (void)onChatGroupSelect:(id)a0 source:(unsigned long long)a1;
- (void)onChatGroupRemove:(id)a0 source:(unsigned long long)a1;
- (void)p_checkAndRemoveSelectedStrangerUser;
- (void)refreshAllUserListInExemptionScene:(id /* block */)a0;
- (void)p_fetchChatGroupData:(BOOL)a0 completion:(id /* block */)a1;
- (void)p_fetchFriendsData:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchLastChoiceUsers:(id /* block */)a0;
- (BOOL)isUserStranger:(id)a0;
- (void)updateInitialSelectedUsersInExemptionScene:(id)a0;
- (void)markSelectedSource:(unsigned long long)a0;
- (void)p_fetchFansData:(BOOL)a0 completion:(id /* block */)a1;
- (void)p_fetchFollowingData:(BOOL)a0 completion:(id /* block */)a1;
- (void)p_updateVisibleUserListOf:(unsigned long long)a0 isUpdate:(BOOL)a1 userList:(id)a2;
- (id)requestParamsWithType:(unsigned long long)a0;
- (id)uidListStr:(id)a0;
- (BOOL)canAddSelectedGroup;
- (void)addChatGroupWith:(id)a0;
- (void)removeChatGroupWithID:(id)a0;
- (void)checkAndRemoveSelectedStrangerUserInExemptionScene;
- (long long)totalMemberCountInChatGroup;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)removeUserWithUserID:(id)a0;

@end

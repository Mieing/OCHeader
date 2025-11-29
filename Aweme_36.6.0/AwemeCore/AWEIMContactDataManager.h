@class NSArray, HMDThreadSafeDictionary, NSMutableSet, AWEIMContactSynchronizer, AWEIMBatchFetchUserSession, NSString;
@protocol AWEIMContactUserManagerProtocol;

@interface AWEIMContactDataManager : NSObject <AWEUserMessage, AWEIMContactSynchronizerDelegate, AWEIMBatchFetchUserSessionDelegate>

@property (retain, nonatomic) AWEIMContactSynchronizer *contactSynchronizer;
@property (retain, nonatomic) NSMutableSet *pendingContactListCompletionBlocks;
@property (nonatomic) long long lastFriendIdx;
@property (retain, nonatomic) AWEIMBatchFetchUserSession *fetchPrivateLiveUserSession;
@property (copy, nonatomic) NSArray *remoteUsers;
@property (retain, nonatomic) id<AWEIMContactUserManagerProtocol> userManager;
@property (retain, nonatomic) HMDThreadSafeDictionary *currentRequestDict;
@property (retain, nonatomic) NSArray *strangerModelList;
@property (readonly, nonatomic) BOOL isDownloadingWholeContacts;
@property (readonly, nonatomic) BOOL needAddressBookFriend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filterNotFriendUser:(id)a0;
+ (id)filterSelfForList:(id)a0;
+ (id)filterExclusionUser:(id)a0 filterExclusionUidList:(id)a1;
+ (id)filterBlockedUser:(id)a0;
+ (BOOL)shouldBeFilteredWhenGameIncentive:(id)a0;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishUnHidePostFromHer:(id)a0 status:(long long)a1;
- (void)willFinishCloseFriendsWithUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)fetchWholeContactAndRecentContactList:(id /* block */)a0;
- (id)saveAweUser:(id)a0 forOwnerID:(id)a1 dataFrom:(long long)a2;
- (BOOL)isGroupInChatList:(id)a0;
- (BOOL)isFriend:(id)a0;
- (void)fetchAfterPublishShareModelList:(id /* block */)a0 filterNotFriendUser:(BOOL)a1 filterExclusionSecUidList:(id)a2;
- (void)fetchTranspondShareModelList:(id /* block */)a0 configs:(id)a1;
- (void)fetchTranspondShareResponseModel:(id /* block */)a0 configs:(id)a1;
- (void)fetchWholeContactList:(id /* block */)a0;
- (void)queryUser:(id)a0 secUserID:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)maxTranspondShareUserCount;
- (void)fetchContactListLimit:(long long)a0 readScene:(long long)a1 complete:(id /* block */)a2;
- (void)batchFetchUserSessionDidFinished:(id)a0;
- (void)setupContactDataManagerWithContext:(id)a0;
- (void)fetchTranspondShareModelList:(id /* block */)a0 filterNotFriendUser:(BOOL)a1 needAddressBookFriend:(BOOL)a2;
- (BOOL)didShowedTranspondFilterNotFriendUser:(BOOL)a0;
- (void)fetchSpecifyTranspondShareModelList:(id /* block */)a0 specificationUserDic:(id)a1;
- (void)fetchContactListLimit:(long long)a0 complete:(id /* block */)a1;
- (void)addUser:(id)a0 secUserID:(id)a1 detailCompletion:(id /* block */)a2;
- (void)p_didFinishLogout;
- (void)addUser:(id)a0 secUserID:(id)a1 completion:(id /* block */)a2;
- (void)_fetchLocalContactList:(id /* block */)a0;
- (void)_fetchLocalContactListLimit:(long long)a0 readScene:(long long)a1 complete:(id /* block */)a2;
- (void)_fetchWholeContactAndRecentContactList:(id /* block */)a0;
- (id)shareModelListWithLimitCount:(long long)a0 shareModelList:(id)a1;
- (void)p_getUserProfile:(id)a0 secUserID:(id)a1 detailCompletion:(id /* block */)a2;
- (void)addUser:(id)a0 secUserID:(id)a1 forbidUpdateUCDataBase:(BOOL)a2 detailCompletion:(id /* block */)a3;
- (id)p_saveAweUser:(id)a0 forOwnerID:(id)a1 toDB:(BOOL)a2 dataFrom:(long long)a3;
- (id)_recentContactListFromContactList;
- (void)p_updateIMUserPostFromHerStatusWithUserID:(id)a0 status:(long long)a1;
- (void)p_updateIMUserBlockStatus:(id)a0 status:(long long)a1;
- (void)contactSynchronyComplete;
- (BOOL)isDownloadingWholeContacts;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

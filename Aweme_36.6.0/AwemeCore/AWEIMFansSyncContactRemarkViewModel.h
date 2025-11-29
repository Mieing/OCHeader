@class NSNumber, NSMutableArray, NSString;

@interface AWEIMFansSyncContactRemarkViewModel : AWEIMFansBaseViewModel <AWEUserMessage, AWEIMFansSyncContactRemarkViewModelProtocol>

@property (retain, nonatomic) NSMutableArray *contactFriends;
@property (retain, nonatomic) NSMutableArray *UIDs;
@property (retain, nonatomic) NSMutableArray *nonFriendsList;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (retain, nonatomic) NSNumber *enableShow;
@property (nonatomic) BOOL isFromInteractiveNotice;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)syncContactsRemarkConfig;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)fetchContacsMkeys:(id /* block */)a0;
- (void)postRemarkName:(id)a0 completion:(id /* block */)a1;
- (BOOL)canShowSyncContactRemarkView;
- (BOOL)canShowSyncContactRemarkViewIfHasInteractiveNotice:(BOOL)a0;
- (BOOL)enableFetchContactMkeys;
- (BOOL)enabelMeetFrequencyRules;
- (void)recordClickSyncContactRemarkCell;
- (BOOL)needSyncUser;
- (id)fetchRealContactFriends;
- (void)followUser:(id)a0 status:(long long)a1;
- (void)unFollowUser:(id)a0 status:(long long)a1;
- (void)blockUser:(id)a0 status:(long long)a1;
- (void)setRemarkWithUser:(id)a0;
- (void)trackContactsRemarkSyncLayer:(id)a0 actionStatus:(id)a1 userIDList:(id)a2;
- (void)recordShowSyncContactRemarkCell;
- (void)trackContactsRemarkSyncNotice:(id)a0;
- (void)trackContactListGuidanceBar:(id)a0 actionType:(id)a1;
- (id)URLForContactMkeys;
- (void)filterFailContactNameUsers;
- (id)URLForEditRemarkName;
- (void)recordBizFailUIDs:(id)a0;
- (void)callRemarkUserMessage:(id)a0 failUIDs:(id)a1 bizFailUIDs:(id)a2;
- (id)recordBizFailUIDsKey;
- (id)showSyncContactRemarkCellRule;
- (id)clickSyncContactRemarkCellRule;
- (void)updateDisplayStatusIfNeed:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

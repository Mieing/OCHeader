@class NSArray, NSString, NSNumber, AWERelationFollowGroupMemberDataController;

@interface AWERelationFollowGroupMemberViewModel : AWERelationFollowBaseViewModel

@property (retain) NSArray *allUserIds;
@property BOOL isRefreshing;
@property (retain) NSNumber *groupID;
@property (copy, nonatomic) NSString *enterFrom;
@property BOOL firstLoading;
@property BOOL isLoading;
@property BOOL hasMore;
@property (retain) AWERelationFollowGroupMemberDataController *dataController;
@property BOOL loadingShown;
@property (copy) NSString *groupName;
@property (copy, nonatomic) NSString *followGroupType;

- (void)viewModelDidFinishAddNewMembers:(id)a0 newUserIds:(id)a1;
- (void)viewModelDidFinishDropMembers:(id)a0 userIds:(id)a1;
- (void)fetchData:(BOOL)a0;
- (void)resetStatusWhenNetworkDisconnected;
- (id)initWithGroupID:(id)a0 groupName:(id)a1 params:(id)a2;
- (void)updateGroupWithNewName:(id)a0 completion:(id /* block */)a1;
- (void)deleteGroupWithCompletion:(id /* block */)a0;
- (void)followBtnExecute:(id)a0;
- (void)__unfollowUser:(id)a0;
- (void).cxx_destruct;

@end

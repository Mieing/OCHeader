@class AFDFriendsRelationListDataController, NSDate;

@interface AWEMateListDataController : NSObject

@property (retain, nonatomic) AFDFriendsRelationListDataController *relationListDataController;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) BOOL isRequestMateListOnAir;
@property (nonatomic) BOOL hasRequestRelationData;

- (id)sortDataSourceByCloseFriends:(id)a0;
- (long long)judgeHideHerPostStatusWithUid:(id)a0;
- (long long)judgeHideMyPostStatusWithUid:(id)a0;
- (BOOL)judgePrivateRelation:(long long)a0 withUid:(id)a1;
- (void)updateHideHerPostStatusWith:(long long)a0 userID:(id)a1;
- (void)updateHideMyPostStatusWith:(long long)a0 userID:(id)a1;
- (void)updatePrivateRelation:(long long)a0 relationValue:(BOOL)a1 userID:(id)a2;
- (id)sortedListByFirstPinyinLetter:(id)a0;
- (void)fetchMateListData:(id /* block */)a0;
- (void)trackListDataMonitor:(long long)a0 isLocalData:(BOOL)a1 success:(BOOL)a2;
- (id)closeFriendsList:(id)a0;
- (BOOL)enableSortCloseFriends;
- (id)sortedUserList:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

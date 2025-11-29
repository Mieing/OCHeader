@class NSString, NSMutableDictionary, NSArray, NSMutableArray;

@interface AFDFriendsRelationListDataController : NSObject <AFDFriendsRelationListDataControllerProtocol>

@property (retain, nonatomic) NSMutableArray *innerUseNotSeeUids;
@property (retain, nonatomic) NSMutableArray *innerUseNotShowUids;
@property (retain, nonatomic) NSMutableArray *innerFriendsListUids;
@property (retain, nonatomic) NSMutableArray *innerNonFriendsListUids;
@property (retain, nonatomic) NSMutableDictionary *privateRelationUids;
@property (copy, nonatomic) NSString *requestSource;
@property (nonatomic) BOOL hasRequestData;
@property (readonly, nonatomic) NSArray *useNotSeeUids;
@property (readonly, nonatomic) NSArray *useNotShowUids;
@property (readonly, nonatomic) NSArray *friendsListUids;
@property (readonly, nonatomic) NSArray *nonFriendsListUids;
@property (readonly, nonatomic) NSArray *useNotShow24StoryUids;
@property (readonly, nonatomic) NSArray *useNotSee24StoryUids;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchFriendsRelationListWithCompletion:(id /* block */)a0;
- (long long)judgeHideHerPostStatusWithUid:(id)a0;
- (long long)judgeHideMyPostStatusWithUid:(id)a0;
- (long long)judgeIsFriendSwitchStatusWithUid:(id)a0;
- (BOOL)judgePrivateRelation:(long long)a0 withUid:(id)a1;
- (void)updateUseNotSeeUidsWithOperationType:(unsigned long long)a0 userID:(id)a1;
- (void)updateUseNotShowUidsWithOperationType:(unsigned long long)a0 userID:(id)a1;
- (void)updateNonFriendsListUidsWithOperationType:(unsigned long long)a0 userID:(id)a1;
- (void)updateFriendsListUidsWithOperationType:(unsigned long long)a0 userID:(id)a1;
- (void)updatePrivateRelation:(long long)a0 operationType:(unsigned long long)a1 userID:(id)a2;
- (void)handleRelationArraysWithModel:(id)a0;
- (void)fetchFriendsRelationListWithTypeArray:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end

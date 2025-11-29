@class NSString, NSMutableArray;

@interface AWEUserRecommendConcernDataController : MTLModel <AWEUserRecommendConcernDataControllerProtocol>

@property (copy, nonatomic) NSString *insertedAuthorID;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) id /* block */ userListUpdateCompletion;
@property (retain, nonatomic) NSMutableArray *userList;
@property (readonly, nonatomic) NSMutableArray *alreadyRequestedUserIDList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)asyncRequestWithDisplayedUserIDs:(id)a0 requestCount:(long long)a1;
- (void)requestWithDisplayedUserIDs:(id)a0 requestCount:(long long)a1 completion:(id /* block */)a2;
- (void)requestWithDisplayedUserIDs:(id)a0 requestCount:(long long)a1 authorID:(id)a2 completion:(id /* block */)a3;
- (void)requestWithDisplayedUserIDs:(id)a0 requestCount:(long long)a1 authorID:(id)a2 fromHotFeed:(BOOL)a3 completion:(id /* block */)a4;
- (id)validateRecommendUserList:(id)a0;
- (void)requestWithCount:(long long)a0 authorID:(id)a1 completion:(id /* block */)a2;
- (id)initWithInsertAuthorID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)urlPath;

@end

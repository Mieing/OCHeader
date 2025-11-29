@class AFDInviteFriendTogetherViewModel, NSArray, NSDictionary, AFDPlayTogetherFriend;
@protocol IESIMSearchEngineProtocol;

@interface AFDPlayTogetherFriendsDataManager : NSObject

@property (retain, nonatomic) NSArray *friendArray;
@property (retain, nonatomic) NSArray *recentFriendArray;
@property (retain, nonatomic) NSArray *recommendArray;
@property (retain, nonatomic) NSArray *searchResultArray;
@property (retain, nonatomic) id<IESIMSearchEngineProtocol> searchEngine;
@property (retain, nonatomic) NSArray *contactDatasource;
@property (nonatomic) long long cursor;
@property (retain, nonatomic) AFDInviteFriendTogetherViewModel *viewModel;
@property (retain, nonatomic) AFDPlayTogetherFriend *intimateFriend;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) id /* block */ reloadDataBlock;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) id /* block */ searchCompletion;

- (void)loadMore;
- (void)p_setupSearchEngine;
- (void)fetchDataWithCompletion:(id /* block */)a0;
- (void)fetchLastestAcqIntimateWithCompletion:(id /* block */)a0;
- (void)fetchRecentFriendWithCompletion:(id /* block */)a0;
- (void)fetchDataWithFilter:(id /* block */)a0 invitedFriends:(id)a1 completion:(id /* block */)a2;
- (id)p_getNotSelfList:(id)a0;
- (void)fetchDataWithFilter:(id /* block */)a0 completion:(id /* block */)a1;
- (void)p_loadExtraInfo;
- (BOOL)isSameUserID:(id)a0 withOtherUserID:(id)a1;
- (void)searchFriend:(id)a0;
- (void)clearSearchResult;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (long long)scene;

@end

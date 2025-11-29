@class NSArray, AFDFamiliarOperationEngine, NSString, NSObject;
@protocol AWEContactLocalSearchManagerProtocol, AFDSearchUserManagerProtocol;

@interface AFDFriendsListSearchManager : NSObject

@property (retain, nonatomic) NSObject<AWEContactLocalSearchManagerProtocol> *searchFriendsManager;
@property (retain, nonatomic) NSObject<AWEContactLocalSearchManagerProtocol> *searchFollowManager;
@property (retain, nonatomic) AFDFamiliarOperationEngine *searchFollowEngine;
@property (retain, nonatomic) NSObject<AFDSearchUserManagerProtocol> *verticalSearchManager;
@property (retain, nonatomic) AFDFamiliarOperationEngine *verticalSearchEngine;
@property (copy, nonatomic) NSArray *searchResultUsers;
@property (nonatomic) BOOL hasPhoneNumResult;
@property (nonatomic) BOOL isSearching;
@property (retain, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ fetchFriendIDsSetBlock;

- (id)searchKeyword;
- (void)updateFamiliarFriends:(id)a0;
- (void)searchUserWithKeyword:(id)a0 withCompletion:(id /* block */)a1;
- (long long)indexInSearchResultUsersForUserID:(id)a0;
- (void)removeSearchResultUsersAtIndex:(long long)a0;
- (void)remoteFetchVerticalSearchDataWithCompletion:(id /* block */)a0;
- (void)localFetchFollowerDataWithCompletion:(id /* block */)a0;
- (void)trackSearchResultCompleteWithLocal:(BOOL)a0 keyword:(id)a1 resultNum:(unsigned long long)a2;
- (void)p_searchFollowUserWithKeyword:(id)a0 withCompletion:(id /* block */)a1;
- (id)p_localFriendIDsSetWithLocalResult:(id)a0 operation:(id)a1;
- (void)p_handleVerticalSearchResultWithOperation:(id)a0 context:(id)a1;
- (void)p_addSearchResultUsersWithIMUsers:(id)a0;
- (void)p_handleFollowSearchResultWithOperation:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end

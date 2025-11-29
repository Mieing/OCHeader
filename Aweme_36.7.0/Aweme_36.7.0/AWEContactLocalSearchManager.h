@class NSArray, NSString, NSMutableArray;
@protocol IESIMSearchEngineProtocol;

@interface AWEContactLocalSearchManager : NSObject <AWEUserMessage, AWEContactLocalSearchManagerProtocol>

@property (retain, nonatomic) NSArray *contactUsers;
@property (retain, nonatomic) id<IESIMSearchEngineProtocol> searchEngine;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) unsigned long long searchType;
@property (retain, nonatomic) NSMutableArray *searchResultUsers;
@property (copy, nonatomic) id /* block */ searchCompletion;
@property (copy, nonatomic) id /* block */ fetchFriendIDsSetBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)p_setupSearchEngine;
- (void)searchUserWithKeyword:(id)a0;
- (void)updateFamiliarFriends:(id)a0;
- (id)handleRangeTypePriorityWithUsers:(id)a0 friendIDsSet:(id)a1 keyword:(id)a2 operation:(id)a3;
- (id)initWithFriends;
- (id)initWithFans;
- (void)p_setupContactUsers:(BOOL)a0;
- (void)p_setupFriendsUsers;
- (void)p_setupFans;
- (void)p_setupFamiliarFriendsUsers:(id)a0;
- (id)searchUserRangeTypePriority;
- (BOOL)judgeRangeWithUser:(id)a0 keyword:(id)a1 type:(unsigned long long)a2;
- (id)filterSelf:(id)a0;
- (void)__updateDataSource;
- (void)updateFansRemarkName:(id)a0;
- (void)updateFansFollowStatus:(id)a0 status:(long long)a1 error:(id)a2;
- (void)deleteFans:(id)a0;
- (void)updateFans:(id)a0;
- (void)updateFamiliarUsers:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

@class NSArray, NSDictionary, NSString, NSObject;
@protocol AWEContactLocalSearchManagerProtocol;

@interface AWEFollowListSearchViewModel : AWEFollowUserListBaseSectionViewModel <AWEUserMessage>

@property (copy, nonatomic) NSDictionary *trackerParam;
@property (retain, nonatomic) NSObject<AWEContactLocalSearchManagerProtocol> *searchManager;
@property (nonatomic) long long loadMoreCursor;
@property (nonatomic) BOOL hasLoadMoreSearch;
@property (retain, nonatomic) NSArray *searchResult;
@property (nonatomic) BOOL firstLoadFinished;
@property (nonatomic) BOOL needsRefreshSearch;
@property (nonatomic) BOOL searching;
@property (copy, nonatomic) NSString *searchText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishTopFollowingUser:(id)a0 status:(long long)a1;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)unfollowUser:(id)a0;
- (void)syncModelFollowStatus:(id)a0 status:(long long)a1;
- (void)onClickUnFollowUserOnProfileMenu:(id)a0 trackerParam:(id)a1;
- (void)syncModelFollowerStatus:(id)a0;
- (void)setupSearch;
- (void).cxx_destruct;
- (void)addObserver;
- (void)dealloc;

@end

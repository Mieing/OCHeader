@class NSString, NSMutableArray, AWEFollowListRecommendCardDataController;

@interface AWEFollowListRecommendCardViewModel : AWEBaseListSectionViewModel <AWEUserMessage>

@property (retain, nonatomic) AWEFollowListRecommendCardDataController *dataController;
@property (retain, nonatomic) NSMutableArray *cardModels;
@property (nonatomic) BOOL didClickCancelSectionButton;
@property (nonatomic) BOOL didRecommendCardNeedRefreshUI;
@property (nonatomic) BOOL isInitFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didReceiveFollowUserResponse:(id)a0 context:(id)a1 error:(id)a2;
- (void)fetchSectionData;
- (void)followUser:(id)a0 completion:(id /* block */)a1;
- (void)unfollowUser:(id)a0 completion:(id /* block */)a1;
- (void)loadMoreSectionData;
- (void)dislikeRecommendUserWithUid:(id)a0;
- (id)relationContextForUser:(id)a0;
- (void)setUpRecommendCardViewModel;
- (void)fetchListData:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addObserver;
- (void)dealloc;

@end

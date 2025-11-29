@class NSString, AWEFollowListPageContext, AWETabContainerSectionViewModel, AWESocialRelationObserver;

@interface AWEFollowListContainerViewModel : AWEBaseListViewModel <AWEUserMessage>

@property (retain, nonatomic) AWETabContainerSectionViewModel *tabBarViewModel;
@property (retain, nonatomic) AWEFollowListPageContext *pageContext;
@property (nonatomic) long long enterScene;
@property (retain, nonatomic) AWESocialRelationObserver *friendCountObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)fetchListData;
- (void)configPageContext:(id)a0;
- (void)updateEnterScene:(long long)a0;
- (void)blockUserWithType:(unsigned long long)a0;
- (void)updateMateCount:(long long)a0;
- (void)updateFriendCount:(long long)a0;
- (id)tabbarModels;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

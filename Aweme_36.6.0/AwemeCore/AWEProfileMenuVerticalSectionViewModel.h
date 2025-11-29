@class NSString, AWEUserModel, NSDictionary;

@interface AWEProfileMenuVerticalSectionViewModel : AWEBaseListSectionViewModel <AWEProfileMenuSectionViewModelProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL shouldShowMateFooter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeMateWithShowMethod:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)tappedTAIsFriend:(BOOL)a0 showMethod:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)tappedHideMyPost:(BOOL)a0 showMethod:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)tappedHideHerPost:(BOOL)a0 showMethod:(unsigned long long)a1 completion:(id /* block */)a2;
- (id /* block */)tappedUnfollowShowMethod:(unsigned long long)a0 actionBlock:(id /* block */)a1;
- (void)tappedMarkToBeCloseFriend:(BOOL)a0 showMethod:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)tappedNotShow24Story:(BOOL)a0 showMethod:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)tappedNotSee24Story:(BOOL)a0 showMethod:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)tappedTAIsCloseFriendWithShowMethod:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)tappedSpecialFollowList:(BOOL)a0 showMethod:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)tappedUnsubscribeTAGoodsService:(BOOL)a0 showMethod:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)tappedPOIUnsubscribeTAGoodsService:(BOOL)a0 showMethod:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)tappedTopFollowList:(BOOL)a0 showMethod:(unsigned long long)a1 completion:(id /* block */)a2;
- (id /* block */)tappedRemoveFansShowMethod:(unsigned long long)a0 actionBlock:(id /* block */)a1 parentViewModel:(id)a2;
- (id /* block */)tappedSetGroupShowMethod:(unsigned long long)a0 actionBlock:(id /* block */)a1;
- (void)trackCloseFriendsWithType:(long long)a0 enterFrom:(id)a1;
- (void)__trackWithTrackEvent:(id)a0 enterMethod:(id)a1 extraParams:(id)a2;
- (id)__configHideMyPostDescription;
- (void)__hideMyPostFromUser:(id)a0 completion:(id /* block */)a1;
- (void)__showMyPostToUser:(id)a0 completion:(id /* block */)a1;
- (id)__configHideHerPostDescription;
- (void)__hideHerPostUser:(id)a0 completion:(id /* block */)a1;
- (void)__unhideHerPostUser:(id)a0 completion:(id /* block */)a1;
- (id /* block */)p_tappedUnfollowShowMethod:(unsigned long long)a0 actionBlock:(id /* block */)a1;
- (void)__trackTAIsFriendEventWithTrackType:(unsigned long long)a0 enterMethod:(id)a1;
- (void)__markFriendsWithUser:(id)a0 requestType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)__topFollowListForUser:(id)a0 enterFrom:(id)a1 completion:(id /* block */)a2;
- (void)__untopFollowListForUser:(id)a0 enterFrom:(id)a1 completion:(id /* block */)a2;
- (id /* block */)tappedRemoveFansShowMethod:(unsigned long long)a0 actionBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end

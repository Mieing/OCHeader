@class NSString;

@interface AFDSocialInteractionService : HTSService <AFDSocialInteractionService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)makePlayInteractionTagsElementViewModelFriendsAmbassador;
- (id)makePlayInteractionTagsElementFriendsAmbassador;
- (id)makePlayInteractionLikeElementFriendsAmbassador;
- (Class)feedRelationViewClass;
- (id)familiarPlayInteractionTagsContainerView;
- (id)createSimilarChallengeListViewControllerWithViewModel:(id)a0;
- (id)createSimilarChallengeListViewModel;
- (Class)challengeDetailHorizontalSimilarSectionControllerClass;
- (id)createHorizontalSimilarChallengeViewModel;
- (Class)inviteFriendHelper;
- (Class)feedViewedViewBarContextClass;
- (id)feedViewedViewBarContext;
- (Class)feedViewedViewBarControllerClass;
- (BOOL)isTryingToShowVideoAnalysisPanelForBarController:(id)a0;
- (BOOL)shouldUseStory25InteractionWithAweme:(id)a0;
- (Class)diverseDiggBottomBarContextClass;
- (id)diverseDiggBottomBarContext;
- (void)toggleFavoriteOnLongPressWithAweme:(id)a0 referString:(id)a1 logExtraDict:(id)a2;
- (void)downloadAwemeOnLongPressWithAweme:(id)a0 referString:(id)a1 logExtraDict:(id)a2;
- (void)downloadAwemeOnLongPressWithAweme:(id)a0 referString:(id)a1 logExtraDict:(id)a2 progressBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (Class)playerInteractiveCheckManagerClass;
- (void)downloadAwemeOnLongPressWithAweme:(id)a0 referString:(id)a1;

@end

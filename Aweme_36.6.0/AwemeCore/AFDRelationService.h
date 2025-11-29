@class NSString;

@interface AFDRelationService : HTSService <AFDRelationService, AWEDigitalWellbeingMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (BOOL)isBusinessAccount;
- (id)feedUnfollowFamiliarFollowAndDislikeHelper;
- (Class)feedUnfollowFamiliarFollowAndDislikeHelperClass;
- (Class)familiarRelationViewClass;
- (id)createFamiliarRelationViewWithStyle:(long long)a0;
- (BOOL)userHasReachedThousandFans;
- (BOOL)enableMixFansNotice;
- (BOOL)enableShowFriendListInMixFansNotice;
- (BOOL)InABTestOfSeparateAddFriendsAndFansNotice;
- (BOOL)enableSeparateAddFriendsAndFansNotice;
- (BOOL)canShowFeedLoginGuide:(id)a0 currentLoopTimes:(long long)a1;
- (id)feedLoginGuideManager;
- (id)followRequestManager;
- (Class)followRequestManagerClass;
- (id)profileEditFlowManager;
- (Class)greetHelper;
- (id)greetAlertWithUser:(id)a0 trackParams:(id)a1;
- (id)albumViewControllerWithInputData:(id)a0;
- (id)timorNameWithType:(long long)a0;
- (id)userNameWithUser:(id)a0;
- (id)userAliasWithUser:(id)a0;
- (Class)wechatFriendsShareChannel;
- (Class)contactFriendsShareChannel;
- (BOOL)isMobileSearch:(id)a0;
- (BOOL)enableSearchByMobileSetting;
- (BOOL)enableSearchOtherByMobileSug;
- (void)approve:(id)a0 trackParams:(id)a1 completion:(id /* block */)a2;
- (Class)profileEditAlertManagerClass;
- (id)feedUnfollowFamiliarManager;
- (id)avatarService;
- (id)customMorePopoverSheetControllerContext;
- (id)customMorePopoverSheetController;
- (long long)getRelationTypeWithUser:(id)a0;
- (id)socialFriendTypeConveretToString:(long long)a0;
- (BOOL)isUnfollowFamiliarTagRefactorEnable;
- (BOOL)shouldShowUnfollowFamiliarTagWithModel:(id)a0;
- (id)unfollowFamiliarRecommendReason:(id)a0;
- (id)unfollowFamiliarLocalRecommendReason:(id)a0;
- (id)mateRecommendReason:(id)a0;
- (void)updateLocalDataTableWithProfileUser:(id)a0;
- (id)familiarFriendsDataProvider;
- (BOOL)isMomentDegradeBusinessAccount;
- (BOOL)needSocialShareInfo:(unsigned long long)a0;
- (id)socialShareInfo:(id)a0;
- (id)socialUserShareParams:(id)a0 user:(id)a1;
- (id)socialAwemeShareParams:(id)a0 aweme:(id)a1;
- (id)shareSocialParams:(id)a0 user:(id)a1 aweme:(id)a2;
- (id)trackTokenFindSocialParams:(id)a0 needKeepAll:(BOOL)a1;
- (Class)shareRecommendSnackBarUtilsClass;
- (long long)userReachedFansCount;
- (id)mateFamiliarRecommendReason:(id)a0;
- (id)init;
- (void)dealloc;

@end

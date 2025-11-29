@class NSString;

@interface AWEUserRecommendModuleService : HTSService <AWEUserRecommendModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)followButtonTitleWithUser:(id)a0 scene:(id)a1;
+ (id)followButtonTitleWithFollowStatus:(long long)a0 followerStatus:(long long)a1 scene:(id)a2;
+ (Class)aAWEUserRecommendModuleServiceDOUYINLiteAdaperClass;
+ (Class)aAWEUserRecommendModuleServiceCommonAdapterClass;
+ (Class)aAWEUserRecommendModuleServiceDOUYINAdaperClass;
+ (Class)aAWEUserRecommendModuleServiceDOUYINHTSAdaperClass;
+ (Class)aAWEUserRecommendModuleServiceDOUYINCIAdaperClass;

- (id)userRecommendDataControllerWithType:(long long)a0;
- (Class)recommendPersonTrackManagerClass;
- (void)transferToRadar:(id)a0 enterMethod:(id)a1;
- (BOOL)hasOpenRadar;
- (BOOL)canShowFaceToFaceSharePanelEntry:(id)a0;
- (id)radarEnterFromForCurrentPage;
- (Class)followPrivateAccountClass;
- (void)feedUserRecommendViewController:(id)a0 configureWithModel:(id)a1;
- (id)familiarPopupManager;
- (id)fansSearchManager;
- (BOOL)enableFansSearch;
- (id)possibleFriendTextWithScene:(long long)a0;
- (BOOL)canShowFamiliarPopupInLite;
- (BOOL)isSocialPersonalRecommendSwitchOn;
- (BOOL)enableShowNumericalDot;
- (id)cardTrackManager;
- (BOOL)isInLite;
- (id)bpeaCertWithScene:(unsigned long long)a0;
- (id)userActionRevertManager;
- (id)friendsTabNewRecommendManager;
- (Class)userButtonStateMachineHelper;
- (void)customTransitionWithInfo:(id)a0 description:(id)a1 needUploadLoaction:(BOOL)a2;
- (void)setHasOpenRadar:(BOOL)a0;
- (id)cardControllerClassesNeedRegisterWithFeedType:(long long)a0;
- (Class)findFriendsVerticalFunctionListSectionControllerClass;
- (Class)findFriendsQRCodeSectionControllerClass;
- (id)findFriendsVerticalFunctionListSectionViewModel:(id)a0;
- (id)ABTestRangeDBManager;
- (id)inviteFriendManager;
- (id)userRecommendViewControllerWithContext:(id)a0;
- (id)aweInviteFriendManager;
- (Class)userRecommendBPEACert;
- (Class)aweUserRecommendViewControllerClass;
- (id)shareTokenViewControllerWithConfiguration:(id)a0;
- (id)userInfoButtonsView;
- (Class)userInfoButtonsViewClass;
- (id)emptyRecommendViewControllerWithUserID:(id)a0 type:(long long)a1 extraDict:(id)a2;
- (id)inviteRecommendViewControllerWithInviteType:(unsigned long long)a0 recommendType:(long long)a1 userID:(id)a2 enterFrom:(id)a3 previousPage:(id)a4;
- (id)feedRecommendManager;
- (id)listCellActionButtonWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)findFriendsDotManager;
- (Class)myProfileRecommendManager;
- (id)newRecommendCountManager;
- (id)shareReflowManager;
- (id)userRecommendPushManager;
- (id)socialItemDataSourceWithContext:(id)a0;
- (id)radarNearbyItemListViewController;
- (id)findFriendsQRCodeSectionViewModel;
- (id)findFriendsViewControllerWithContext:(id)a0;
- (id)aAWEUserRecommendModuleServiceDOUYINLiteAdaper;
- (id)aAWEUserRecommendModuleServiceCommonAdapter;
- (id)aAWEUserRecommendModuleServiceDOUYINAdaper;
- (id)aAWEUserRecommendModuleServiceDOUYINHTSAdaper;
- (id)aAWEUserRecommendModuleServiceDOUYINCIAdaper;

@end

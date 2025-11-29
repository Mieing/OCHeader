@class NSString;

@interface IESIMUserProfileService : HTSService <IESIMUserProfileService, AWEUserDetailViewControllerMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShowDoubleCheckBlockViewWithUser:(id)a0;
- (void)showDoubleCheckBlockViewWithUser:(id)a0 enterFrom:(id)a1;
- (void)showDoubleCheckUnfollowViewWithUser:(id)a0 params:(id)a1 unfollowConfirmationBlock:(id /* block */)a2;
- (Class)aweUserDetailViewControllerClass;
- (id)nameOfAWERelationFollowedNotification;
- (id)nameOfAWERelationUnFollowedNotification;
- (id)keyOfAWEShareMyLikeContextChangeToMessageModeAfterSend;
- (id)userProfileVCWitUserId:(id)a0 secUserId:(id)a1 params:(id)a2 userReadScene:(long long)a3;
- (void)fetchUserProfileInfoWithUserID:(id)a0 completion:(id /* block */)a1;
- (void)transferAwePersonalTagList:(id)a0 toIM:(id)a1;
- (void)transferIMPersonalTagList:(id)a0 toAweUser:(id)a1;
- (void)showPrivacyNoticeOnViewController:(id)a0 guideType:(long long)a1 dismissBlock:(id /* block */)a2 imageView:(id)a3 rightButtonClickedBlock:(id /* block */)a4 enterFrom:(id)a5 useCardUIStyle:(BOOL)a6;
- (void)userDetailViewControllerLastUserStatus:(id)a0;
- (void)userDetailViewControllerDeallocNotify:(id)a0 paramDict:(id)a1;
- (id)p_userProfileUrlWithUserId:(id)a0 secUserId:(id)a1 params:(id)a2;
- (id)init;
- (void)dealloc;

@end

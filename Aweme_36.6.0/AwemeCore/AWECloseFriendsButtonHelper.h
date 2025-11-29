@class NSString;

@interface AWECloseFriendsButtonHelper : HTSService <AWECloseFriendsButtonHelper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAFDServiceDOUYINDSAdapterClass;

- (id)aAFDServiceDOUYINDSAdapter;
- (void)didTapIMAcceptButtonWithUserID:(id)a0 completion:(id /* block */)a1;
- (void)didRecallIMInviteCardWithUserID:(id)a0 completion:(id /* block */)a1;
- (BOOL)canOpenCloseFriendsListPanel;
- (BOOL)profileMenuShouldShowAddButtonWithType:(long long)a0;
- (id)profileMenuAddButtonTitle;
- (id)profileMenuButtonSelectTitleWithType:(long long)a0;
- (id)profileMenuRemoveButtonTitle;
- (BOOL)p_splitMateAndFollow;
- (struct CGSize { double x0; double x1; })p_autoSize:(double)a0;
- (void)configureProfileRelationView:(id)a0 context:(id)a1;
- (id)profileMenuAddButtonImage;
- (id)profileMenuRemoveButtonImage;
- (void)didTapProfileMenuButtonWithType:(long long)a0 userID:(id)a1 completion:(id /* block */)a2;
- (void)didTapSettingsPanelChooseButtonWithSelectedUids:(id)a0 completion:(id /* block */)a1;
- (void)didTapSettingsPanelCloseFriendsButtonWithType:(long long)a0 userID:(id)a1 completion:(id /* block */)a2;
- (BOOL)canShowCloseFriendsEntryInProfileMenuWithUser:(id)a0 oldRelationCanShow:(BOOL)a1;
- (id)p_profileCloseFriendsState:(id)a0 context:(id)a1;
- (id)p_transitionToCloseFriends:(id)a0 context:(id)a1;

@end

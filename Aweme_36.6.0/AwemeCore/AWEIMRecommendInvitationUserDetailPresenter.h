@class NSString;

@interface AWEIMRecommendInvitationUserDetailPresenter : AWEIMUIViewPresenter <AWEIMRecommendInvitationUserDetailViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createViewWithContext:(id)a0;
- (void)updateView:(id)a0 withContext:(id)a1;
- (void)recommendUserDetailView:(id)a0 selectedUserChanged:(id)a1;

@end

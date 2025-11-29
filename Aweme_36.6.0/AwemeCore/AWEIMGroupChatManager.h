@class NSString;

@interface AWEIMGroupChatManager : HTSService <IESIMGroupChatManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addGroupCatagoryToTrackParams:(id)a0 withConversation:(id)a1;
- (void)trackCreateGroupEvent:(id)a0 params:(id)a1 result:(id)a2;
- (id)createGroupWithContext:(id)a0 completionContext:(id)a1;
- (id)createGroupWithContext:(id)a0;
- (void)handleInviteGroupCardWithConversationID:(id)a0 andCheckDict:(id)a1;
- (void)handleInviteGroupToastWithCheckDict:(id)a0;
- (void)transferToCreateGroupVCV2WithContext:(id)a0 completion:(id /* block */)a1;
- (id)generateCreateGroupControllerWithContext:(id)a0;
- (id)generateCreateGroupPanelViewControllerV2WithContext:(id)a0;
- (BOOL)canCreateServiceBusinessGroup;
- (id)joinGroupWithContext:(id)a0;
- (BOOL)canCreatePublicGroup;
- (void)showErrorToastWithResult:(id)a0;
- (id)transferToConversationIfNeeded:(id)a0 withCreationCompletionContext:(id)a1;
- (void)showSendInviteCardTipsIfNeededWithConversationID:(id)a0 groupCreateResult:(id)a1;
- (void)syncMessageIfNeededWithConversation:(id)a0 creationCompletionContext:(id)a1;
- (void)__addTrackInfoToBizDict:(id)a0 withContext:(id)a1;
- (void)__trackCreateGroupWithBizDict:(id)a0 duration:(double)a1 convId:(id)a2 response:(id)a3 error:(id)a4 context:(id)a5;
- (void)__trackCreateGroupQosStartIfNeededWithContext:(id)a0;
- (void)__addTrackInfoToBizDict:(id)a0 withJoinContext:(id)a1;
- (void)__trackJoinGroupWithBizDict:(id)a0 convId:(id)a1 duration:(double)a2 passThroughParams:(id)a3 response:(id)a4 error:(id)a5;
- (id)__listViewControllerPresenterWithContext:(id)a0;
- (BOOL)p_fullPanelABEnable;
- (void)trackIncentiveRecommendCreateGroupPanelShowWithContext:(id)a0;
- (id)__isSuccessWithResponse:(id)a0 error:(id)a1;

@end

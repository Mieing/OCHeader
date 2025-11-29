@class RxTwoTuple, NSString;

@interface AWEIMModuleServiceGroupChat : HTSService <HTSService, AWEIMGroupChatPanelControllerDelegate, AWEIMModuleServiceGroupChat>

@property (copy, nonatomic) id /* block */ showIncentiveChatGroupPanelCompletion;
@property (retain, nonatomic) RxTwoTuple *enterPersonalDetailFromAndMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)createConversationWithOtherParticipants:(id)a0 type:(unsigned long long)a1 bizExtension:(id)a2 completion:(id /* block */)a3;
- (void)joinConversation:(id)a0 shortId:(long long)a1 bizExtension:(id)a2 completion:(id /* block */)a3;
- (BOOL)shouldShowIndentityVerifyForCheckMessage:(id)a0;
- (id)tikMonitor;
- (id)groupChatJoinPanelViewModelWithParamDict:(id)a0;
- (id)createGroupInviteCardViewControllerWithParamDict:(id)a0;
- (void)observeEventEnterPersonalDetail;
- (id)eventEnterPersonalDetailFromAndMethod;
- (void)enterInviteWechatCommandWithConfig:(id)a0;
- (void)enterInviteWechatCreateGroupLinkWithConfig:(id)a0;
- (void)presentMixVCWithModel:(id)a0 extraParams:(id)a1;
- (void)didCreateGroupWithResult:(id)a0;
- (void).cxx_destruct;

@end

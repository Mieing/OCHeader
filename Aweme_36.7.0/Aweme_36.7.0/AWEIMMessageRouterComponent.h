@class NSString, AWEIMEditGroupAvatarViewModel;

@interface AWEIMMessageRouterComponent : AWEIMComponentBase <AWEIMMessageRouterComponentInterface, AWEIMBaseMessageVCActionProtocol>

@property (retain, nonatomic) AWEIMEditGroupAvatarViewModel *editGroupAvtarVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_willDealloc;
- (void)componentDidMounted:(id)a0;
- (BOOL)isSuccessfulHandleTappedTemplateModel:(id)a0 message:(id)a1 requestScene:(id)a2;
- (BOOL)isSuccessfulHandleTappedTemplateModel:(id)a0 cell:(id)a1 message:(id)a2 requestScene:(id)a3;
- (void)showCloseFriendsMomentDetailWithItemID:(id)a0 itemAuthorUID:(id)a1;
- (void)showStory25WithItemID:(id)a0 itemAuthorUID:(id)a1;
- (void)showDetailWithCell:(id)a0 extraParams:(id)a1;
- (void)showMessageDetailWithMessage:(id)a0 cell:(id)a1 requestScene:(id)a2;
- (void)didTapNewAwemeTipCell:(id)a0;
- (id)cellWithClickedTemplate:(id)a0;
- (void)transferToEditGroupAvatarPage:(id)a0;
- (void)transferToGroupDetailPage:(id)a0 enterMethod:(id)a1 enterFrom:(id)a2;
- (void)transferToSendRedPacketPageForConversationId:(id)a0 redPacketSource:(long long)a1;
- (void)transferToSearchResultDetailForConversationId:(id)a0;
- (void)configInputVCMilestoneContentWithInfo:(id)a0 conversationId:(id)a1;
- (void)p_processTransferToProfileTemplate:(id)a0;
- (id)cardLevelWithClickedTemplateModel:(id)a0;
- (void)p_processTransferToAwemeTemplate:(id)a0 cell:(id)a1 requestScene:(id)a2;
- (void)__transferToEditGroupAvatarPage;
- (void)p_tranferToGroupDetailViewControllerWithEnterMethod:(id)a0 enterFrom:(id)a1;
- (id)p_getSingleChatDetailViewControllerUrl;
- (void).cxx_destruct;
- (id)conversation;

@end

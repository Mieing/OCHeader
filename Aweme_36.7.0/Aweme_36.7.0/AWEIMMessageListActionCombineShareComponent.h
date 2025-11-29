@class AWEIMActionSheetItemModel, NSString;

@interface AWEIMMessageListActionCombineShareComponent : AWEIMComponentBase <AWEIMMessageListActionCombineShareInterface>

@property (retain, nonatomic) AWEIMActionSheetItemModel *shareItemModel;
@property (retain, nonatomic) NSString *accessoryText;
@property (nonatomic) BOOL needCreateGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)addNotification;
- (void)handleCloseContactVCNotification:(id)a0;
- (BOOL)p_enableAllowMemberInviteWithConversation:(id)a0;
- (void)transferToCombineMsgListWithMessage:(id)a0;
- (void)transfertToCombineMsgListWithServerMessageId:(long long)a0;
- (void)messageCell:(id)a0 showMessageDetailWithMessage:(id)a1 requestScene:(id)a2;
- (void)showQuotedCombineShareMessageDetail:(id)a0;
- (void)p_onShareItemTapped;
- (BOOL)isAllowedShareGroupInfoModel;
- (id)p_buildGroupInfoDict;
- (id)p_getCombineShareMessageTitle:(id)a0;
- (void)openSharePanelAndSendMsg:(id)a0 service:(id)a1;
- (BOOL)canShowMessageSenderInTitle:(id)a0;
- (void)trackPublishAtFriendMessageClick:(id)a0;
- (void)shareWithMessage:(id)a0 shareModels:(id)a1 conversation:(id)a2 cachedSecurityCheckContext:(id)a3 accessoryText:(id)a4 completion:(id /* block */)a5;
- (void)openSendSharePanelWithResultCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)conversation;

@end

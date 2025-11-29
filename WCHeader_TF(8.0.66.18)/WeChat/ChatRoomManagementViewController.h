@class NSString, CContact, ChangeOwnerLogic, MMTableViewInfo, ChatRoomUpgradeOpenIMLogic, ChatRoomAdminSettingLogic;
@protocol ChatRoomManagementDelegate;

@interface ChatRoomManagementViewController : MMUIViewController <ChatRoomUpgradeOpenIMLogicDelegate, MMNewTipsMgrExt, WCActionSheetDelegate, MMTableViewInfoDelegate, ChangeOwnerLogicDelegate, ChatRoomAdminSettingLogicDelegate, IContactMgrExt, IGroupMgrExt> {
    MMTableViewInfo *m_tableViewInfo;
    ChangeOwnerLogic *m_changeOwnerLogic;
    ChatRoomAdminSettingLogic *m_chatRoomAdminSettingLogic;
    BOOL m_islodingForGetContact;
    BOOL m_isChangecRoomQRCodeAccessType;
    ChatRoomUpgradeOpenIMLogic *m_chatRoomUpgradeOpenIMLogic;
}

@property (nonatomic) BOOL waitingDismissGroupResp;
@property (retain, nonatomic) CContact *m_chatRoomContact;
@property (weak, nonatomic) id<ChatRoomManagementDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reGetQRCodeAccessTypeSyn;
- (void)addJoinChatRoomQRCodeSection;
- (void)addJoinChatRoomAllowOwnerApproveCellAtSection:(id)a0;
- (id)getChatRoomInvitationCellTitle;
- (void)onModifyContactInExpand:(id)a0;
- (BOOL)checkIsNewChatRoomManagementType;
- (void)switchJoinChatRoomQRCode:(id)a0;
- (void)viewDidLoad;
- (void)checkNeedForcedUpdateForInfoDetail;
- (void)viewWillAppear:(BOOL)a0;
- (void)initData;
- (void)initTableView;
- (void)reloadTableData;
- (void)switchAllowOwnerApprove:(id)a0;
- (void)showChatRoomUpgradeOpenIM;
- (BOOL)shouldRestrictContentViewSize;
- (void)switchOnlyAdminModTopic:(id)a0;
- (void)OnSetChatRoomOnlyAdminModTopic:(id)a0 on:(BOOL)a1 ErrorInfo:(id)a2 Success:(BOOL)a3;
- (void)showDismissChatRoomView;
- (void)dismissChatRoom;
- (void)OnDismissChatRoom:(id)a0 Success:(BOOL)a1 ErrorMsg:(id)a2 Ret:(long long)a3;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)showChangeOwnerView;
- (void)showChangeManagerView;
- (void)onChangeOwnerLogicStop:(BOOL)a0;
- (void)OnReturn;
- (void)didReceiveMemoryWarning;
- (id)getViewController;
- (void)checkAdmin;
- (void)showChatroomInvitationList;
- (void)onModifyContact:(id)a0;
- (void)OnChangeGroupAdmin:(id)a0;
- (void)OnSetChatRoomAccessType:(id)a0 Type:(unsigned int)a1 ErrorInfo:(id)a2 Success:(BOOL)a3;
- (void)onTipsShowInfoChangeWithPathKey:(id)a0;
- (void)reportDismissChatroomWithAction:(unsigned long long)a0;
- (void)reportDismissChatroomWithAction:(unsigned long long)a0 errCode:(long long)a1;
- (void).cxx_destruct;

@end

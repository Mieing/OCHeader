@class NSString, ChatRoomSpecialAttentionAddMemberLogic, MMTableViewInfo, NSMutableArray, MMAcceptAgreementCommonHeadView, CContact, MMTableView, ChatRoomSpecialAttentionDeleteMemberLogic;

@interface ChatRoomSpecialAttentionMemberViewController : ChatRoomBaseMemberFunctionViewController <ChatRoomSpecialAttentionMemberPageLogicDelegate> {
    NSMutableArray *m_attentionMemberContactList;
    NSMutableArray *m_chatRoomMemContactList;
    ChatRoomSpecialAttentionAddMemberLogic *m_addMemberSelectContactLogic;
    ChatRoomSpecialAttentionDeleteMemberLogic *m_deleteMemberSelectContactLogic;
    MMTableView *m_tableView;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    NSMutableArray *m_initialAttentionMemberUserNameList;
    NSMutableArray *m_chatRoomMemContactUserNameList;
    MMTableViewInfo *m_tableViewInfo;
}

@property (retain, nonatomic) CContact *chatRoomContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)initData;
- (id)getAddMemberSelectContactLogic;
- (id)getDeleteMemberSelectContactLogic;
- (void)reloadData;
- (id)getChatRoomContact;
- (void)reloadTableData;
- (void)didFunctionAddMember;
- (void)modifySpecialAttentionMember;
- (void)didRemoveOperateButton:(id)a0;
- (void)reportChatRoomSpecialAttentionMemberLog;
- (void)OnModifyChatRoomSpecialAttentionMember:(id)a0 withResult:(unsigned int)a1 isAddMember:(BOOL)a2;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)a0;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)a0;
- (id)m_tableView;
- (void)setM_tableView:(id)a0;
- (void).cxx_destruct;

@end

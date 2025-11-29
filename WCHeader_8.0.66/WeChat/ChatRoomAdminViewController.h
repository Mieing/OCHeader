@class ChatRoomAdminMgrLogic, NSString, DelAdminLogic, NSArray, MMTableViewInfo, MMAcceptAgreementCommonHeadView, CContact, AddAdminLogic, MMTableView;

@interface ChatRoomAdminViewController : ChatRoomBaseMemberFunctionViewController <DelAdminLogicDelegate, AddAdminLogicDelegate, ChatRoomAdminMgrLogicDelegate> {
    BOOL m_needReload;
    ChatRoomAdminMgrLogic *m_adminMgrLogic;
    AddAdminLogic *m_addAdminLogic;
    DelAdminLogic *m_delAdminLogic;
    NSArray *m_arrAdminUserName;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
}

@property (retain, nonatomic) CContact *m_chatRoomContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initData;
- (void)viewDidAppear:(BOOL)a0;
- (id)getArrMemberList;
- (id)getChatRoomContact;
- (BOOL)isShowDeleteButton;
- (void)reloadTableData;
- (void)didFunctionAddMember;
- (void)didAddMember;
- (void)didRemoveOperateButton:(id)a0;
- (void)didClickLeftCloseBarButton;
- (void)onAddAdminLogicStop:(BOOL)a0;
- (id)getViewController;
- (void)onDelAdminLogicStop:(BOOL)a0;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)a0;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)a0;
- (id)m_tableView;
- (void)setM_tableView:(id)a0;
- (void).cxx_destruct;

@end

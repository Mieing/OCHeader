@class CMessageWrap, NSString, MMTableViewInfo, MMHeadImageView, MMUILabel, UIView, ChatRoomInvitationContactProfileLogic, CContact, MMTableView, UILabel;
@protocol ChatRoomInvitationDetailDelegate;

@interface ChatRoomInvitationDetailViewController : MMUIViewController <ILinkEventExt, MMTableViewInfoDelegate, ChatRoomMemberGridViewDelegate, IContactMgrExt, IGroupMgrExt> {
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
    unsigned long long m_nCellCnt;
    unsigned long long m_nCellCol;
    MMHeadImageView *m_headImageView;
    UILabel *m_nickNameView;
    MMUILabel *m_labelSubDesc;
    UILabel *m_inviteNumberView;
    UILabel *m_inviteReasonView;
    UIView *m_seperateLineView;
    CContact *m_inviterContact;
    double _lastScreenWidth;
}

@property (retain, nonatomic) ChatRoomInvitationContactProfileLogic *contactProfileLogic;
@property (retain, nonatomic) CContact *m_chatRoomContact;
@property (retain, nonatomic) CMessageWrap *m_messageWrap;
@property (weak, nonatomic) id<ChatRoomInvitationDetailDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)initData;
- (void)reloadData;
- (void)initView;
- (void)initTableView;
- (void)viewDidLayoutSubviews;
- (void)reloadTableData;
- (id)genHeaderView;
- (id)genFooterView;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)makeMemListSection:(id)a0;
- (double)getMemListCellHeight;
- (void)makeMemListCell:(id)a0 CellInfo:(id)a1;
- (void)makeWhiteCell:(id)a0 CellInfo:(id)a1;
- (void)openContactInfo:(id)a0;
- (void)onModifyContact:(id)a0;
- (void)OnClickHeadImage;
- (void)approveMemberFromOwner;
- (void)OnApproveChatRoomInvitation:(id)a0 ErrorInfo:(id)a1 Success:(BOOL)a2 withUserData:(id)a3;
- (void)approveInvitation;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)reportApproveChatRoomInvitationWithActionType:(long long)a0;
- (void).cxx_destruct;

@end

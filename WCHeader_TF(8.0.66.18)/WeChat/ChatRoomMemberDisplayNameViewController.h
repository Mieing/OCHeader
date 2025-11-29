@class MMUITextField, NSString, CContact, MMHeadImageView, MMTableViewInfo, UIButton;

@interface ChatRoomMemberDisplayNameViewController : MMUIViewController <MMTableViewInfoDelegate, MMUITextFieldDelegate, IOpenImOplogExt, IOplogExt> {
    MMTableViewInfo *m_tableViewInfo;
    MMUITextField *m_tfMemberDisplayName;
    NSString *m_placeholder;
    UIButton *m_acceptBtn;
    double m_fKeyboardHeight;
    MMHeadImageView *m_headImageView;
    NSString *m_initialMemberDisplay;
}

@property (retain, nonatomic) CContact *chatRoomContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)resetRightBarButton;
- (void)initTableView;
- (void)initNotificationObservers;
- (void)removeNotificationObservers;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)reloadTableViewInfo;
- (id)getChatRoomInfoHeadView;
- (void)makeMemberDisplayNameEdit:(id)a0;
- (void)initMemberDisplayNameEdit;
- (void)initHeadImageView;
- (void)onMemberDisplayNameShowKeyBoard;
- (void)onMemberDisplayNameHideKeyBoard;
- (void)initAcceptBtn;
- (double)getkeyboardHideAcceptBtnBottom;
- (double)getkeyboardShowAcceptBtnBottom;
- (BOOL)checkEdit;
- (void)didAccept;
- (void)OnReturn;
- (void)checkAcceptBtnBottomLocal;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)restAcceptBtnWithKeyboardWillShow:(BOOL)a0;
- (void)mmTextFieldDidChange:(id)a0;
- (void)executeOplogChatRoomDisplayName:(id)a0;
- (void)onOpenImOplogRet:(int)a0 errMsg:(id)a1 eventID:(unsigned int)a2 cgiWrap:(id)a3;
- (void)oplogRet:(int)a0 errMsg:(id)a1 eventID:(unsigned int)a2 cgiWrap:(id)a3;
- (void)handleOplogRet:(int)a0 errMsg:(id)a1 eventID:(unsigned int)a2 cgiWrap:(id)a3;
- (id)navigationBarBackgroundColor;
- (void).cxx_destruct;

@end

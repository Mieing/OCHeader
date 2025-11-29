@class MMHeadImageView, NSString, CContact, NSMutableDictionary, MMTableViewInfo, MMUITextField, UIButton;

@interface ChatRoomInfoEditViewController : MMUIViewController <IGroupMgrExt, UITextFieldDelegate, MMTableViewInfoDelegate> {
    MMTableViewInfo *m_tableViewInfo;
    NSString *m_nsOriginChatRoomTopic;
    NSMutableDictionary *m_dicParam;
    BOOL m_becomeFirstResponder;
    UIButton *m_acceptBtn;
    double m_fKeyboardHeight;
    MMHeadImageView *m_headImageView;
    MMUITextField *m_topicTextField;
    double m_tableContentHeight;
}

@property (retain, nonatomic) CContact *m_chatRoomContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)createRightBarButton;
- (void)initTableView;
- (void)initNotificationObservers;
- (void)resetData;
- (void)viewDidLayoutSubviews;
- (void)initAcceptBtn;
- (void)initTopicEditView;
- (void)initHeadImageView;
- (void)onTopicShowKeyBoard;
- (void)onTopicHideKeyBoard;
- (void)reloadTableData;
- (void)makeEditCell:(id)a0 CellInfo:(id)a1;
- (id)getChatRoomInfoHeadView;
- (BOOL)isChanged;
- (void)doDismissView;
- (void)OnReturn;
- (void)OnDone;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)restAcceptBtnWithKeyboardWillShow:(BOOL)a0;
- (void)checkNeedReload:(id)a0;
- (void)OnSetChatRoomTopic:(id)a0 ErrorInfo:(id)a1 Success:(BOOL)a2;
- (void)updateChatRoomTopicCount:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (id)navigationBarBackgroundColor;
- (void).cxx_destruct;

@end

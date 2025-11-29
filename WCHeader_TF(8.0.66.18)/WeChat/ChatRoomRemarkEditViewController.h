@class NSString, MMUITextField, MMTableViewInfo, MMHeadImageView, UIButton, RichTextView, CContact, MMUILabel;

@interface ChatRoomRemarkEditViewController : MMUIViewController <MMTableViewInfoDelegate, MMUITextFieldDelegate, ILinkEventExt, IOplogExt> {
    MMTableViewInfo *m_tableViewInfo;
    UIButton *m_acceptBtn;
    double m_fKeyboardHeight;
    RichTextView *m_operateRichTextView;
    MMUILabel *m_nickNameLabel;
    MMHeadImageView *m_headImageView;
}

@property (retain, nonatomic) MMUITextField *m_tfRemark;
@property (retain, nonatomic) CContact *chatRoomContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)resetRightBarButton;
- (void)viewDidLayoutSubviews;
- (void)initTableView;
- (void)initNotificationObservers;
- (void)removeNotificationObservers;
- (void)reloadTableViewInfo;
- (id)getChatRoomInfoHeadView;
- (void)makeRemarkEdit:(id)a0;
- (void)initRemarkEdit;
- (void)initHeadImageView;
- (void)onRemarkShowKeyBoard;
- (void)onRemarkHideKeyBoard;
- (void)initAcceptBtn;
- (void)initFooterView;
- (double)getkeyboardHideAcceptBtnBottom;
- (double)getkeyboardShowAcceptBtnBottom;
- (void)checkAcceptBtnBottomLocal;
- (BOOL)checkEdit;
- (void)didAccept;
- (void)executeOpLog;
- (void)mmTextFieldDidChange:(id)a0;
- (void)oplogRet:(int)a0 errMsg:(id)a1 eventID:(unsigned int)a2 cgiWrap:(id)a3;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)restAcceptBtnWithKeyboardWillShow:(BOOL)a0;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (id)navigationBarBackgroundColor;
- (void).cxx_destruct;

@end

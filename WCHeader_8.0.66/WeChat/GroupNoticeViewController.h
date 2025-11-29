@class NSString, CContact, UIBarButtonItem;

@interface GroupNoticeViewController : WeNoteViewController <WNRTEToolViewDelegate, WNSelectionViewDelegate, IGroupMgrExt, WNTextViewOperationDelegate, IMsgRevokeExt> {
    BOOL m_bTextDidChange;
    double m_defaultFooterHeight;
    UIBarButtonItem *m_undoBarItem;
    UIBarButtonItem *m_redoBarItem;
    UIBarButtonItem *m_doneBarItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CContact *chatRoomContact;
@property (retain, nonatomic) CContact *editorContact;
@property (nonatomic) unsigned int editTime;
@property (nonatomic) int enterScene;
@property (nonatomic) BOOL isHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isDisplay;

- (void)initToolView;
- (id)makeHeader;
- (id)makeFooter;
- (void)onClickChoosePhoto;
- (void)onClickFile;
- (void)onClickLocation;
- (void)onClickTextMore;
- (void)onClickUndo;
- (void)onClickRedo;
- (void)onUndo;
- (void)onRedo;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)dealloc;
- (void)configNavbar;
- (void)initTableView;
- (void)initHeaderAndFooterView;
- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (void)installMinimizationTransitionController;
- (void)updateRightBarBtnStatus;
- (void)saveNote;
- (id)getAlertTitleForType:(unsigned long long)a0;
- (void)checkFooterView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)checkCanTranslateContent;
- (void)setTextViewEditable:(BOOL)a0;
- (void)onCancel;
- (void)onEdit;
- (void)onDone;
- (void)setGroupNotice:(id)a0;
- (void)reportEnterScene;
- (void)checkNeedReload:(id)a0;
- (void)OnReturnToChat;
- (void)OnSetChatRoomDesc:(id)a0 Desc:(id)a1 Error:(id)a2;
- (void)OnGroupNoticeMsgRevoked:(id)a0 n64MsgId:(long long)a1 item:(id)a2;
- (void).cxx_destruct;

@end

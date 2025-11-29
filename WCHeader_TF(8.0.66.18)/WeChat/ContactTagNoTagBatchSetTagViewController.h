@class NSArray, NSString, ContactTagNoTagBatchMaskBottomView, ContactTagNoTagBatchSetEditLogic, UIButton;
@protocol ContactTagNoTagBatchSetTagViewControllerDelegate;

@interface ContactTagNoTagBatchSetTagViewController : TagViewController <IContactLabelMgrExt, NewContactTagTableViewDelegate, ContactTagNoTagBatchSetEditLogicDelegate> {
    BOOL _bIsNeedReloadView;
    BOOL isAlreadyDisMissSelf;
    ContactTagNoTagBatchSetEditLogic *m_editLogic;
    UIButton *m_oMakeSureButton;
}

@property (retain, nonatomic) ContactTagNoTagBatchMaskBottomView *m_bottomView;
@property (nonatomic) unsigned int m_uiFromScene;
@property (nonatomic) BOOL needReloadWhenAppear;
@property (retain, nonatomic) NSArray *m_arrContactUserName;
@property (weak, nonatomic) id<ContactTagNoTagBatchSetTagViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)initData;
- (void)initRegister;
- (void)initView;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)initMakeSureButton;
- (void)changeDisplayView:(BOOL)a0;
- (id)genFavTagEditView;
- (id)genFavTagTableView;
- (void)onTextFieldMoved:(id)a0;
- (void)resetTagEditViewAndTableView;
- (id)getArrSelectTagNameList;
- (void)resetMakeSureButtonenabled;
- (void)OnMyCancel;
- (void)didClickMakeSureButton;
- (void)onCreateNewTagToTagTableView:(id)a0;
- (void)onEditTags;
- (void)onAddButtonFromTagTableView:(id)a0;
- (void)onDeleteButtonFromTagTableView:(id)a0;
- (void)onAddButtonFromTagEditView:(id)a0;
- (void)onDeleteButtonFromTagEditView:(id)a0;
- (id)getAllTagNameList;
- (void)buildAllTagsData:(id)a0;
- (void)reloadAllTags;
- (void)onAllContactLabelUpdated:(id)a0 withRetCode:(int)a1 andEventId:(unsigned int)a2;
- (void)onAddContactLabel:(id)a0 withRetCode:(int)a1 andEventId:(unsigned int)a2;
- (void)onJobForTagEditRet:(int)a0;
- (void)didPopViewController;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)keyboardDidShow:(id)a0;
- (void)keyboardDidHide:(id)a0;
- (void)onKeyboardNotificationWithoutAnimation:(id)a0 isShowKeyboard:(BOOL)a1;
- (void)onKeyboardNotification:(id)a0 isShowKeyboard:(BOOL)a1;
- (void).cxx_destruct;

@end

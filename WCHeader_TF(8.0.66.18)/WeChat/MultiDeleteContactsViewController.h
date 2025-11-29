@class MMTableView, NSString, NSMutableDictionary, MMUIView, NSDictionary, NSMutableArray, CContact, MMUIButton, ContactBatchModifyLogic;
@protocol MultiDeleteContactsViewControllerDelegate;

@interface MultiDeleteContactsViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ContactBatchModifyLogicDelegate, ContactInfoViewControllerDelegate>

@property (retain, nonatomic) NSMutableArray *arrContacts;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMUIView *bottomToolView;
@property (retain, nonatomic) MMUIButton *deleteButton;
@property (retain, nonatomic) NSMutableDictionary *dicSelectedContacts;
@property (retain, nonatomic) ContactBatchModifyLogic *contactBatchModifyLogic;
@property (retain, nonatomic) CContact *viewInfoContact;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDictionary *dicSearchMatchTips;
@property (retain, nonatomic) NSString *searchText;
@property (weak, nonatomic) id<MultiDeleteContactsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportMultiDeleteContactsWithAction:(unsigned long long)a0 query:(id)a1;
+ (void)reportMultiDeleteContactsWithAction:(unsigned long long)a0 actionInfo:(id)a1;

- (id)initWithType:(unsigned long long)a0 arrContacts:(id)a1;
- (void)viewDidLoad;
- (void)initData;
- (void)initView;
- (void)initTableView;
- (void)initBottomToolView;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onViewContact:(id)a0;
- (void)onViewContactBtn:(id)a0;
- (BOOL)onViewContactAccessibilityCustomAction:(id)a0;
- (void)onRemoveContact;
- (void)switchSelectionOfContact:(id)a0 contact:(id)a1;
- (void)updateDeleteButtonStatus;
- (void)onDeleteButtonTapped;
- (void)deleteSelectedContacts;
- (void)OnContactBatchModify:(id)a0 withRet:(unsigned int)a1 errorMsg:(id)a2 isNetWorkError:(BOOL)a3;
- (void)onDeleteFaildWithErrMsg:(id)a0;
- (void)onDeleteFaildWithErrMsgTitle:(id)a0 errMsgContent:(id)a1;
- (void)onClose;
- (void)viewWillBeDismissed:(BOOL)a0;
- (void)reportMultiDeleteContactsWithAction:(unsigned long long)a0;
- (void).cxx_destruct;

@end

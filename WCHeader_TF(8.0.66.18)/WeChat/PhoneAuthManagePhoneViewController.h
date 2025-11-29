@class RichTextView, NSString, PhoneAuthManagePhoneLogic, WAReportPhoneAuthActionItem, UIView, UILabel, UITableView;
@protocol PhoneAuthManagePhoneViewControllerDataSource, PhoneAuthManagePhoneviewControllerDelegate;

@interface PhoneAuthManagePhoneViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, ILinkEventExt, PhoneAuthManagePhoneLogicDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *tableFooterView;
@property (retain, nonatomic) UILabel *phoneCountLimitationLabel;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) RichTextView *compliantTextView;
@property (copy, nonatomic) NSString *compliantString;
@property (nonatomic) BOOL editMode;
@property (retain, nonatomic) PhoneAuthManagePhoneLogic *logic;
@property (weak, nonatomic) id<PhoneAuthManagePhoneViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<PhoneAuthManagePhoneviewControllerDelegate> delegate;
@property (retain, nonatomic) WAReportPhoneAuthActionItem *actionItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initSubViews;
- (id)genTableFooterView;
- (void)initCustomNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)updateNavigationItems;
- (void)viewDidLayoutSubviews;
- (void)refreshFooterViewHiddenState;
- (id)getDisplayPhoneArray;
- (BOOL)isReachMaxPhoneCount;
- (BOOL)shouldShowAddNewPhoneEntry;
- (BOOL)isAddNewPhoneEntryIndexPath:(id)a0;
- (id)getComplaintString;
- (id)getComplaintUrl;
- (id)getCurrentAppid;
- (id)getCurrentUrlString;
- (id)getPhoneInfoForIndexPath:(id)a0;
- (BOOL)isWxPhoneIndexPath:(id)a0;
- (BOOL)isLastPhoneIndexPath:(id)a0;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)onReturn;
- (void)onEdit;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)didAddNewPhoneInfo:(id)a0;
- (void).cxx_destruct;

@end

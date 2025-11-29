@class UIView, NSString, OrderedDictionary, NSMutableDictionary, NSDictionary, MMPageSheetAdapter, NSMutableArray, MMTableView, MMUIButton;
@protocol SelectContactFromChatRoomSelectListViewControllerDelegate;

@interface SelectContactFromChatRoomSelectListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource> {
    NSMutableArray *m_arrFilteredContacts;
    NSMutableDictionary *_dicMatchTip;
    unsigned int m_canSelectContactCount;
}

@property (retain, nonatomic) OrderedDictionary *m_dicMultiSelect;
@property (retain, nonatomic) MMUIButton *completeButton;
@property (retain, nonatomic) MMUIButton *selectAllButton;
@property (retain, nonatomic) UIView *bottomBar;
@property (nonatomic) BOOL isAllSelected;
@property (retain, nonatomic) MMTableView *m_tableView;
@property (retain, nonatomic) NSDictionary *m_dicExistContact;
@property (retain, nonatomic) NSMutableArray *arrAllContact;
@property (weak, nonatomic) id<SelectContactFromChatRoomSelectListViewControllerDelegate> m_delegate;
@property (weak, nonatomic) MMPageSheetAdapter *pageSheetAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initData;
- (void)initTitleArea;
- (void)initTableView;
- (void)initBottomBar;
- (void)initView;
- (double)getTableViewHeight;
- (double)getCellHeight;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)makeCell:(id)a0 tableCell:(id)a1 section:(unsigned long long)a2 row:(unsigned long long)a3;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)isExisted:(id)a0;
- (BOOL)isSelected:(id)a0;
- (void)updateBottomCompleteButton;
- (void)onTapSelectAllButton;
- (void)updateSelectAllButtonIcon;
- (void)onFinishMultiSelect;
- (void).cxx_destruct;

@end

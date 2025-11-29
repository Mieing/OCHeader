@class WCTimeLineFooterView, NSString, NSArray, MMToolManageTableViewLogic, NSMutableDictionary, NSMutableArray, MMUILabel, MMTableView, CContact;
@protocol ChatRoomToolWeAppSelectViewControllerDelegate;

@interface ChatRoomToolWeAppSelectViewController : MMUIViewController <MMRefreshTableFooterDelegate> {
    unsigned long long m_selectedExistWeAppCount;
}

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMUILabel *emptyLabel;
@property (retain, nonatomic) WCTimeLineFooterView *loadingView;
@property (retain, nonatomic) NSMutableDictionary *cellViewCache;
@property (retain, nonatomic) NSMutableArray *selectedInSideWeAppList;
@property (retain, nonatomic) CContact *chatRoomContact;
@property (retain, nonatomic) NSMutableArray *weAppList;
@property (retain, nonatomic) NSArray *selectedExistWeAppList;
@property (retain, nonatomic) MMToolManageTableViewLogic *toolManageTableViewLogic;
@property (weak, nonatomic) id<ChatRoomToolWeAppSelectViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithChatRoomContact:(id)a0 andSelectedExistWeAppList:(id)a1 andWeAppList:(id)a2;
- (void)viewDidLoad;
- (BOOL)shouldInteractiveDismiss;
- (BOOL)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)initData;
- (void)initNavigationBar;
- (void)initView;
- (void)initEmptyView;
- (id)genTableHeaderView;
- (void)onCancel;
- (void)onExitConfirm;
- (void)onDone;
- (void)reloadTableWithWeAppList:(id)a0;
- (void).cxx_destruct;

@end

@class UIView, NSString, NSArray, AWEIMSyncStoryToFriendsTableFooterView, AWEUIButton, UITableView, NSMutableArray, AWEIMSyncStoryToFriendsTableHeaderView;
@protocol AWEIMSyncStoryToFriendsListViewControllerDelegate;

@interface AWEIMSyncStoryToFriendsListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEIMHalfScreenContainerScrollProtocol, AWEIMTableViewHeaderFooterViewDelegate, AWEIMSyncStoryToFriendsListViewControllerProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL shouldShowSendingQuickStory;
@property (copy, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) NSMutableArray *selectList;
@property (retain, nonatomic) UIView *backgoundColorView;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) AWEUIButton *sendButton;
@property (retain, nonatomic) AWEIMSyncStoryToFriendsTableHeaderView *tableHeaderView;
@property (retain, nonatomic) AWEIMSyncStoryToFriendsTableFooterView *tableFooterView;
@property (copy, nonatomic) NSString *defaultSessionId;
@property (copy, nonatomic) NSString *defaultUserId;
@property (nonatomic) long long chatType;
@property (nonatomic) BOOL syncToQuickStory;
@property (weak, nonatomic) id<AWEIMSyncStoryToFriendsListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithShouldShowSendingQuickStory:(BOOL)a0 defaultUserId:(id)a1 defaultSessionId:(id)a2 chatType:(id)a3;
- (void)didClickSendButton:(id)a0;
- (BOOL)isDefaultSelectWithShareModel:(id)a0;
- (id)createDefaultSelectedShareModel;
- (void)p_updateSendButtonState;
- (void)configOnlineStatus:(id)a0 model:(id)a1 index:(long long)a2;
- (void)syncStoryToFriendsTableViewHeaderFooterViewDidClick:(id)a0;
- (void)scrollListViewToTop;
- (id)currentSelectedList;
- (id)defaultSelectedShareModel;
- (BOOL)shouldSyncToQuickStory;
- (void)setSyncToQuickStory;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)setup;
- (void)setupUI;
- (void)setupSubviews;
- (void)setupData;
- (void)setupLayout;

@end

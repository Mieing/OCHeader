@class ChatBackgroundView, NSString, NSMutableArray, MMTableView;
@protocol MMChatBackgroundSettingViewControllerDelegate;

@interface MMChatBackgroundSettingViewController : MMUIViewController <ChatBackgroundExt, ChatBackgroundViewDelegate, UITableViewDelegate, UITableViewDataSource> {
    long long m_columnCount;
    BOOL isSettingChanged;
    ChatBackgroundView *currentSelectView;
}

@property (retain, nonatomic) MMTableView *m_tableView;
@property (weak, nonatomic) id<MMChatBackgroundSettingViewControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *m_itemViews;
@property (retain, nonatomic) NSString *m_username;
@property (retain, nonatomic) NSMutableArray *m_allItems;
@property (nonatomic) BOOL bFromSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addItemView:(id)a0;
- (id)init;
- (id)getAllItems;
- (long long)getRowCount;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)OnCancel;
- (void)OnDone;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onChatBackgroundDownloadFinishedForUser:(id)a0 withCID:(id)a1;
- (void)onChatBackgroundViewClick:(id)a0;
- (void)onListStatusChange;
- (void).cxx_destruct;

@end

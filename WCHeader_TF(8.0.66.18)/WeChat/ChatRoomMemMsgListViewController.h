@class MMTableView, NSString, NSMutableDictionary, ChatRoomMemMsgDataLogic, CContact, NSMutableArray, WCTimeLineFooterView;

@interface ChatRoomMemMsgListViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, MMRefreshTableFooterDelegate, ChatRoomMemMsgDataLogicDelegate> {
    MMTableView *m_tableView;
    WCTimeLineFooterView *m_footerView;
    NSMutableArray *m_arrMsg;
    NSMutableDictionary *m_dicMsgView;
    ChatRoomMemMsgDataLogic *m_logic;
    BOOL m_bHasMoreItems;
    NSString *m_nsChatName;
    CContact *m_oMemContact;
    BOOL m_bLoading;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithChat:(id)a0 memContact:(id)a1;
- (void)updateTableFooterHeaderView;
- (void)onBackButtonClicked:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)getViewFor:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onChatRoomMemMsgDataDone:(id)a0 End:(BOOL)a1;
- (void)getMoreData;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void).cxx_destruct;

@end

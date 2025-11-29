@class WCTimeLineFooterView, NSString, MMUILabel, UIView, NSMutableArray, MMTableView;

@interface BrandNotificationListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, MMTableViewDelegate, MMRefreshTableFooterDelegate, BrandTimelineMsgMgrExt, IContactMgrExt> {
    UIView *m_topNavView;
    MMTableView *m_tableView;
    WCTimeLineFooterView *m_footerView;
    MMUILabel *m_noMsgTipsLabel;
    NSMutableArray *m_arrViewModel;
    BOOL m_bLoadingData;
    NSMutableArray *m_sessionData;
}

@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned int enterId;
@property (nonatomic) unsigned int brandTimelineSessionId;
@property (nonatomic) unsigned int scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)willEnterForeground:(id)a0;
- (void)updateVisibleCellTime;
- (void)initData;
- (id)insertViewModelWithMsg:(id)a0 index:(unsigned long long)a1 hasBottomLine:(BOOL)a2;
- (void)updateSectionData;
- (void)initView;
- (void)initTableView;
- (void)initFooterView;
- (void)updateNoMsgTipsLabel;
- (void)initNavigationBar;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)onNavBackBarButtonClicked;
- (void)viewWillLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)fetchMoreCell;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)shouldDownMoreLoading;
- (void)updateLoadingState;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)fetchMoreHistoryMessage;
- (void)tryLoadDownMoreMessage;
- (void)onAddNotification:(id)a0;
- (void)onDelNotification:(id)a0;
- (void)onDelBrandTimelineMsgBySession:(id)a0;
- (void)onSetNotificationDelFlag:(id)a0;
- (void)checkListState;
- (void)onNewBrandContact:(id)a0;
- (void)onDeleteContact:(id)a0;
- (BOOL)containContact:(id)a0 isFollow:(BOOL)a1;
- (void)onModifyContact:(id)a0;
- (BOOL)isContactNeedProcess:(id)a0;
- (void)reportNotificationAction:(unsigned int)a0 viewModel:(id)a1 indexPathRow:(long long)a2;
- (void)openBrandAttributedNotifyMsgWithViewModel:(id)a0;
- (void).cxx_destruct;

@end

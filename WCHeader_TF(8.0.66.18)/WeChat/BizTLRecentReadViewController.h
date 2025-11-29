@class MMTableView, BizRecentReadFooter, BizRecentReadTipsBar, NSString, NSMutableSet, RichTextView, MMUILabel, GetTimelineSettingResp, NSMutableArray;

@interface BizTLRecentReadViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, PBMessageObserverDelegate, WCActionSheetDelegate, ILinkEventExt>

@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned int initialUpdatedTimeStamp;
@property (retain, nonatomic) NSMutableArray *viewModelList;
@property (retain, nonatomic) GetTimelineSettingResp *settingResp;
@property (retain, nonatomic) NSMutableSet *clickSet;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) BizRecentReadTipsBar *dataTipsLabelBar;
@property (retain, nonatomic) MMUILabel *emptyContentLabel;
@property (retain, nonatomic) RichTextView *closedLabel;
@property (retain, nonatomic) BizRecentReadFooter *footerView;
@property (nonatomic) BOOL hasLoadAllData;
@property (nonatomic) BOOL loadLock;
@property (nonatomic) double tableTop;
@property (nonatomic) int sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePreloadMpData:(id)a0;
- (void)onOpenMp:(id)a0;
- (void)getUserSetting:(id /* block */)a0;
- (void)runSettingCloseCgi:(BOOL)a0;
- (void)handleSettingCgi:(id)a0;
- (void)dispatchOnViewBePoped;
- (void)report27214:(int)a0;
- (void)reportOnClickItem:(id)a0;
- (void)onDeleteSingleItem:(id)a0;
- (void)onCloseAndDeleteAllItems;
- (void)onOpen;
- (void)runDeleteCgi:(id)a0;
- (void)loadMoreData;
- (void)handleDataCgi:(id)a0;
- (void)handleDataResp:(id)a0;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)a0;
- (void)dealloc;
- (void)initVc;
- (void)initRefreshControl;
- (BOOL)showNavigationBarSepLine;
- (void)viewDidLayoutSubviews;
- (void)onNavigationButtonMoreClicked;
- (void)showMakeSureCloseSheet;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)showRightMoreButton:(BOOL)a0;
- (id)getFirstVisibleCell:(id)a0;
- (id)getIndex0Cell:(id)a0;
- (double)getCellOffset:(id)a0 cell:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)updateTipsWhenScroll:(id)a0;
- (void)loadNextPageIfNeed:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end

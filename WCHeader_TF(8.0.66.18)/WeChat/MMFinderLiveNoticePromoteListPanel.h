@class MMFinderLiveCreateNoticeReporter, NSString, WCFinderContact, NSMutableDictionary, UITableView, NSMutableSet, MMRefreshTableFooterView, NSMutableArray, MMFinderLiveTaskId, MMUIActivityIndicatorView;
@protocol MMFinderLiveNoticePromoteListPanelDelegate;

@interface MMFinderLiveNoticePromoteListPanel : MMPageSheetBaseView <MMFinderLiveNoticeDetailsViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, MMFinderLiveNoticePromoteListTableViewCellDelegate, MMRefreshTableFooterDelegate>

@property (retain, nonatomic) WCFinderContact *anchorContact;
@property (retain, nonatomic) NSMutableSet *addedNoticeIds;
@property (retain, nonatomic) NSMutableArray *noticeInfoList;
@property (retain, nonatomic) NSMutableDictionary *noticeToIndexDict;
@property (nonatomic) unsigned int totalNoticeCount;
@property (nonatomic) BOOL hasMoreNotices;
@property (nonatomic) double estimatedRowHeight;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingIndicator;
@property (retain, nonatomic) UITableView *noticeTableView;
@property (retain, nonatomic) MMRefreshTableFooterView *refreshFooterView;
@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) MMFinderLiveCreateNoticeReporter *createNoticeReporter;
@property (weak, nonatomic) id<MMFinderLiveNoticePromoteListPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAddedNoticeIds:(id)a0 liveTaskId:(id)a1;
- (void)addAddedNoticeId:(id)a0;
- (void)removeAddedNoticeId:(id)a0;
- (void)layoutSubviews;
- (void)pageSheetWillAppear;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void)noticeQRCodePreviewViewControllerNoticeTopChanged:(id)a0 noticeInfo:(id)a1;
- (void)noticeQRCodePreviewViewControllerDidRevokeNotice:(id)a0;
- (void)didFinishModLiveNoticeWithInfo:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)onAddButtonTappedForCell:(id)a0 liveNotice:(id)a1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (id)liveTask;
- (void)setupPageSheetConfig;
- (void)updatePageSheetTitle;
- (id)getCurrentLeftButton;
- (id)getCurrentRightButton;
- (id)getLastNoticeInfo;
- (void)fetchData:(BOOL)a0;
- (id)appendNoticeInfoItems:(id)a0;
- (id)indexPathOfRowWithNoticeId:(id)a0;
- (void)reloadRowWithNoticeId:(id)a0;
- (void)rebuildNoticeToIndexDictFromIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end

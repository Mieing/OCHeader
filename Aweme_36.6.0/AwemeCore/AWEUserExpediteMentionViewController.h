@class NSString, NSArray, NSDictionary, UITableView, NSMutableArray, NSMutableSet, NSObject, AWEUserPickerConfig;
@protocol AFDMentionUserPickerContactDatasourceProtocol, AWEUserExpediteMentionViewControllerDelegate;

@interface AWEUserExpediteMentionViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSObject<AFDMentionUserPickerContactDatasourceProtocol> *dataSource;
@property (retain, nonatomic) NSArray *localUserArray;
@property (copy, nonatomic) NSArray *searchList;
@property (copy, nonatomic) NSArray *remoteSearchList;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } searchingMentionRange;
@property (nonatomic) BOOL isFromLoadMore;
@property (retain, nonatomic) NSMutableArray *trackUserList;
@property (nonatomic) BOOL needTrackUserList;
@property (retain, nonatomic) NSMutableSet *videoAtListShowTrackedUser;
@property (retain, nonatomic) NSMutableArray *sugTrackedUser;
@property (retain, nonatomic) NSString *sugSessionID;
@property (weak, nonatomic) id<AWEUserExpediteMentionViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ selectCompletion;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) AWEUserPickerConfig *config;
@property (nonatomic) BOOL loadMoreAtTracking;
@property (copy, nonatomic) NSDictionary *commomTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_searchUserListTrack;
- (void)p_updateSugSessionID;
- (void)p_startSearchWithKeyword:(id)a0;
- (void)p_prepareData;
- (BOOL)p_isSearchMode;
- (void)p_trackSugTrendingShowWithWordsNum:(long long)a0;
- (void)p_tryAddUser:(id)a0 toArrM:(id)a1 filterSetM:(id)a2;
- (void)searchKeyword:(id)a0 searchingMentionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)p_initializeContactList;
- (void)p_refreshLoadMoreFooter;
- (void)p_reloadList:(id)a0 error:(id)a1 isSearchMode:(BOOL)a2;
- (void)hideMentionListView;
- (void)p_search;
- (void)showMentionListView;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;

@end

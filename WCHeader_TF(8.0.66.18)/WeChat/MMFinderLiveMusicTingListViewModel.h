@class MMFinderLiveAddMusicListItem, NSString, MMFinderLiveTaskId, NSData, NSMutableArray, UITableView;
@protocol MMFinderLiveMusicSettingReportDelegate, MMFinderLiveMusicTingListViewModelDelegate;

@interface MMFinderLiveMusicTingListViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveAddMusicListItem *tingListItem;
@property (retain, nonatomic) NSMutableArray *dataItems;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int tabType;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) BOOL isFetchingNextPage;
@property (weak, nonatomic) id<MMFinderLiveMusicTingListViewModelDelegate> delegate;
@property (weak, nonatomic) id<MMFinderLiveMusicSettingReportDelegate> reportDelegate;
@property (weak, nonatomic) UITableView *currentTableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 tingListItem:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)fetchNextPageDataIfNeed;
- (void)fetchNextPageData;
- (void)appendMusicItem:(id)a0;
- (void).cxx_destruct;

@end

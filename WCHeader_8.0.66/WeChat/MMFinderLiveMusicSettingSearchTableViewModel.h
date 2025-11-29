@class NSString, NSMutableArray, UITableView;
@protocol MMFinderLiveMusicSettingSearchTableDelegate, MMFinderLiveMusicSettingReportDelegate;

@interface MMFinderLiveMusicSettingSearchTableViewModel : NSObject <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>

@property (retain, nonatomic) NSMutableArray *musicSearchDataItemArray;
@property (retain, nonatomic) UITableView *searchTableView;
@property (weak, nonatomic) id<MMFinderLiveMusicSettingSearchTableDelegate> searchTableDelegate;
@property (weak, nonatomic) id<MMFinderLiveMusicSettingReportDelegate> reportDelegate;
@property (retain, nonatomic) NSString *aiAssistantId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTableView:(id)a0;
- (void)appendSearchResults:(id)a0;
- (void)resetSearchResults:(id)a0;
- (BOOL)hasSearchResult;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end

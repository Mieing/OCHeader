@class WCFinderStreamLoadingState, NSString, WCFinderFeedArray, WCFinderFeedListView;

@interface WCFinderFeedListViewDatasource : NSObject <WCFinderFeedListViewDataSource, WCFinderStreamLoadingStateDelegate>

@property (weak, nonatomic) WCFinderFeedListView *listView;
@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (retain, nonatomic) WCFinderStreamLoadingState *loadingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataSourceWithFeedListView:(id)a0 feedArray:(id)a1;
+ (id)dataSourceWithFeedListView:(id)a0 feedArray:(id)a1 loadingState:(id)a2;

- (id)initWithFeedListView:(id)a0 feedArray:(id)a1 loadingState:(id)a2;
- (void)onFeedArray:(id)a0 batchUpdate:(id)a1;
- (void)onLoadingStateChanged:(id)a0;
- (id)finderFeedListView:(id)a0 contentVMAtSection:(long long)a1;
- (id)finderFeedListView:(id)a0 contentVMOfTid:(id)a1;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)a0 sectionOfTid:(id)a1;
- (void).cxx_destruct;

@end

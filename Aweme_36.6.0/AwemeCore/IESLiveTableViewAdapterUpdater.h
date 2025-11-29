@class NSArray, NSString, UITableView;

@interface IESLiveTableViewAdapterUpdater : NSObject <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic) BOOL disable_try_catch;
@property (retain, nonatomic) NSArray *sections;
@property long long state;
@property (nonatomic) BOOL enableCheckState;
@property (nonatomic) long long refreshErrorThreshold;
@property (nonatomic) double lastEnqueueTimeS;
@property (nonatomic) BOOL hadReported;
@property (weak, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performReloadData:(id)a0 completion:(id /* block */)a1;
- (id)transparentCell;
- (void)stopRefresh;
- (void)checkRefreshState;
- (void)performReloadData:(id)a0 scrollOffset:(double)a1 completion:(id /* block */)a2;
- (void)trackTableViewException:(id)a0;
- (void)performIndexPathUpdates:(id)a0 cellUpdateBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)resetState;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)performBatchUpdates:(id)a0 completion:(id /* block */)a1;
- (void)configureCell:(id)a0 atIndexPath:(id)a1;

@end

@class UITableView;

@interface IESGCPTrackerUITableViewCellInterceptor : IESGCPTrackerUIViewInterceptor

@property (nonatomic) BOOL shouldHookCellClickEvent;
@property (weak, nonatomic) UITableView *tableView;

- (void)startInterceptor;
- (void)stopInterceptor;
- (BOOL)couldInterceptTraceView;
- (id)getCellContainer;
- (void)hookTableViewCellShowTiming;
- (void)hookTableViewCellClickEventIfNeeded;
- (void).cxx_destruct;

@end

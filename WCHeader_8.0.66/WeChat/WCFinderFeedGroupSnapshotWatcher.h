@class NSDiffableDataSourceSnapshot, WCFinderAction;

@interface WCFinderFeedGroupSnapshotWatcher : WCFinderFeedGroupWatcher

@property (retain, nonatomic) WCFinderAction *action;
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *snapshot;

- (void)onFeedArraySourceDidChange:(id)a0;
- (void).cxx_destruct;

@end

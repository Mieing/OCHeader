@class NSArray, WCFinderAction;

@interface WCFinderFeedBatchUpdateWatcher : WCFinderFeedArrayWatcher

@property (retain, nonatomic) WCFinderAction *action;
@property (retain, nonatomic) NSArray *tidArray;

- (void)onFeedArrayWatcherAttach:(id)a0;
- (void)onFeedArraySourceDidChange:(id)a0;
- (void).cxx_destruct;

@end

@class WCFinderActionWatcherCollection, NSMutableDictionary, WCFinderFeedArrayWatcher, WCFinderFeedArray, NSMutableArray;

@interface WCFinderFeedGroup : NSObject

@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (retain, nonatomic) NSMutableArray *sections;
@property (copy, nonatomic) id /* block */ grouper;
@property (retain, nonatomic) WCFinderActionWatcherCollection *watchers;
@property (retain, nonatomic) NSMutableDictionary *sectionInfoMap;
@property (retain, nonatomic) NSMutableDictionary *tid2secMap;
@property (retain, nonatomic) WCFinderFeedArrayWatcher *snapshotWatcher;

- (id)mutSections;
- (id)initWithGrouper:(id /* block */)a0;
- (void)sink:(id)a0 watcher:(id)a1;
- (void)unsink:(id)a0;
- (void)unsinkWatcher:(id)a0;
- (void)onFeedArray:(id)a0 batchUpdate:(id)a1;
- (void)_ensureSection:(id)a0 item:(id)a1;
- (void)insertSection:(id)a0 index:(long long)a1;
- (BOOL)_insert:(id)a0 toSection:(id)a1;
- (void)_remove:(id)a0 fromSection:(id)a1;
- (void)_resortSection:(id)a0;
- (long long)compareFeedIndex:(id)a0 objc2:(id)a1;
- (id)feedAtIndexPath:(id)a0;
- (id)indexPathOfTid:(id)a0;
- (long long)itemCountOfSection:(id)a0;
- (long long)itemCountOfSecIndex:(long long)a0;
- (void).cxx_destruct;

@end

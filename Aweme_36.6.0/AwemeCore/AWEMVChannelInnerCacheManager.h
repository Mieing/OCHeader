@class AWEMVChannelDataController, NSString, AWEMVWeakWifiToCellularController, NSMutableArray;

@interface AWEMVChannelInnerCacheManager : NSObject <AWEAwemeDetailTableViewControllerDelegate>

@property (retain, nonatomic) NSMutableArray *awemeCache;
@property (retain, nonatomic) AWEMVChannelDataController *preloadDataController;
@property (nonatomic) BOOL isPreloading;
@property (retain, nonatomic) AWEMVWeakWifiToCellularController *weakWifiToCellularController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)detailTableViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (void)detailTableViewControllerDidDisappear:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewControllerDidAppear:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewControllerWillExit:(id)a0 currentAwemeModel:(id)a1;
- (id)awemeListForInner;
- (void)appendAwemeList:(id)a0;
- (void)removeAweme:(id)a0;
- (void)preloadDataBeforeEnterInflowIfNeededWithModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)removeAll;

@end

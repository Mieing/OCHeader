@class MMFinderLiveShopShelfCoordinator;

@interface MMFinderLiveShopShelfMainTableBottomCellAdapter : MMFinderLiveShopShelfCellAdapter

@property (retain, nonatomic) MMFinderLiveShopShelfCoordinator *coordinator;

+ (id)identifier;
+ (void)registerClassInTableView:(id)a0;

- (id)identifier;
- (id)initWithCoordinator:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;

@end

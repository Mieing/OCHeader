@class MMFinderLiveShopShelfGroupedProductsAdapter, MMFinderLiveGroupedProductsViewModel;

@interface MMFinderLiveShopShelfGroupedProductsCellAdapter : MMFinderLiveShopShelfCellAdapter

@property (retain, nonatomic) MMFinderLiveGroupedProductsViewModel *viewModel;
@property (retain, nonatomic) MMFinderLiveShopShelfGroupedProductsAdapter *groupsAdapter;

+ (void)registerClassInTableView:(id)a0;

- (id)initWithViewModel:(id)a0 groupsAdapter:(id)a1;
- (id)identifier;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;

@end

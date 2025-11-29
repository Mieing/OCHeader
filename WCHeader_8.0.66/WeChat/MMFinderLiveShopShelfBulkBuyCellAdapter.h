@class MMFinderLiveShopShelfBulkBuyViewModel;

@interface MMFinderLiveShopShelfBulkBuyCellAdapter : MMFinderLiveShopShelfCellAdapter

@property (retain, nonatomic) MMFinderLiveShopShelfBulkBuyViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;

@end

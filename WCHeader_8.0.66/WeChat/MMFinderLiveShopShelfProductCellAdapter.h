@class MMFinderLiveGoodsViewModel;

@interface MMFinderLiveShopShelfProductCellAdapter : MMFinderLiveShopShelfCellAdapter

@property (retain, nonatomic) MMFinderLiveGoodsViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;

@end

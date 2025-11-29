@class MMFinderLiveShopShelfAudienceProductCellAdapter, MMFinderLiveShopShelfCellAdapter, MMFinderLiveShopShelfAnchorProductCellAdapter;

@interface MMFinderLiveShopShelfAutoStyleProductCellAdapter : MMFinderLiveShopShelfProductCellAdapter

@property (readonly, nonatomic) MMFinderLiveShopShelfCellAdapter *currentAdapter;
@property (retain, nonatomic) MMFinderLiveShopShelfAnchorProductCellAdapter *anchorAdapter;
@property (retain, nonatomic) MMFinderLiveShopShelfAudienceProductCellAdapter *audienceAdapter;

+ (void)registerClassInTableView:(id)a0;

- (id)initWithViewModel:(id)a0;
- (BOOL)useAudienceStyle;
- (id)identifier;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;

@end

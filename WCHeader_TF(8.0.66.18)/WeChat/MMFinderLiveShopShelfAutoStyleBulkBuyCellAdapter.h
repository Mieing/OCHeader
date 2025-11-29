@class MMFinderLiveShopShelfAudienceBulkBuyCellAdapter, MMFinderLiveShopShelfCellAdapter, MMFinderLiveShopShelfAnchorBulkBuyCellAdapter;

@interface MMFinderLiveShopShelfAutoStyleBulkBuyCellAdapter : MMFinderLiveShopShelfBulkBuyCellAdapter

@property (readonly, nonatomic) MMFinderLiveShopShelfCellAdapter *currentAdapter;
@property (retain, nonatomic) MMFinderLiveShopShelfAnchorBulkBuyCellAdapter *anchorAdapter;
@property (retain, nonatomic) MMFinderLiveShopShelfAudienceBulkBuyCellAdapter *audienceAdapter;

+ (void)registerClassInTableView:(id)a0;

- (id)initWithViewModel:(id)a0;
- (BOOL)useAudienceStyle;
- (id)identifier;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end

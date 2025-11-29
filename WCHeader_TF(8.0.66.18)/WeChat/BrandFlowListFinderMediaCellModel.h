@class NSString, WCFinderFeedContentVM;

@interface BrandFlowListFinderMediaCellModel : BrandFlowListBaseCellModel

@property (retain, nonatomic) WCFinderFeedContentVM *feedContentVM;
@property (retain, nonatomic) NSString *exportId;

- (id)initWithFinderDataItem:(id)a0 fromScene:(unsigned long long)a1;
- (id)getFinderFeedContentVM;
- (id)finderExportId;
- (void)refreshWithFinderDataItem:(id)a0;
- (void).cxx_destruct;

@end

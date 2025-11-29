@class NSString, AWEPOIDetailMallFilterModel, NSDictionary;

@interface AWEDitoPOIMallPageContext : DitoGeneralContainerPageContext

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *originalTitle;
@property (nonatomic) unsigned long long tabType;
@property (retain, nonatomic) AWEPOIDetailMallFilterModel *filterModels;
@property (retain, nonatomic) AWEPOIDetailMallFilterModel *selectedL2Item;
@property (retain, nonatomic) AWEPOIDetailMallFilterModel *selectedL3Item;
@property (retain, nonatomic) AWEPOIDetailMallFilterModel *selectedItem;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end

@class NSString, NSArray;

@interface IESECMallXBridgeEcReportMallChannelFiltersMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *tabId;
@property (retain, nonatomic) NSArray *filters;
@property (retain, nonatomic) NSArray *followTabShopFilters;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

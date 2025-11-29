@class NSArray;

@interface BDXBridgeGetAvailableSearchTabsMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSArray *tabs;

+ (id)tabsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

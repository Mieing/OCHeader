@class NSArray, AWENearbyTaskRefreshTabsInfo;

@interface AWENearbyTaskRefreshCategoricalTab : AWEBaseApiModel

@property (retain, nonatomic) NSArray *tabList;
@property (retain, nonatomic) NSArray *tabNodes;
@property (retain, nonatomic) AWENearbyTaskRefreshTabsInfo *refreshTabsInfo;

+ (BOOL)automaticallyDefaultMapping;
+ (id)tabNodesJSONTransformer;

- (void).cxx_destruct;

@end

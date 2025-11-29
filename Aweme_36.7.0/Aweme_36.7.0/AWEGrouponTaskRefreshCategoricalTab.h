@class NSArray, AWEGrouponTaskRefreshTabsInfo;

@interface AWEGrouponTaskRefreshCategoricalTab : AWEBaseApiModel

@property (retain, nonatomic) NSArray *tabList;
@property (retain, nonatomic) NSArray *tabNodes;
@property (retain, nonatomic) AWEGrouponTaskRefreshTabsInfo *refreshTabsInfo;

+ (BOOL)automaticallyDefaultMapping;
+ (id)tabNodesJSONTransformer;

- (void).cxx_destruct;

@end

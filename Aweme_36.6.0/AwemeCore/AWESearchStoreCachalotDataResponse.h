@class AWESearchNoResultsModel, AWEGeneralSearchBackgroundModel;

@interface AWESearchStoreCachalotDataResponse : AWESearchResultCachalotDataResponse

@property (retain, nonatomic) AWESearchNoResultsModel *noResults;
@property (retain, nonatomic) AWEGeneralSearchBackgroundModel *searchBackgroundModel;

+ (id)noResultsJSONTransformer;
+ (id)searchBackgroundModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

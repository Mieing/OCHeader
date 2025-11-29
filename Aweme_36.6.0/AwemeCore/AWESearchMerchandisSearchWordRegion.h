@class NSArray;

@interface AWESearchMerchandisSearchWordRegion : AWEBaseApiModel

@property (retain, nonatomic) NSArray *searchWordList;

+ (id)searchWordListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

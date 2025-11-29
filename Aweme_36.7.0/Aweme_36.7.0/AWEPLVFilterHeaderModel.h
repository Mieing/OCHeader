@class NSArray;

@interface AWEPLVFilterHeaderModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *filterList;

+ (id)filterListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

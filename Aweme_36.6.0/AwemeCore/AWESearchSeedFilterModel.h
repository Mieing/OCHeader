@class NSArray, NSNumber;

@interface AWESearchSeedFilterModel : AWEBaseApiModel

@property (readonly, nonatomic) NSArray *filterSections;
@property (retain, nonatomic) NSNumber *rank;

+ (id)filterSectionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

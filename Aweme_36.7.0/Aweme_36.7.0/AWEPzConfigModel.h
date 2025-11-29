@class NSArray;

@interface AWEPzConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *domainList;

+ (id)domainListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)description;

@end

@class NSArray;

@interface AWEIMSecurityToastConfigCheckboxOptionModel : AWEBaseApiModel

@property (nonatomic) long long selectType;
@property (copy, nonatomic) NSArray *items;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

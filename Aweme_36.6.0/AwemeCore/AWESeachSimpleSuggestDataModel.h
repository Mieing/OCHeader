@class NSArray;

@interface AWESeachSimpleSuggestDataModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *words;

+ (id)wordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

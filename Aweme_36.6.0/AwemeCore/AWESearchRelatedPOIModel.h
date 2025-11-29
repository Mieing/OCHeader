@class NSString, NSArray;

@interface AWESearchRelatedPOIModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tips;
@property (copy, nonatomic) NSString *wordSource;
@property (retain, nonatomic) NSArray *wordsList;

+ (id)wordsListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

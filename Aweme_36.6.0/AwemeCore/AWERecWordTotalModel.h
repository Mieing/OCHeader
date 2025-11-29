@class NSArray;

@interface AWERecWordTotalModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *wordList;
@property (nonatomic) long long cardType;

+ (id)wordListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

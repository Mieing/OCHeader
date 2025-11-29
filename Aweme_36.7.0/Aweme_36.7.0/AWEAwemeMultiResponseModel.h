@class NSArray;

@interface AWEAwemeMultiResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (copy, nonatomic) NSArray *filteredModels;
@property (copy, nonatomic) NSArray *emojiList;
@property (copy, nonatomic) NSArray *verificationFilterList;

+ (id)awemeListJSONTransformer;
+ (id)filteredModelsJSONTransformer;
+ (id)verificationFilterListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

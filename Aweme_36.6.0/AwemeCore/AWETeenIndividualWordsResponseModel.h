@class NSArray, NSString;

@interface AWETeenIndividualWordsResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *suggestWordsArray;
@property (copy, nonatomic) NSString *logId;

+ (id)suggestWordsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

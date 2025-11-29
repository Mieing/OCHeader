@class NSArray, NSString;

@interface AWEIndividualWordsResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *suggestWordsArray;
@property (copy, nonatomic) NSString *logID;

+ (id)suggestWordsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

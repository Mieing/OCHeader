@class NSArray;

@interface AWESearchFeelGoodSurveyFormModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *items;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

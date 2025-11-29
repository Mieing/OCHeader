@class NSArray, NSString;

@interface AWESearchFeelGoodSurveyFormItemsModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *options;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleID;

+ (id)optionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

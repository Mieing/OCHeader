@class NSString, NSDictionary;

@interface AWESearchFeelGoodSurveyCommonModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *byteSurveyUrl;
@property (copy, nonatomic) NSDictionary *byteSurveyConfig;
@property (nonatomic) BOOL byteSurvey;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

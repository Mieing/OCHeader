@class AWESearchFeelGoodSurveyTaskModel;

@interface AWESearchFeelGoodSurveyModel : AWEBaseApiModel

@property (retain, nonatomic) AWESearchFeelGoodSurveyTaskModel *surveyTask;

+ (id)surveyTaskJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

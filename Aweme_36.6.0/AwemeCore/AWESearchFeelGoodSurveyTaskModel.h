@class NSString, AWESearchFeelGoodSurveyFormModel, AWESearchFeelGoodSurveyCommonModel, NSNumber;

@interface AWESearchFeelGoodSurveyTaskModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *surveyType;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *taskName;
@property (retain, nonatomic) NSNumber *taskStatus;
@property (retain, nonatomic) NSNumber *taskVersion;
@property (retain, nonatomic) AWESearchFeelGoodSurveyFormModel *formConfig;
@property (retain, nonatomic) NSNumber *surveyDelay;
@property (retain, nonatomic) AWESearchFeelGoodSurveyCommonModel *commonConfig;

+ (id)formConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

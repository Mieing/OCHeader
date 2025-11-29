@class NSString;

@interface AWECommentSurveyConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *surveyId;
@property (nonatomic) unsigned long long surveyType;
@property (nonatomic) long long surveyIndex;
@property (nonatomic) long long stayDuration;
@property (copy, nonatomic) NSString *surveyDetail;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

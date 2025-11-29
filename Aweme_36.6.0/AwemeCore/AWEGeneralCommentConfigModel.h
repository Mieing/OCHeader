@class AWECommentSurveyConfigModel;

@interface AWEGeneralCommentConfigModel : AWEBaseApiModel

@property (retain, nonatomic) AWECommentSurveyConfigModel *commentSurveyConfig;
@property (nonatomic) long long publishRetryInterval;

+ (id)commentSurveyConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

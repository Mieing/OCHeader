@class NSString, AWEURLModel;

@interface AWESpecialRichAwemeLifeEvaluationInfoModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *evaluationLevel;
@property (copy, nonatomic) NSString *evaluationPrefix;
@property (copy, nonatomic) NSString *orderDesc;

+ (id)evaluationLevelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString, AWEQuestionnaire, AWEAwemeModel;

@interface AWEQuestionnaireResponse : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *interactionRule;
@property (nonatomic) double deadlineTime;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *taskID;
@property (retain, nonatomic) AWEQuestionnaire *questionnaire;

+ (id)questionnaireJSONTransformer;
+ (id)awemeModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

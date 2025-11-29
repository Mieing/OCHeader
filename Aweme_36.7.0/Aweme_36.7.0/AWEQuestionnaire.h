@class NSString, NSDictionary, AWEQuestionnaireModel, AWEQuestionnaireDataModel;

@interface AWEQuestionnaire : AWEBaseApiModel

@property (copy, nonatomic) NSDictionary *extraLog;
@property (retain, nonatomic) AWEQuestionnaireDataModel *dataModel;
@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) BOOL isExpired;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *feData;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *backgroundUrl;
@property (nonatomic) long long popUpMinProgress;
@property (nonatomic) long long popUpMaxProgress;
@property (nonatomic) unsigned long long status;
@property (readonly, nonatomic) AWEQuestionnaireModel *firstQuestionnaire;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

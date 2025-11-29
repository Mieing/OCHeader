@class NSString, NSDictionary, NSDate;

@interface BDUGLuckyActivityTaskModel : BDUGLuckyJSONModel

@property (copy, nonatomic) NSString *taskType;
@property (copy, nonatomic) NSString *globalTaskId;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSString *taskToken;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *targetPage;
@property (retain, nonatomic) NSDate *lastPersistenceTime;
@property (retain, nonatomic) NSDate *taskStartDate;
@property (nonatomic) double expireTimeMs;
@property (copy, nonatomic) NSString *uniqueType;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *luckyDogApiExtra;
@property (copy, nonatomic) NSString *ackTimeExtra;
@property (copy, nonatomic) NSDictionary *schemaAppendExtra;
@property (copy, nonatomic) NSString *pendantType;
@property (copy, nonatomic) NSString *sceneId;
@property (nonatomic) long long rewardAmount;
@property (nonatomic) long long taskTokenType;
@property (copy, nonatomic) NSString *actNamespace;
@property (nonatomic) long long autoNext;
@property (nonatomic) long long longVideoLimitTime;
@property (nonatomic) long long pauseTextFrequency;

+ (id)taskModelWithSchemeParameters:(id)a0;

- (id)taskClassIdentifier;
- (void)setCampainTaskActivityId:(id)a0;
- (id)campainTaskActivityId;
- (void).cxx_destruct;

@end

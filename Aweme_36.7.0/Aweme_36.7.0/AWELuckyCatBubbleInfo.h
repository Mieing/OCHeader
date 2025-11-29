@class NSString;

@interface AWELuckyCatBubbleInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) double beginTextShowSeconds;
@property (nonatomic) unsigned long long nextBoostRatio;
@property (nonatomic) unsigned long long boostRatio;
@property (nonatomic) double scoreBeforeBoost;
@property (nonatomic) unsigned long long bubbleTextLines;
@property (copy, nonatomic) NSString *activityLabel;
@property (nonatomic) long long dayLimitTimes;
@property (nonatomic) long long totalLimitTimes;
@property (nonatomic) long long sendMoneyAmount;
@property (nonatomic) long long bonusRound;
@property (copy, nonatomic) NSString *bubbleName;
@property (copy, nonatomic) NSString *jumpSchema;
@property (nonatomic) long long targetPosition;
@property (nonatomic) long long taskID;
@property (copy, nonatomic) NSString *taskKey;
@property (nonatomic) long long watchTime;
@property (nonatomic) long long awardAmount;
@property (nonatomic) long long bubbleKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

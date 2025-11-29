@class NSString, AWELuckyCatReadTaskSociaExitRules;

@interface AWELuckyCatReadTaskSociaIMShareTaskInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *taskKey;
@property (nonatomic) long long taskID;
@property (nonatomic) long long rewardAmount;
@property (nonatomic) long long dailyTotalCount;
@property (nonatomic) long long currentTotalCount;
@property (nonatomic) long long displayIntervalNum;
@property (retain, nonatomic) AWELuckyCatReadTaskSociaExitRules *exitRules;
@property (nonatomic) long long displayPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

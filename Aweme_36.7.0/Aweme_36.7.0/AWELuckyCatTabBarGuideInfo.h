@class NSString;

@interface AWELuckyCatTabBarGuideInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long limitTimes;
@property (nonatomic) BOOL canShow;
@property (nonatomic) unsigned long long showTimes;
@property (nonatomic) unsigned long long showGuidePlayTime;
@property (copy, nonatomic) NSString *guideTitle;
@property (nonatomic) unsigned long long guideRewardAmount;
@property (nonatomic) unsigned long long taskId;
@property (copy, nonatomic) NSString *taskName;
@property (copy, nonatomic) NSString *challengeTaskKey;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *activityExtraJson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

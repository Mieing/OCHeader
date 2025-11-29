@class NSString;

@interface AWELiteShareFeedFissionTaskInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isOpen;
@property (nonatomic) BOOL isExit;
@property (nonatomic) long long taskID;
@property (copy, nonatomic) NSString *taskKey;
@property (nonatomic) long long guideCycleMinutes;
@property (nonatomic) long long guideToastExpireSeconds;
@property (nonatomic) long long guideExitLimit;
@property (nonatomic) long long guideExitExpireDays;
@property (nonatomic) long long guideOnVideoProgress;
@property (nonatomic) long long guideStyleAB;
@property (copy, nonatomic) NSString *activityName;
@property (copy, nonatomic) NSString *shareScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

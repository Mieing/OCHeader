@class NSString, NSDictionary;

@interface AWEUGPendantTimingTaskModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isParticipate;
@property (nonatomic) BOOL hasVideoTask;
@property (nonatomic) BOOL finishAll;
@property (nonatomic) long long completedCount;
@property (nonatomic) long long rewardCount;
@property (copy, nonatomic) NSString *videoTaskId;
@property (copy, nonatomic) NSString *rewardText;
@property (copy, nonatomic) NSDictionary *videoTaskDetailInfo;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

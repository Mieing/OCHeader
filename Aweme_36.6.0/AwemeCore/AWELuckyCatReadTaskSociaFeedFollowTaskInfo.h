@class NSString;

@interface AWELuckyCatReadTaskSociaFeedFollowTaskInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *taskKey;
@property (nonatomic) long long rewardAmount;
@property (nonatomic) BOOL hasNext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

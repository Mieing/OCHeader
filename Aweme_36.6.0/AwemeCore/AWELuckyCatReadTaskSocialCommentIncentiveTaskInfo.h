@class NSString, AWELuckyCatReadTaskSocialCommentIncentiveTaskExtraInfo;

@interface AWELuckyCatReadTaskSocialCommentIncentiveTaskInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *taskKey;
@property (nonatomic) long long rewardAmount;
@property (nonatomic) long long moreRewardAmount;
@property (nonatomic) BOOL hasNext;
@property (retain, nonatomic) AWELuckyCatReadTaskSocialCommentIncentiveTaskExtraInfo *showGuideExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showGuideExtraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

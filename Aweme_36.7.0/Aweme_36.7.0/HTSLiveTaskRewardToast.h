@class NSString;

@interface HTSLiveTaskRewardToast : IESLivePBBaseMessage

@property (nonatomic) int taskId;
@property (nonatomic) int taskType;
@property (nonatomic) int rewardType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *bgPicURL;
@property (nonatomic) int rewardAmount;
@property (copy, nonatomic) NSString *tip;
@property (copy, nonatomic) NSString *finishSound;

+ (id)descriptor;

@end

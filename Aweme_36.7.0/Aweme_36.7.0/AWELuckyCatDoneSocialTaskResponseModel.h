@class NSString;

@interface AWELuckyCatDoneSocialTaskResponseModel : AWELiteBaseApiModel

@property (copy, nonatomic) NSString *taskKey;
@property (nonatomic) long long taskID;
@property (nonatomic) long long rewardAmount;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long currentCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

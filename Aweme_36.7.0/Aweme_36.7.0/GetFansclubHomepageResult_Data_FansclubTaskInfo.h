@class NSString;

@interface GetFansclubHomepageResult_Data_FansclubTaskInfo : IESLivePBBaseMessage

@property (nonatomic) int taskType;
@property (nonatomic) long long completedNum;
@property (nonatomic) long long totalNum;
@property (nonatomic) long long intimacyBonus;
@property (copy, nonatomic) NSString *description_p;

+ (id)descriptor;

@end

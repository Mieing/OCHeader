@interface HTSLiveFansclubTaskStats : IESLivePBBaseMessage

@property (nonatomic) int taskType;
@property (nonatomic) long long compeletedUserCount;
@property (nonatomic) long long targetUserCount;

+ (id)descriptor;

@end

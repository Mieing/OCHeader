@class NSString;

@interface HTSLiveChestTask : IESLivePBBaseMessage

@property (nonatomic) long long taskId;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long duration;
@property (nonatomic) long long guestNum;
@property (nonatomic) long long totalScore;
@property (nonatomic) long long guestScore;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end

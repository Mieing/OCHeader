@class NSString;

@interface LiveInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *winRate;
@property (copy, nonatomic) NSString *winningStreak;
@property (nonatomic) long long winRateNum;

+ (id)descriptor;

@end

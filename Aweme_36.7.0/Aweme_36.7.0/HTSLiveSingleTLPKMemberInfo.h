@class NSString;

@interface HTSLiveSingleTLPKMemberInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *memberId;
@property (nonatomic) long long maxWinRound;

+ (id)descriptor;

@end

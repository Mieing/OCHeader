@class NSString;

@interface MemberIncome : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long income;
@property (nonatomic) long long otherIncome;

+ (id)descriptor;

@end

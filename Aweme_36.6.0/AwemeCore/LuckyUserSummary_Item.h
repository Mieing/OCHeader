@class NSString;

@interface LuckyUserSummary_Item : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) int awardType;
@property (nonatomic) long long grantCount;

+ (id)descriptor;

@end

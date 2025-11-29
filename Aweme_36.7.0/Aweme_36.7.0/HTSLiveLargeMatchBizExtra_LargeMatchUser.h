@class NSString;

@interface HTSLiveLargeMatchBizExtra_LargeMatchUser : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *userId;

+ (id)descriptor;

@end

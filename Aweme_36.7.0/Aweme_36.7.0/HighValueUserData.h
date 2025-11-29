@class NSString;

@interface HighValueUserData : IESLivePBBaseMessage

@property (nonatomic) long long userId;
@property (nonatomic) BOOL isHighValueUser;
@property (copy, nonatomic) NSString *userOpenId;

+ (id)descriptor;

@end

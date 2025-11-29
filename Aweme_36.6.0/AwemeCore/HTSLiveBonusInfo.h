@class NSString;

@interface HTSLiveBonusInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long deltaTime;
@property (nonatomic) BOOL status;

+ (id)descriptor;

@end

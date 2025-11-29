@class NSString;

@interface HTSLiveBattlePowerContainer_ClientPointInfo : IESLivePBBaseMessage

@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *effectType;

+ (id)descriptor;

@end

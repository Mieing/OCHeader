@class NSString;

@interface InteractEffectStartResponse_InitResult : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) long long queryGapTime;

+ (id)descriptor;

@end

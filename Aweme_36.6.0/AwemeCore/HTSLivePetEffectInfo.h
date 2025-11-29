@class NSString;

@interface HTSLivePetEffectInfo : IESLivePBBaseMessage

@property (nonatomic) int actionType;
@property (copy, nonatomic) NSString *actionExtra;
@property (copy, nonatomic) NSString *petMeta;

+ (id)descriptor;

@end

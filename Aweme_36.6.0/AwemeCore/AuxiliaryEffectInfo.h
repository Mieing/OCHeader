@class NSString;

@interface AuxiliaryEffectInfo : IESLivePBBaseMessage

@property (nonatomic) long long effectType;
@property (copy, nonatomic) NSString *resourceId;
@property (nonatomic) long long renderMode;
@property (copy, nonatomic) NSString *toolType;
@property (copy, nonatomic) NSString *pkBarResourceId;
@property (copy, nonatomic) NSString *title;

+ (id)descriptor;

@end

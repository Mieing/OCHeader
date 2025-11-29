@interface AWESafetyControlModel : AWEBaseApiModel

@property (nonatomic) BOOL needVideoPlayCheck;
@property (nonatomic) long long potentialRiskLevel;

+ (id)JSONKeyPathsByPropertyKey;

@end

@class NSString, HTSLiveLinkmicPlayModeStarWishConfig, HTSLiveImage, GPBEnumArray;

@interface HTSLiveLinkmicDecorationConfig : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *playValueIcon;
@property (copy, nonatomic) NSString *linkmicDynamicEffect;
@property (copy, nonatomic) NSString *beautyEffectId;
@property (copy, nonatomic) NSString *linkmicStaticEffect;
@property (nonatomic) BOOL showFlyMicEffect;
@property (copy, nonatomic) NSString *valueBgColor;
@property (copy, nonatomic) NSString *valueNumberColor;
@property (copy, nonatomic) NSString *sponsorBgColor;
@property (retain, nonatomic) HTSLiveImage *honorIcon;
@property (nonatomic) BOOL hasHonorIcon;
@property (retain, nonatomic) GPBEnumArray *playTypeArray;
@property (readonly, nonatomic) unsigned long long playTypeArray_Count;
@property (retain, nonatomic) HTSLiveLinkmicPlayModeStarWishConfig *starWishConfig;
@property (nonatomic) BOOL hasStarWishConfig;

+ (id)descriptor;

@end

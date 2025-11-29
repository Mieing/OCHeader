@class NSString;

@interface AFDColorRingDisplayConfig : AFDGradientViewDisplayConfig

@property (nonatomic) BOOL shouldAutoCreateLottieView;
@property (copy, nonatomic) NSString *animationName;
@property (nonatomic) BOOL shouldAdjustRingWidth;
@property (readonly, copy, nonatomic) id /* block */ configRingWidth;
@property (readonly, copy, nonatomic) id /* block */ configRingGap;
@property (readonly, copy, nonatomic) id /* block */ configGradientColors;
@property (readonly, copy, nonatomic) id /* block */ configGradientLocations;
@property (readonly, copy, nonatomic) id /* block */ configStartPoint;
@property (readonly, copy, nonatomic) id /* block */ configEndPoint;
@property (readonly, copy, nonatomic) id /* block */ configGradientType;
@property (readonly, copy, nonatomic) id /* block */ configGradientAngle;
@property (readonly, copy, nonatomic) id /* block */ configAnimationName;
@property (readonly, copy, nonatomic) id /* block */ configRingAutoCreateLottieView;
@property (readonly, copy, nonatomic) id /* block */ configShouldAdjustRingWidth;

+ (id)story25ColorConfig;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

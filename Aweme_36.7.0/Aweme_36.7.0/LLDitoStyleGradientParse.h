@interface LLDitoStyleGradientParse : NSObject

@property (nonatomic) unsigned long long rangeType;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)kgradientPointsDict;
- (id)gradientWithString:(id)a0;
- (unsigned long long)gradientDirectionMode:(id)a0;
- (void)parseGradient:(id)a0 colors:(id)a1 locations:(id)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

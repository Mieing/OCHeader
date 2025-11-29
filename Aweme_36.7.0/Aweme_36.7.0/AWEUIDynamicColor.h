@class UIColor, NSString, NSMutableDictionary, NSDictionary;

@interface AWEUIDynamicColor : UIColor <IESIMDynamicColorProtocol>

@property (copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ resolveBlock;
@property (retain, nonatomic) UIColor *currentResolvedColor;
@property (retain, nonatomic) NSMutableDictionary *constColors;
@property (copy) NSDictionary *safeConstColorMap;
@property (copy, nonatomic) NSString *name;

+ (id)dynamicColorWithResolveBlock:(id /* block */)a0;
+ (id)afd_dynamicColorWithResolveBlock:(id /* block */)a0;
+ (id)afd_dynamicColorWithDarkColor:(id)a0 lightColor:(id)a1;

- (id)dux_colorWithTheme:(long long)a0;
- (id)constColorForTheme:(id)a0;
- (void)invalidateCurrentColor;
- (id)constColorForThemeStyle:(long long)a0;
- (id)constColorForColorTheme:(unsigned long long)a0;
- (id)constColorForColorSuit:(unsigned long long)a0;
- (id)_highContrastDynamicColor;
- (struct CGColor { } *)CGColor;
- (void)setFill;
- (BOOL)_isDynamic;
- (void).cxx_destruct;
- (BOOL)getHue:(double *)a0 saturation:(double *)a1 brightness:(double *)a2 alpha:(double *)a3;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (void)set;
- (void)setStroke;
- (id)colorWithAlphaComponent:(double)a0;
- (BOOL)isEqual:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

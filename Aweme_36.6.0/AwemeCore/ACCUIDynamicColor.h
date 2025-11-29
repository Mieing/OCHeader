@class UIColor, NSString;

@interface ACCUIDynamicColor : UIColor <ACCThemeChangeSubscriber>

@property (copy, nonatomic) id /* block */ resolveBlock;
@property (retain, nonatomic) UIColor *currentResolvedColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dynamicColorWithResolveBlock:(id /* block */)a0;

- (void)invalidateCurrentColor;
- (void)onThemeChange;
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

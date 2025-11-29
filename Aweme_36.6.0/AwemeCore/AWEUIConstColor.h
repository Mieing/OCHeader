@class UIColor, NSString, AWEUIDynamicColor;
@protocol IESIMDynamicColorProtocol;

@interface AWEUIConstColor : UIColor <IESIMConstColorProtocol>

@property (readonly, weak, nonatomic) UIColor<IESIMDynamicColorProtocol> *dynamicColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ resolveBlock;
@property (weak, nonatomic) AWEUIDynamicColor *dynamicColor;
@property (retain, nonatomic) UIColor *currentResolvedColor;

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

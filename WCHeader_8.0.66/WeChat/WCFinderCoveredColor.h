@class UIColor;

@interface WCFinderCoveredColor : NSProxy

@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *coveredColor;
@property (nonatomic) BOOL displayBlurWhenCovered;
@property (nonatomic) BOOL displayCoveredStyle;

+ (id)colorWithNormal:(id)a0 coveredColor:(id)a1;
+ (id)colorWithNormal:(id)a0 coveredBlurColor:(id)a1;
+ (id)colorWithNormal:(id)a0;
+ (BOOL)isDynamicCoveredColor:(id)a0;

- (id)resolvedColor;
- (id)colorWithAlphaComponent:(double)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (struct CGColor { } *)CGColor;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

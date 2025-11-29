@class CAGradientLayer;

@interface LynxFadingEdge : NSObject

@property (retain, nonatomic) CAGradientLayer *fadingEdgeLayer;
@property (nonatomic) double size;
@property (nonatomic) BOOL horizontal;

+ (void)swizzle:(Class)a0 instanceMethod:(SEL)a1 with:(SEL)a2;

- (void).cxx_destruct;

@end

@interface YGStyleLayoutUtility : NSObject

+ (struct YGConfig { } *)globalConfig;
+ (double)roundPixelValue:(double)a0;
+ (struct YGValue { float x0; int x1; })pointValue:(double)a0;
+ (struct YGValue { float x0; int x1; })percentValue:(double)a0;
+ (struct CGSize { double x0; double x1; })calculateViewSize:(id)a0 constrainedWidth:(double)a1 constrainedHeight:(double)a2;

@end

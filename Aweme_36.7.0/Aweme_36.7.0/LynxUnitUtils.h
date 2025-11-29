@interface LynxUnitUtils : NSObject

+ (double)toPtFromUnitValue:(id)a0;
+ (double)toPtWithScreenMetrics:(id)a0 unitValue:(id)a1 rootFontSize:(double)a2 curFontSize:(double)a3 rootWidth:(int)a4 rootHeight:(int)a5 withDefaultPt:(double)a6;
+ (double)toPtFromUnitValue:(id)a0 rootFontSize:(double)a1 curFontSize:(double)a2 rootWidth:(int)a3 rootHeight:(int)a4 withDefaultPt:(double)a5;
+ (double)toPtFromUnitValue:(id)a0 withDefaultPt:(double)a1;
+ (double)clamp:(double)a0 min:(double)a1 max:(double)a2;
+ (double)toPtWithScreenMetrics:(id)a0 unitValue:(id)a1 rootFontSize:(double)a2 curFontSize:(double)a3 rootWidth:(int)a4 rootHeight:(int)a5 viewSize:(double)a6 withDefaultPt:(double)a7;
+ (BOOL)isPercentage:(id)a0;
+ (double)toPhysicalPixelFromPt:(double)a0;
+ (double)toPtFromIDUnitValue:(id)a0 withDefaultPt:(double)a1;
+ (double)toPtFromUnitValue:(id)a0 rootFontSize:(double)a1 curFontSize:(double)a2 rootWidth:(int)a3 rootHeight:(int)a4;
+ (double)toPtFromUnitValue:(id)a0 rootFontSize:(double)a1 curFontSize:(double)a2 rootWidth:(int)a3 rootHeight:(int)a4 viewSize:(double)a5 withDefaultPt:(double)a6;

@end

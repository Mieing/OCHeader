@interface WCGestureManager : NSObject

+ (double)cosDistanceWithSourceVec:(id)a0 andTargetVec:(id)a1;
+ (double)recognizeGestureSourceSet:(id)a0 targetSet:(id)a1;
+ (id)standardizeSet:(id)a0;
+ (id)convertGesturePointsFromStringToArray:(id)a0;
+ (BOOL)isPassedTemplatePoints:(id)a0 userPathPoints:(id)a1 radius:(long long)a2;
+ (id)convertGesturePointsFromStringToSet:(id)a0;
+ (id)convertGesturePoints:(id)a0 realWidth:(double)a1 realHeight:(double)a2 basicWidth:(double)a3 basicHeight:(double)a4;

@end

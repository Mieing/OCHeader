@interface EditImageColorUtility : NSObject

+ (id)getDefaultEditImageColor;
+ (id)getNewYearEditImageColor;
+ (id)getEditImageColors;
+ (id)getEditImageColorFromColor:(id)a0 allowDifference:(BOOL)a1;
+ (id)hexColorStringFromColor:(id)a0 withHash:(BOOL)a1;
+ (double)colorDifferenceBetweenColorA:(id)a0 andColorB:(id)a1;

@end

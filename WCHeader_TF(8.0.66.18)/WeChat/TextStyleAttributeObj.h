@class NSNumber, UIColor;

@interface TextStyleAttributeObj : NSObject

@property (nonatomic) BOOL isOuterStroke;
@property (retain, nonatomic) NSNumber *textAttributeStrokeWidthNum;
@property (retain, nonatomic) UIColor *textAttributeStrokeColor;
@property (nonatomic) BOOL customShadow;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) double shadowBlurRadius;

- (BOOL)enableDrawInOuterStroke;
- (void).cxx_destruct;

@end

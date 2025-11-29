@class UIColor, CALayer;

@interface LynxBoxShadow : NSObject

@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) double offsetX;
@property (nonatomic) double offsetY;
@property (nonatomic) double blurRadius;
@property (nonatomic) double spreadRadius;
@property (nonatomic) BOOL inset;
@property (retain, nonatomic) CALayer *layer;

- (BOOL)isEqualToBoxShadow:(id)a0;
- (void).cxx_destruct;

@end

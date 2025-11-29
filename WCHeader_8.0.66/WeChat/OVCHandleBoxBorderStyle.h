@class UIColor;

@interface OVCHandleBoxBorderStyle : NSObject

@property (readonly, nonatomic) UIColor *strokeColor;
@property (readonly, nonatomic) double strokeWidth;
@property (readonly, nonatomic) UIColor *shadowColor;
@property (readonly, nonatomic) double shadowWidth;

- (id)initWithStrokeColor:(id)a0 strokeWidth:(double)a1 shadowColor:(id)a2 shadowWidth:(double)a3;
- (id)description;
- (void).cxx_destruct;

@end

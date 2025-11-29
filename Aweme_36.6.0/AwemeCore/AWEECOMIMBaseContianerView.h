@interface AWEECOMIMBaseContianerView : UIView

@property (nonatomic) double leftTop;
@property (nonatomic) double leftBottom;
@property (nonatomic) double rightTop;
@property (nonatomic) double rightBottom;

- (void)ecom_addDifferentCornerRadiusForLeftTop:(double)a0 leftBottom:(double)a1 rightTop:(double)a2 rightBottom:(double)a3;
- (void)layoutSubviews;

@end

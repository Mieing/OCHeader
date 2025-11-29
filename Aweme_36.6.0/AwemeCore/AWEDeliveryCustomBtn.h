@interface AWEDeliveryCustomBtn : UIButton

@property (nonatomic) long long layoutStyle;
@property (nonatomic) double space;
@property (nonatomic) struct CGSize { double width; double height; } fixedImageSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end

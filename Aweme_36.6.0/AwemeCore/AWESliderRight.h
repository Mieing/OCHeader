@class UIImageView, UIView;

@interface AWESliderRight : UIView

@property (retain, nonatomic) UIImageView *sliderImageView;
@property (retain, nonatomic) UIView *verticalLine;
@property (readonly, nonatomic) double visibleWidth;
@property (nonatomic) BOOL lockThumb;
@property (nonatomic) BOOL useEnhancedStyle;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

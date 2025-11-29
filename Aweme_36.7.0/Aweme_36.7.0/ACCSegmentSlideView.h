@class UIColor, UIView;

@interface ACCSegmentSlideView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIColor *sliderColor;
@property (nonatomic) double sliderOffset;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end

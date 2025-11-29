@class UIStackView, NSString, UIImageView, UIImage, UILabel;

@interface MJPublisherButton : MMUIButton

@property (retain, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) UILabel *customTitleLabel;
@property (readonly, nonatomic) UIImageView *customImageView;
@property (retain, nonatomic) NSString *customTitle;
@property (retain, nonatomic) UIImage *customImage;
@property (nonatomic) double spacing;
@property (nonatomic) long long axis;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTintColor:(id)a0;
- (void)setAlignmentCenter;
- (void)setHorizontalAlignmentLeftWithInset:(double)a0;
- (void).cxx_destruct;

@end

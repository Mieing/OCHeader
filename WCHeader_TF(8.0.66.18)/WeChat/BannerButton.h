@class UIImageView, UILabel;

@interface BannerButton : UIButton

@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *customTitleLabel;
@property (retain, nonatomic) UIImageView *headImageView;
@property (nonatomic) double contentMarginLeft;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRightArrowImage:(id)a0;
- (void)setTitleIconImage:(id)a0;
- (void)setTitleText:(id)a0;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;

@end

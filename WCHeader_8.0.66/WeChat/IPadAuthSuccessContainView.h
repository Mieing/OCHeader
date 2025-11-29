@class UILabel, MMWebImageView;

@interface IPadAuthSuccessContainView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) MMWebImageView *appIconImgView;
@property (nonatomic) double limitWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)updateWithAppIconUrl:(id)a0 nickName:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

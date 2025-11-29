@class UIImageView, UIView, MASConstraint, UILabel;

@interface AWESearchFeelGoodFloatingIconSpringView : UIView

@property (retain, nonatomic) UIView *iconImageView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MASConstraint *titleToIconConstraint;
@property (retain, nonatomic) UILabel *title;

- (void)updateTextWidth:(double)a0;
- (void)updateTextLeftMargin:(double)a0 rightToIconMarginConstraint:(double)a1;
- (void)updateImageInfo:(id)a0;
- (void)updateImageSizeInfo:(double)a0 height:(double)a1;
- (void)updateImageRadiusInfo:(double)a0;
- (void)updateIconWidth:(double)a0;
- (void)updateIconHeight:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end

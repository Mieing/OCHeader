@class UIView, MMUIButton;

@interface BrandMyTabEntranceCardButtons : UIView

@property (retain, nonatomic) MMUIButton *postPictureButton;
@property (retain, nonatomic) UIView *verticalSeparator;
@property (retain, nonatomic) MMUIButton *postTextButton;
@property (retain, nonatomic) UIView *redDot;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpViews;
- (void)setUpLayout;
- (void)layoutSubviews;
- (void)updateContentWithCardInfo:(id)a0 reportInfo:(id)a1;
- (void).cxx_destruct;

@end

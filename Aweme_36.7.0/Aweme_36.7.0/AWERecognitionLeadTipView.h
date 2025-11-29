@class UIImageView, UILabel;

@interface AWERecognitionLeadTipView : UIView

@property (retain, nonatomic) UIImageView *longPressTipImageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *contentLabel;

- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end

@class UILabel, UIView;

@interface AWEGDImageRateErrorView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *errorMsgLabel;
@property (copy, nonatomic) id /* block */ onRetryBlock;

- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)contentViewTapped:(id)a0;

@end

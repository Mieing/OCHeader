@class UIImageView, UILabel, UIButton;

@interface IESECMallErrorView : UIView

@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (copy, nonatomic) id /* block */ retryButtonClick;
@property (nonatomic) long long emptyStyle;

- (void)retryButtonClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end

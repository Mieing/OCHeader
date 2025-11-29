@class UIImageView, IESIMButton, UIView, YYLabel;

@interface IESIMMessageTabBannerView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) YYLabel *tipLabel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESIMButton *closeBtn;
@property (copy, nonatomic) id /* block */ textAction;
@property (copy, nonatomic) id /* block */ closeAction;

- (void)didClickCloseButton:(id)a0;
- (void)updateViewWithAppealModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end

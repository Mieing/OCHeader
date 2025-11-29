@class WCFinderProfilePostTipsInfo, UILabel, MMWebImageView, UIButton;

@interface WCFinderStreamProfileHeaderPostTipsView : MMUIView

@property (retain, nonatomic) WCFinderProfilePostTipsInfo *info;
@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *reasonLabel;
@property (retain, nonatomic) UIButton *postButton;
@property (copy, nonatomic) id /* block */ clickPostBtnBlock;
@property (copy, nonatomic) id /* block */ clickSelfViewBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubViews;
- (void)setupUserAction;
- (void)updateWithInfo:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onClickPostButton;
- (void)onClickTipsView;
- (void).cxx_destruct;

@end

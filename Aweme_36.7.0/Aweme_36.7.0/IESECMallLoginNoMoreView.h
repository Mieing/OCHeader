@class UIButton, UIImageView, IESECMallLoginModel;

@interface IESECMallLoginNoMoreView : UIView

@property (nonatomic) long long style;
@property (retain, nonatomic) UIButton *loginButton;
@property (retain, nonatomic) UIImageView *guideImageView;
@property (retain, nonatomic) IESECMallLoginModel *model;
@property (nonatomic) BOOL hasReportShow;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)clickLogin;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)show;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end

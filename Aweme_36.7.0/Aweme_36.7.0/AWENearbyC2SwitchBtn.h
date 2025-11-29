@class CAGradientLayer, UIImageView, UILabel, UIView, UIButton;

@interface AWENearbyC2SwitchBtn : UIView

@property (retain, nonatomic) UIImageView *leftIconImageView;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UIView *verticaLine;
@property (retain, nonatomic) UIImageView *rightIconImageView;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIButton *leftBtnBgView;
@property (retain, nonatomic) UIButton *rightBtnBgView;
@property (retain, nonatomic) CAGradientLayer *borderLayer;
@property (copy, nonatomic) id /* block */ clickBlk;
@property (retain, nonatomic) UIView *bgColorView;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL hasHeadAreaImage;
@property (nonatomic) long long state;
@property (nonatomic) long long animationType;

- (void)addGesture;
- (void)setTextHidden:(BOOL)a0;
- (void)updatehasHeadAreaImage:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 clickBlock:(id /* block */)a1;
- (void)updateSwitchBtnBgStyle:(long long)a0;
- (void)clickLeft;
- (void)clickRight;
- (void)setupGradientBorder;
- (void)setupWhiteBorder;
- (void).cxx_destruct;
- (void)setupUI;

@end

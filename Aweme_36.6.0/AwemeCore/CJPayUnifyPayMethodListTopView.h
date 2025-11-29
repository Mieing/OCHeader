@class UIImageView, UILabel, UIView, CJPayDefaultChannelShowConfig;

@interface CJPayUnifyPayMethodListTopView : UIView

@property (retain, nonatomic) CJPayDefaultChannelShowConfig *showConfig;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *payMethodContainerView;
@property (retain, nonatomic) UIImageView *payMethodImageView;
@property (retain, nonatomic) UILabel *payMethodLabel;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL isShieldScroll;
@property (copy, nonatomic) id /* block */ clickActionBlock;

- (void)updateWithShowConfig:(id)a0;
- (void)resetPayMethodContainerViewStatusWithIsShow:(BOOL)a0 isShieldScroll:(BOOL)a1;
- (void)p_payMethodContainerViewAnimationWithIsShow:(BOOL)a0;
- (void)animationWithShowConfig:(id)a0 proportion:(double)a1;
- (void)p_clickPayMethod;
- (void)setPayMethodAreaHiddenStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleLabelText:(id)a0;
- (void)setUpUI;

@end

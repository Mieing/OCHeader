@class UIColor, NSString, UIImageView, CAShapeLayer, NSAttributedString, UIButton;

@interface CJPayTwoDividedButtonView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIButton *rightBtn;
@property (retain, nonatomic) UIButton *leftBtn;
@property (retain, nonatomic) UIImageView *downloadImgView;
@property (retain, nonatomic) CAShapeLayer *rShapeLayer;
@property (retain, nonatomic) CAShapeLayer *lShapeLayer;
@property (nonatomic) BOOL isSingleBtnMode;
@property (copy, nonatomic) NSString *bgImageName;
@property (retain, nonatomic) NSAttributedString *rightAttributedString;
@property (retain, nonatomic) NSAttributedString *leftAttributedString;
@property (nonatomic) SEL lAction;
@property (nonatomic) SEL rAction;
@property (weak, nonatomic) id target;
@property (retain, nonatomic) UIColor *leftBackgroundColor;
@property (retain, nonatomic) UIColor *rightBackgroundColor;
@property (nonatomic) double animateTime;
@property (nonatomic) double leftButtonWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rightBtnTitle;
- (id)trackBtnName;
- (id)leftBtnTitle;
- (void)switchToSingleButtonMode;
- (void)updateRightBtnTitle:(id)a0 font:(id)a1 color:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rightAttributedString:(id)a1 leftAttributedString:(id)a2 target:(id)a3 rightAction:(SEL)a4 leftAction:(SEL)a5;
- (void)setLeftBtnBackgroundImage:(id)a0;
- (void)p_leftButtonClicked:(BOOL)a0;
- (double)p_leftButtonWidth;
- (id)p_rightPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hasCorner:(BOOL)a1;
- (id)p_leftPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hasCorner:(BOOL)a1;
- (double)p_animateTime;
- (id)p_createRightButtonWithColor:(id)a0;
- (void)p_rightButtonClicked;
- (id)p_createLeftButtonWithColor:(id)a0;
- (void)p_leftButtonClicked;
- (void)updateLeftBtnTitle:(id)a0 font:(id)a1 color:(id)a2;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)willMoveToWindow:(id)a0;

@end

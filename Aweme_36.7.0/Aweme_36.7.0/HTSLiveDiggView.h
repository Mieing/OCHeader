@class NSString, CAShapeLayer, UIImageView, UILabel, UIView;

@interface HTSLiveDiggView : IESLiveImageView <CAAnimationDelegate>

@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *countLabelBgView;
@property (nonatomic) BOOL isDoubleDigg;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *avatorImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ownDigg:(BOOL)a1 iconImage:(id)a2 avatorImage:(id)a3 newDiggStrategy:(BOOL)a4 showSwitch:(BOOL)a5;
- (void)setupIconImageWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 iconImage:(id)a1;
- (void)setupAvatorImageWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 avatorImage:(id)a1 strokeColor:(id)a2 borderWidth:(double)a3;
- (void)setupDoubleDiggAvatorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 avatorImage:(id)a1 strokeColor:(id)a2 borderWidth:(double)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ownDigg:(BOOL)a1 iconImage:(id)a2 avatorImage:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 diggCount:(long long)a1 iconImage:(id)a2 avatorImage:(id)a3;
- (void)playAvatorIconChangeAnimaWithNewStrategy:(unsigned long long)a0;
- (void)DF_playAvatorIconChangeAnimaWithNewStrategy:(float)a0 uiSimplifyLevel:(unsigned long long)a1;
- (void)playAvatorIconChangeAnima;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;

@end

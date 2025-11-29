@class NSString, UIImageView, UILabel, UIView, MASConstraint;

@interface AWEProfileBottomDiggBubbleButton : UIButton <CAAnimationDelegate, AWEProfileBottomBubbleViewProtocol>

@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (copy, nonatomic) id /* block */ onButtonTappedBlock;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *unDiggView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) MASConstraint *diggViewLeft;
@property (retain, nonatomic) MASConstraint *diggViewMiddle;
@property (retain, nonatomic) MASConstraint *diggRightToLabel;
@property (retain, nonatomic) MASConstraint *diggRightToBackview;
@property (nonatomic) BOOL isBubbleShrinked;
@property (nonatomic) BOOL shouldShowText;
@property (retain, nonatomic) UIView *customMaskView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTapBlock:(id /* block */)a0;
- (void)playDiggAnimation:(BOOL)a0;
- (void)updateViewWithDigged:(BOOL)a0 text:(id)a1;
- (id)initWithText:(id)a0 shouldShow:(BOOL)a1;
- (void)setDisMissCompletionBlock:(id /* block */)a0;
- (void)playFillAnimation;
- (void)playReverseAnimation;
- (void)playDisMissAnimation;
- (id)diggImage:(BOOL)a0;
- (BOOL)shouldDiggViewInMiddle:(BOOL)a0;
- (void)activateDiggInMiddleConstraint:(BOOL)a0;
- (void)playLabelAnimation:(BOOL)a0;
- (void)setMaskViewSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setUpUI;

@end

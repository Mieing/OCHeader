@class UIImageView, UILabel, UIView;

@interface IESECPdpFindSameAnimationView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) long long viewStyle;

- (struct CGSize { double x0; double x1; })animationSize;
- (id)normalText;
- (id)animationText;
- (struct CGSize { double x0; double x1; })normalSize;
- (void)stage3AnimationWithComplectionBlock:(id /* block */)a0;
- (void)stage2AnimationWithComplectionBlock:(id /* block */)a0;
- (void)stage1AnimationWithComplectionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (void)setupUI;

@end

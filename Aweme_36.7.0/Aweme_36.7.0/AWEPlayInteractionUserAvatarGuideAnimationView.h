@class NSString, UIImageView, UILabel, UIView;

@interface AWEPlayInteractionUserAvatarGuideAnimationView : UIView <AWEPlayInteractionUserAvatarGuideAnimationViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *labelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sendMessageIconImage;

- (void)playGuideAnimationWithCompletion:(id /* block */)a0;
- (void)playGuideAnimationAction;
- (void)playReverseGuideAnimation;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetUI;

@end

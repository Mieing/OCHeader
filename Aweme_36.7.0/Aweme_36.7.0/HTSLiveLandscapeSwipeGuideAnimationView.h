@class UIImageView, UILabel;
@protocol IESLiveWebPPlayer;

@interface HTSLiveLandscapeSwipeGuideAnimationView : UIView

@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationView;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)setupViewWithTitle:(id)a0 animationName:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)initWithTitle:(id)a0 animationName:(id)a1 animationSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;

@end

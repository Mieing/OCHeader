@class UIImageView, UILabel;
@protocol IESLiveWebPPlayer;

@interface IESLiveInteractiveApplyView : UIView

@property (retain, nonatomic) UIImageView *applyImageView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationView;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)setupViewsWithContainerWidth:(double)a0;
- (void)showApplyingAnimationView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithStatus:(unsigned long long)a0;

@end

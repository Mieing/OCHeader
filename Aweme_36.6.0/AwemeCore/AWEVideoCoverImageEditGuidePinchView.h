@class BDImageView, UILabel, UIView;

@interface AWEVideoCoverImageEditGuidePinchView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) BDImageView *animationView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long animationLoopCount;

+ (BOOL)needShowEditGuidePinchView;
+ (void)setHasShowEditGuidePinchView;

- (void)p_setupConstraint;
- (void)removeGuideView;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tapAction:(id)a0;

@end

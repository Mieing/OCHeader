@class UIImageView, UIView;

@interface AWEScreenCastInnerFeedButton : UIButton

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *defaultView;
@property (retain, nonatomic) UIImageView *selectedView;
@property (nonatomic) unsigned long long buttonStatus;

- (void)performAnimationWithFromView:(id)a0 toView:(id)a1;
- (void)changeStatusWithoutAnimationWithFromView:(id)a0 toView:(id)a1;
- (id)initWithDefaultImage:(id)a0 selectedImage:(id)a1;
- (void)changeButtonTypeWithAnimation:(BOOL)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end

@class AWEHPTabBarButtonItemComponentModel, UIView;
@protocol AWEHPTabBarButtonItemComponentContentProtocol;

@interface AWEHPTabBarButtonItemComponent : UIView

@property (retain, nonatomic) UIView<AWEHPTabBarButtonItemComponentContentProtocol> *contentView;
@property (retain, nonatomic) AWEHPTabBarButtonItemComponentModel *model;

+ (id)createComponentWithModel:(id)a0;

- (void)switchToLightModeWithProgress:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })buttonContentRectInWindow;
- (id)initWithContent:(id)a0 model:(id)a1;
- (void)performShowActionWithForbidAnimate:(BOOL)a0 completion:(id /* block */)a1;
- (void)performHideAnimationWithForbidAnimate:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end

@class AWEHPTabBarButtonItemComponent;

@interface AWEHPTabBarButtonItemComponentViewModel : NSObject

@property (retain, nonatomic) AWEHPTabBarButtonItemComponent *component;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) AWEHPTabBarButtonItemComponent *oldComponent;

- (void)switchToLightModeWithProgress:(double)a0;
- (void)showComponentOnView:(id)a0 withModel:(id)a1 needAnimate:(BOOL)a2 performOutSideAnimation:(id /* block */)a3;
- (void)hideComponentWithNeedAnimate:(BOOL)a0 performOutSideAnimation:(id /* block */)a1;
- (void).cxx_destruct;

@end

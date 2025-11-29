@class NSString, UIImageView, AWEHPChannelImageModel, AWEHPBottomTabUIConfigModel;

@interface AWENormalModeTabBarGeneralImageViewModel : NSObject <CAAnimationDelegate>

@property (retain, nonatomic) AWEHPBottomTabUIConfigModel *config;
@property (retain, nonatomic) AWEHPChannelImageModel *imageModel;
@property (retain, nonatomic) UIImageView *oldImageView;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_updateImageView;
- (void)showWithImageModel:(id)a0 changeImageAnimateStyle:(long long)a1;
- (void)updateAvatarBadgeHollowDisplay:(BOOL)a0 withContainerSize:(struct CGSize { double x0; double x1; })a1 withImageCenter:(struct CGPoint { double x0; double x1; })a2 withBadgeOrigin:(struct CGPoint { double x0; double x1; })a3;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithConfig:(id)a0;
- (void)hideImage;

@end

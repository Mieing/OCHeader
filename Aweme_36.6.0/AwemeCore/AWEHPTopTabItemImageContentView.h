@class NSString, UIImageView, AWEHPChannelImageModel, AWEHPTopTabRedDotUIConfig;

@interface AWEHPTopTabItemImageContentView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) AWEHPTopTabRedDotUIConfig *redDotUIConfig;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) double imageSize;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) AWEHPChannelImageModel *imageModel;
@property (retain, nonatomic) UIImageView *oldImageView;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_updateImageView;
- (id)initWithImageSize:(double)a0 withRedDotConfig:(id)a1;
- (void)showWithImageConfig:(id)a0;
- (void)updateAvatarBadgeHollowDisplay:(BOOL)a0 withContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)hideImage;

@end

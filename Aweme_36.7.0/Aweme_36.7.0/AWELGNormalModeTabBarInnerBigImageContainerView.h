@class UIImageView, AWELGNormalModeTabBarFullAbilityViewUIConfig;

@interface AWELGNormalModeTabBarInnerBigImageContainerView : UIView <AWELGNormalModeTabBarFullAbilityInnerContainerViewProtocol>

@property (retain, nonatomic) AWELGNormalModeTabBarFullAbilityViewUIConfig *UIConfig;
@property (retain, nonatomic) UIImageView *bigImageView;

- (struct CGPoint { double x0; double x1; })badgeBasePosition;
- (id)initWithUIConfig:(id)a0;
- (void)p_loadView;
- (BOOL)forbidBadgeShow;
- (void)updateImageHeight;
- (void)refreshImage;
- (struct CGSize { double x0; double x1; })p_imageViewSizeWithHeight:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)currentImage;

@end

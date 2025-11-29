@class UIColor, AWEGradientView;
@protocol AWEProfileBannerBGCoverMaskViewDelegate;

@interface AWEProfileBannerBGCoverMaskView : UIView

@property (retain, nonatomic) UIColor *lightColor;
@property (retain, nonatomic) UIColor *darkColor;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (nonatomic) long long direction;
@property (weak, nonatomic) id<AWEProfileBannerBGCoverMaskViewDelegate> delegate;
@property (nonatomic) double startGradientRatioX;

+ (id)maskViewWithLightColor:(id)a0 darkColor:(id)a1;
+ (id)defaultMaskView;

- (void)updateLightColor:(id)a0 darkColor:(id)a1;
- (void)p_refreshColor;
- (id)p_getColor;
- (void)refreshGradientDirection:(long long)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

@class AWETeenProfileHeaderActionController, UIImageView, UIView;

@interface AWETeenUserProfileCoverView : UIView

@property (retain, nonatomic) AWETeenProfileHeaderActionController *actionController;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *coverMaskView;
@property (readonly, nonatomic, getter=isCoverImageViewLoaded) BOOL coverImageViewLoaded;

+ (id)coverMaskView;
+ (double)maskViewHeight;
+ (double)bannerNormalHeight;
+ (double)bannerMaxHeight;
+ (double)currentHeight;
+ (id)timingFunction;
+ (double)bannerHeight;
+ (double)currentWidth;

- (void)coverTapped;
- (void)updateBannerImageView:(double)a0 imageHeight:(double)a1 bannerHeight:(double)a2 scrollUp:(BOOL)a3;
- (void)configWithActionController:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

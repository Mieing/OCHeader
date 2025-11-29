@class UIImageView;

@interface AWENotchLogoView : UIView

@property (retain, nonatomic) UIImageView *logoImageView;

+ (Class)aAWEExperienceShowLogoAtNotchAdapterClass;

- (void)onApplicationDidChangeStatusBarOrientation:(id)a0;
- (double)displayZoomScale;
- (id)aAWEExperienceShowLogoAtNotchAdapter;
- (struct CGSize { double x0; double x1; })scaleCGSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void)setUpUI:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

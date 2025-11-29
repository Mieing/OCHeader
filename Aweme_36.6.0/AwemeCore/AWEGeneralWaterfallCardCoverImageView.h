@class UIImageView, UIVisualEffectView, AWEAwemeModel;

@interface AWEGeneralWaterfallCardCoverImageView : BDImageView

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIImageView *contentImgView;
@property (retain, nonatomic) UIImageView *backgroundImgView;
@property (nonatomic) BOOL isUseGassuBlur;
@property (nonatomic) double blurOpacity;
@property (nonatomic) BOOL useNormalCover;
@property (nonatomic) long long coverContentMode;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (id)colorWithRGBString:(id)a0 defaultColor:(id)a1;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)createBackgroundImgView;
- (void)updateCoverImageWithModel:(id)a0 IsVideo:(BOOL)a1 srSize:(struct CGSize { double x0; double x1; })a2;
- (void)p_adjustFillModeAccordingToRatio:(double)a0;
- (void)updateCoverImageWithModel:(id)a0 IsVideo:(BOOL)a1;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentMode:(long long)a0;
- (void)layoutSubviews;
- (id)coverImage;

@end

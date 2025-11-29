@class UIImageView, UIImage, UILabel, UIView;

@interface AWEBigFontPreview : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *tabBarView;
@property (retain, nonatomic) UIView *bottomBarView;
@property (retain, nonatomic) UIView *descriptionZoneView;
@property (retain, nonatomic) UIView *anchorPointView;
@property (retain, nonatomic) UIView *elementView;
@property (retain, nonatomic) UIView *shadowView;

- (long long)rootViewVerticalBreakPoint;
- (long long)rootViewHorizontalBreakPoint;
- (void)updatePreviewWithIndex:(unsigned long long)a0;
- (void)setupShadow;
- (id)tabbarItemView:(id)a0 isSelect:(BOOL)a1;
- (double)scaleForPreview:(double)a0;
- (id)elementItemViewWithImage:(id)a0 description:(id)a1;
- (void)updateConfigWithIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end

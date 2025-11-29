@class UIImageView, AWEAddWidgetGuideModel;

@interface AWEAddWidgetGuideCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *guideImageView;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) AWEAddWidgetGuideModel *model;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadBizUIAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)aAWEPadBizUIAdapter;
- (struct CGSize { double x0; double x1; })guideImageSize;
- (double)contentImageTopMargin;
- (struct CGSize { double x0; double x1; })contentImageSize;
- (BOOL)isIphoneLandscape;
- (void)doAnimation:(double)a0 show:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end

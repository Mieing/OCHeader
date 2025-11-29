@class NSString, UIImageView, NSTimer, UIView;

@interface AWEGDSkeletonView : UIView

@property (weak, nonatomic) UIImageView *headImgView;
@property (weak, nonatomic) UIView *headBlockView;
@property (weak, nonatomic) UIView *grouponDetailBlockView;
@property (weak, nonatomic) UIView *footerBlockView;
@property (weak, nonatomic) UIImageView *lightCover;
@property (retain, nonatomic) NSTimer *lightSweepTimer;
@property (copy, nonatomic) NSString *headImgUrl;

- (void)setupHeadImg;
- (void)setupHeadBlockView;
- (void)setupGrouponDetailBlockView;
- (void)setupLightCover;
- (void)lightSweepAnimation;
- (id)createGrayLineAddSuperView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;

@end

@class AWENearbyHalfStyleConfigModel, NSString, UIImageView, AWENearbyOpenSubPageModel;

@interface AWEGrouponC2TopAngleMaskView : UIView

@property (copy, nonatomic) NSString *arrowColor;
@property (retain, nonatomic) UIImageView *targetImageView;
@property (retain, nonatomic) UIImageView *arrowHeadImgView;
@property (retain, nonatomic) UIImageView *arrowNockImgView;
@property (nonatomic) double pageFullPercent;
@property (nonatomic) unsigned long long arrowStyle;
@property (retain, nonatomic) AWENearbyOpenSubPageModel *subpageModel;
@property (nonatomic) BOOL isSloganShowing;
@property (retain, nonatomic) AWENearbyHalfStyleConfigModel *config;

+ (BOOL)canShowGrouponTabSloganWithSubpageModel:(id)a0;

- (void)updatePageFullPercent:(double)a0;
- (void)setupRichArrowWithTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetView:(id)a1 offset:(double)a2;
- (void)setupNormalArrowWithTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetView:(id)a1 offset:(double)a2;
- (void)downLoadRichArrowWithStyleConfig:(id)a0 completion:(id /* block */)a1;
- (void)loadImageWithUrlModel:(id)a0 imageView:(id)a1 completion:(id /* block */)a2;
- (void)layoutNormalArrowWithTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetView:(id)a1 offset:(double)a2;
- (void)showNormalArrowWithSloganStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 subpageModel:(id)a1;
- (void)showWithTargetView:(id)a0 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 offset:(double)a2;
- (void)updateWithTargetView:(id)a0 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dismiss;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end

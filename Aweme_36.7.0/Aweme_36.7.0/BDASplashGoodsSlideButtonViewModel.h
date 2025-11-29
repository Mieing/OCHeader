@class BDImage;

@interface BDASplashGoodsSlideButtonViewModel : BDASplashComplianceBaseViewModel

@property (retain, nonatomic) BDImage *goodsImage;
@property (retain, nonatomic) BDImage *flagshipImage;
@property (retain, nonatomic) BDImage *backgroundImage;
@property (retain, nonatomic) BDImage *animatedGoodsImage;
@property (retain, nonatomic) BDImage *atmosphereAnimationImage;
@property (retain, nonatomic) BDImage *liveStoreStatusImage;
@property (retain, nonatomic) BDImage *liveTitleStatusImage;
@property (retain, nonatomic) BDImage *liveHeadImage;

+ (void)downloadResourceWithComplianceModel:(id)a0 downloadBlock:(id /* block */)a1;

- (BOOL)loadResource;
- (BOOL)checkParams;
- (id)getViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1;
- (void).cxx_destruct;

@end

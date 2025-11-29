@class BDASplashMaterialViewModel;
@protocol BDASplashMaterialViewDelegate;

@interface BDASplashMaterialBaseView : BDASplashBaseView

@property (weak, nonatomic) id<BDASplashMaterialViewDelegate> delegate;
@property (retain, nonatomic) BDASplashMaterialViewModel *model;

- (void)loadResource;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 viewModel:(id)a2;
- (id)videoDurationParams;
- (double)videoDuration;
- (void).cxx_destruct;
- (void)play;

@end

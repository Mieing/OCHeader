@class BDASplashSlideSideView;

@interface BDASplashSlideSideContainer : BDASplashComplianceBaseSlideView

@property (retain, nonatomic) BDASplashSlideSideView *slideSideView;

- (void)loadAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (BOOL)enableSlide:(id)a0;
- (void).cxx_destruct;
- (void)setupView;

@end

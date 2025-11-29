@class IESLLPOIShelfContainerComponentViewModel, IESLLPOIShelfNavigationBarModel;

@interface IESLLPOIShelfNavigationBarView : UIView

@property (retain, nonatomic) IESLLPOIShelfContainerComponentViewModel *viewModel;
@property (retain, nonatomic) IESLLPOIShelfNavigationBarModel *navBarModel;

- (void)loadUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 navBarModel:(id)a2;
- (void)loadTitleImg;
- (void)loadCarousel;
- (void)loadCommerceEntry;
- (double)estimateCarouselViewWidth;
- (void)onTapCommerceEntry;
- (void).cxx_destruct;

@end

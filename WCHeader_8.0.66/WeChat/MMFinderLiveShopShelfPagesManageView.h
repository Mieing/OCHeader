@class NSArray, UIView;
@protocol MMFinderLiveShopShelfPagesManageViewEdgeEventDelegate, MMFinderLiveShopShelfPageCornerCropper;

@interface MMFinderLiveShopShelfPagesManageView : UIView

@property (weak, nonatomic) id<MMFinderLiveShopShelfPagesManageViewEdgeEventDelegate> edgeEventDelegate;
@property (weak, nonatomic) id<MMFinderLiveShopShelfPageCornerCropper> cornerCropper;
@property (retain, nonatomic) NSArray *pages;
@property (readonly, nonatomic) UIView *currentPage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)edgePanGesture:(id)a0;
- (void)layoutSubviews;
- (void)pushPage:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)popCurrentPageAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)cleanMiddlePages;
- (void).cxx_destruct;

@end

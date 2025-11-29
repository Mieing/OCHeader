@class UIButton, NSString, UIView;

@interface AWEPadFullPageFeedAdapter : NSObject <AWEPadFullPageFeedAdapter>

@property (retain, nonatomic) UIView *leftContentView;
@property (weak, nonatomic) UIView *richContentView;
@property (retain, nonatomic) UIButton *backIcon;
@property (nonatomic) BOOL hasAddObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowNewDetailAlbumForReferString:(id)a0 model:(id)a1;
+ (Class)weakTargetClass;

- (void)updateLayoutForRotate;
- (void)performViewDidLayoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })collectionViewFrameForView:(id)a0;
- (double)richContentViewWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullPageSliderFrameWithView:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 innerAlbumContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 topBarHeight:(double)a3;
- (void)shouldResponseToPinchWithCompletion:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pinch_getOutTargetFrameForStartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageTargetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 innerContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })albumDetail_getMaskFrameForCurrentImageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 albumStartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentOffset:(double)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })albumDetail_getMaskTargetFrameForAlbumEndFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageActualSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)shouldOptPreviewInteractionViewForPadWithModel:(id)a0;
- (BOOL)enablePreviewViewScroll;
- (BOOL)needSetCellColor;
- (BOOL)enablePadTransition;
- (BOOL)disableShowTopBarViewForPinchTransition;
- (double)detailViewWidth;
- (void)didTapBack;
- (double)padSpecialWHRationForModel:(id)a0;
- (id)padRatioLimit;
- (double)backIconTopOffset;
- (double)fullPageScreenWidth;
- (double)fullPageScreenHeight;
- (void).cxx_destruct;
- (void)addObserver;
- (BOOL)isHorizontal;
- (void)updateColor;
- (id)weakTarget;

@end

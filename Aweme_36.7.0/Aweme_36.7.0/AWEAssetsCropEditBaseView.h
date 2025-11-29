@class AWEAssetsCropMaskView, NSArray, NSString, UIScrollView, AWEAssetsFragmentInfo;

@interface AWEAssetsCropEditBaseView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *containerScrollView;
@property (retain, nonatomic) AWEAssetsCropMaskView *cropMaskView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropMaskRect;
@property (retain, nonatomic) AWEAssetsFragmentInfo *fragment;
@property (nonatomic) BOOL didModified;
@property (readonly, copy, nonatomic) NSArray *currentCrops;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (nonatomic) BOOL forbidHandleZoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshFrame;
- (void)handleContainerViewTapped:(id)a0;
- (double)limitYWithHeight:(double)a0;
- (struct CGSize { double x0; double x1; })contentSizeWithUpdate:(BOOL)a0;
- (void)reverseCrops;
- (id)assetContentView;
- (void)scrollViewDidChangeMovingState:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fragment:(id)a1;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)reset;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (double)expectedHeight;

@end

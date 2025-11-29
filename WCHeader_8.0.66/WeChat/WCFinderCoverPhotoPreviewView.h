@class NSString, MMUIScrollView, MMWebImageView, UIView, WCFinderCropRectModel;

@interface WCFinderCoverPhotoPreviewView : WCFinderCoverBasePreviewView <UIScrollViewDelegate> {
    MMUIScrollView *_scrollView;
    UIView *_shadowView;
    UIView *_blurView;
    WCFinderCropRectModel *_cropRectModel;
}

@property (retain, nonatomic) MMWebImageView *photoImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)cropRectModel;
- (id)blurView;
- (id)scrollView;
- (id)shadowView;
- (void)adjustShadowViewMask:(id)a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)renderThumbImageFrom:(id)a0;
- (void)loadPreviewByImagePath:(id)a0 cropRectModel:(id)a1 fromVC:(id)a2 loadImageSucBlock:(id /* block */)a3;
- (void)scrollViewDidScroll:(id)a0;
- (void)updateCropRectModel;
- (void)curPreviewCoverImage:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCoverVisualRectByImage:(id)a0;
- (void)_scrollViewContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)refreshPlayerPreviewByModeChange:(BOOL)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })getPlayerVideoSize;
- (void)curFullCoverImage:(id /* block */)a0;
- (id)getCurrentImageResult;
- (void)setScrollView:(id)a0;
- (void)setShadowView:(id)a0;
- (void)setBlurView:(id)a0;
- (void)setCropRectModel:(id)a0;
- (void).cxx_destruct;

@end

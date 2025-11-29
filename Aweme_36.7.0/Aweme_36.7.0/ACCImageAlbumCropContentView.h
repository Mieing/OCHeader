@class NSString, ACCImageAlbumEditImageInputInfo, UIImageView, CAShapeLayer, UIScrollView, UIView, ACCImageAlbumItemModel;
@protocol ACCImageAlbumCropContentViewDelegate;

@interface ACCImageAlbumCropContentView : UIView <UIScrollViewDelegate>

@property (nonatomic) unsigned long long cropRatio;
@property (retain, nonatomic) ACCImageAlbumItemModel *imageAlbumItem;
@property (retain, nonatomic) ACCImageAlbumEditImageInputInfo *imageEditOriginalImage;
@property (nonatomic) double zoomScale;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } accessCropRect;
@property (nonatomic) struct CGSize { double width; double height; } originalImageSize;
@property (retain, nonatomic) UIScrollView *containerScrollView;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UIView *cropView;
@property (retain, nonatomic) CAShapeLayer *fillLayer;
@property (retain, nonatomic) UIView *topHorizontalLineView;
@property (retain, nonatomic) UIView *bottomHorizontalLineView;
@property (retain, nonatomic) UIView *topVerticalLineView;
@property (retain, nonatomic) UIView *bottomVerticalLineView;
@property (retain, nonatomic) UIView *bubbleView;
@property (nonatomic) BOOL croppingImageIsDragging;
@property (weak, nonatomic) id<ACCImageAlbumCropContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupView;
- (id)p_getOriginalImage;
- (void)updateOriginalImageInfoIfNeeded:(id)a0;
- (void)p_addCropFillLayer;
- (void)p_addCropAlignLine;
- (void)p_resetImageViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_cropViewFrame:(unsigned long long)a0;
- (void)p_setupBubbleView;
- (void)p_resetCropFillLayer;
- (void)p_resetCropAlignLine;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_imageViewFrame;
- (void)p_resetContentInsets;
- (void)p_selectionFeedback;
- (void)p_removeBubbleView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_originalCropViewFrameWithRatio:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_cropViewFrameWithRatio:(double)a0;
- (id)initWithData:(id)a0 imageEditOriginalImage:(id)a1;
- (void)updateCropView:(unsigned long long)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end

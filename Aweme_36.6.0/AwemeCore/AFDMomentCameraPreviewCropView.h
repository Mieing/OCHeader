@class UIScrollView, UIImageView, NSString;
@protocol AFDMomentCameraPreviewCropViewDelegate;

@interface AFDMomentCameraPreviewCropView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *containerScrollView;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastDisplayRect;
@property (weak, nonatomic) id<AFDMomentCameraPreviewCropViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showGuide;
- (void)configImage:(id)a0;
- (void)hiddenGuide;
- (id)p_guideView;
- (void)p_resetWithoutImage;
- (void)p_relayoutImageView;
- (void)p_postDisplayRectChangedIfNeed;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_getCurrentDisplayRect;
- (struct CGSize { double x0; double x1; })contentImageVisibileSize;
- (void)p_resetContentOffset;
- (void)configPreviewZoomable:(BOOL)a0;
- (void)p_setupUI;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;

@end

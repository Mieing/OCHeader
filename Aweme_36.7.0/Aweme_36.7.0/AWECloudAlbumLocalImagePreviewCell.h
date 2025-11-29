@class UIImageView, NSString;

@interface AWECloudAlbumLocalImagePreviewCell : AWECloudAlbumPreviewCell <UIScrollViewDelegate>

@property (nonatomic, getter=isTracking) BOOL tracking;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetCell;
- (void)setupZoomScrollView;
- (void)configWithModel:(id)a0 playFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleDoubleTap:(id)a0;
- (void)setupUI;

@end

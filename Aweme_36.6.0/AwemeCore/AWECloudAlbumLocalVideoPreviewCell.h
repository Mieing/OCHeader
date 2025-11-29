@class NSString, UIImageView, UIImage, UIView;

@interface AWECloudAlbumLocalVideoPreviewCell : AWECloudAlbumPreviewCell <UIScrollViewDelegate>

@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) UIImageView *pauseImageView;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetCell;
- (void)setupZoomScrollView;
- (void)configWithModel:(id)a0 playFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setPlayerLayer:(id)a0 withPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)removeCoverImageView;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;
- (BOOL)play;
- (BOOL)pause;
- (void)prepareForReuse;
- (BOOL)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleDoubleTap:(id)a0;

@end

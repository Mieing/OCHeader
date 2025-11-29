@class EcAsset, UIScrollView;

@interface AWECloudAlbumPreviewCell : UICollectionViewCell

@property (retain, nonatomic) EcAsset *model;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playFrame;
@property (retain, nonatomic) UIScrollView *zoomScrollView;
@property (copy, nonatomic) id /* block */ fetchIcloudCompletion;

- (void)configWithModel:(id)a0;
- (void)resetCell;
- (void)configWithModel:(id)a0 playFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setPlayerLayer:(id)a0 withPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)removeCoverImageView;
- (BOOL)pauseWithoutShowPauseIcon;
- (void).cxx_destruct;
- (BOOL)play;
- (BOOL)pause;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (BOOL)isPlaying;
- (BOOL)stop;
- (BOOL)isPaused;

@end

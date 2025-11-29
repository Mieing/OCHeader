@class UIView, AVPlayer, NSString, AVPlayerItem, WCFinderCropRectModel, UIImageView, AVAssetImageGenerator, MMUIScrollView, AVPlayerLayer, WCFinderPreviewEditVideoCompositionTask, AVAsset;

@interface WCFinderCoverVideoPreviewView : WCFinderCoverBasePreviewView <UIScrollViewDelegate, WCFinderCoverVideoPreviewProtocol> {
    MMUIScrollView *_scrollView;
    UIView *_blurView;
    UIView *_shadowView;
    WCFinderCropRectModel *_cropRectModel;
}

@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) AVPlayer *avPlayer;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) AVAsset *playerAVAsset;
@property (retain, nonatomic) UIView *playerContainerView;
@property (retain, nonatomic) UIView *compositionView;
@property (retain, nonatomic) UIImageView *specialImageView;
@property (retain, nonatomic) AVPlayerItem *playerBkgItem;
@property (retain, nonatomic) AVPlayer *avBkgPlayer;
@property (retain, nonatomic) AVPlayerLayer *playerBkgLayer;
@property (retain, nonatomic) UIView *playerBgkView;
@property (retain, nonatomic) WCFinderPreviewEditVideoCompositionTask *compositionTask;
@property (nonatomic) double keyFrameRate;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) double videoDuration;
@property (retain, nonatomic) AVAssetImageGenerator *coverGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)blurView;
- (id)cropRectModel;
- (id)scrollView;
- (id)shadowView;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adjustShadowViewMask:(id)a0;
- (void)loadPreviewViewByVideoURL:(id)a0 compositionTask:(id)a1 specialImage:(id)a2 cropRectModel:(id)a3;
- (void)_relayoutCompositionView;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)refreshPlayerPreview;
- (void)refreshPlayerPreviewByModeChange:(BOOL)a0;
- (void)_scrollViewContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })getPlayerVideoSize;
- (void)scrollViewDidScroll:(id)a0;
- (void)curPreviewCoverImage:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCoverVisualRectByImage:(id)a0;
- (void)updateCropRectModel;
- (void)curFullCoverImage:(id /* block */)a0;
- (void)setScrollView:(id)a0;
- (void)setBlurView:(id)a0;
- (void)setShadowView:(id)a0;
- (void)setCropRectModel:(id)a0;
- (void).cxx_destruct;

@end

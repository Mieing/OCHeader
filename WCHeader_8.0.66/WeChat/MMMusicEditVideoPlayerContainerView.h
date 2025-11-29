@class NSString, MMMusicFadeOutLayer, MMWebImageView, MMMusicEditVideoPlayerView;

@interface MMMusicEditVideoPlayerContainerView : MMUIView <MMMusicEditVideoPlayerDelegate> {
    MMMusicEditVideoPlayerView *m_playerView;
    MMWebImageView *m_imageView;
    MMWebImageView *m_thumbImageView;
    MMMusicFadeOutLayer *m_playerMaskLayer;
    struct CGSize { double width; double height; } curPresentationSize;
    BOOL hasSetMaskLayer;
    BOOL isLongVideo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initView;
- (void)layoutSubviews;
- (void)setVideoPath:(id)a0 videoInitialTime:(double)a1 videoWidth:(double)a2 videoHeight:(double)a3;
- (void)setMediaInfo:(id)a0 videoInitialTime:(double)a1 shouldPlay:(BOOL)a2;
- (void)setThumbImagePath:(id)a0;
- (void)setThumbImage:(id)a0;
- (void)seek:(double)a0;
- (void)mutePlay;
- (void)pause;
- (double)currentPlayedTime;
- (id)syncCaptureVideo;
- (void)tryToSetMaskLayer;
- (void)setupMaskLayerWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)onVideoPrepareToPlay:(unsigned int)a0 playBackInfo:(id)a1;
- (void)onVideoPlay:(unsigned int)a0;
- (void)onPlayerVideoFrameOut:(id)a0;
- (void).cxx_destruct;

@end

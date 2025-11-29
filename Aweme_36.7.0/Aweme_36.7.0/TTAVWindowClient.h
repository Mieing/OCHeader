@class TTPlayerView2, TTAVPlayer;

@interface TTAVWindowClient : NSObject {
    struct RefPtr<com::ss::ttm::APWindow> { struct APWindow *mValue; } _window;
    TTAVPlayer *_player;
    TTPlayerView2 *_playerView;
    struct RefPtr<vcloud::ttplayer::APWindowShell> { struct APWindowShell *mValue; } _windowShell;
}

- (id)initWithVideoFrameCallback:(id /* block */)a0;
- (void)bindPlayer:(id)a0;
- (void)unbindPlayer;
- (void)setWindowShell:(struct RefPtr<vcloud::ttplayer::APWindowShell> { struct APWindowShell *x0; })a0;
- (void)releaseWindow;
- (struct RefPtr<com::ss::ttm::APWindow> { struct APWindow *x0; })createNewWindow:(long long)a0;
- (void)updateVideoFrame:(int)a0 height:(int)a1;
- (void)setWindowUsage:(long long)a0;
- (void)setRotationOrMirror:(long long)a0 mirror:(long long)a1;
- (void)switchToRenderType:(long long)a0;
- (id)initWithPlayerView:(id)a0 renderType:(long long)a1;
- (struct RefPtr<com::ss::ttm::APWindow> { struct APWindow *x0; })getNativeWindow;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)initWithPlayerView:(id)a0;

@end

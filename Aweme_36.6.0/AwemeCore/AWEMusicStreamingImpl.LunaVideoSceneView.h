@interface AWEMusicStreamingImpl.LunaVideoSceneView : UIView <AWEMusicStreamingImpl.LunaPlayerItemSceneViewProtocol> {
    void /* unknown type, empty encoding */ videoView;
    void /* unknown type, empty encoding */ sceneInfo;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_videContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backImageView;
}

- (id)topSceneView;
- (void)updateSceneInfo:(id)a0;
- (BOOL)hasVideView;
- (void)addWithVideoView:(id)a0;
- (void)removeVideoView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end

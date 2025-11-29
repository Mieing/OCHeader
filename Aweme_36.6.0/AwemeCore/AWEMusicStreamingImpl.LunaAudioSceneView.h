@interface AWEMusicStreamingImpl.LunaAudioSceneView : UIView <AWEMusicStreamingImpl.LunaPlayerItemSceneViewProtocol> {
    void /* unknown type, empty encoding */ sceneInfo;
    void /* unknown type, empty encoding */ containerWidth;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sceneContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_anchorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sceneImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomMask;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shortLyricView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shortLyricViewContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topContainer;
    void /* unknown type, empty encoding */ imageSize;
    void /* unknown type, empty encoding */ sceneContainerViewTop;
}

@property (nonatomic, readonly) BOOL anchorShow;

- (void)clearShrtLyric;
- (void)lyricViewHidden:(BOOL)a0;
- (void)updateShortLyricView;
- (id)topSceneView;
- (void)updateSceneInfo:(id)a0;
- (void)itemDidAppear;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)updateProgress:(double)a0;
- (void)updateDuration:(double)a0;

@end

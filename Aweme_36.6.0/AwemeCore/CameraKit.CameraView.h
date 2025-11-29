@class _TtC9CameraKit17CameraPreviewView, _TtC9CameraKit16CameraHollowView;

@interface CameraKit.CameraView : UIView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_previewView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cameraGridView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_blurImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_torchView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topMaskView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomMaskView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hollowView;
    void /* unknown type, empty encoding */ maskVisibleFrame;
    void /* unknown type, empty encoding */ userVisibleCornerRadius;
    void /* unknown type, empty encoding */ resolutionChangeBlock;
    void /* unknown type, empty encoding */ _defaultPreview16_9Frame;
    void /* unknown type, empty encoding */ originalScreenBrightness;
    void /* unknown type, empty encoding */ isSimulateTorchOn;
    void /* unknown type, empty encoding */ hiddenBlurCompletions;
    void /* unknown type, empty encoding */ addBlurScenes;
}

@property (nonatomic, retain) _TtC9CameraKit17CameraPreviewView *previewView;
@property (nonatomic, retain) _TtC9CameraKit16CameraHollowView *hollowView;
@property (nonatomic) long long currentFrameRationType;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } inputCustomPreviewFrame;
@property (nonatomic) BOOL switchStream;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } userVisibleFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } defaultPreview16_9Frame;

- (void)addBlurImageViewIfNeedWith:(id)a0;
- (void)hideBlurImageViewIfNeedWithCompletion:(id /* block */)a0;
- (void)switchSimulateTorch:(BOOL)a0;
- (void)showGridViewIfNeed:(BOOL)a0;
- (void)changeGridFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)changeFrameRatioToPhotoWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1 autoShowFrameAnimation:(BOOL)a2 showBlurAnimation:(BOOL)a3 blurImage:(id)a4 switchCameraBlock:(id /* block */)a5 completion:(id /* block */)a6;
- (void)changeFrameRatioToVideoWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1 autoShowFrameAnimation:(BOOL)a2 showBlurAnimation:(BOOL)a3 blurImage:(id)a4 switchCameraBlock:(id /* block */)a5 completion:(id /* block */)a6;
- (void)changeFrameRatioToType:(long long)a0 cornerRadius:(double)a1 autoShowFrameAnimation:(BOOL)a2 showBlur:(BOOL)a3 blurImage:(id)a4 customPreviewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 switchCameraBlock:(id /* block */)a6 completion:(id /* block */)a7;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetContentFrameWith:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end

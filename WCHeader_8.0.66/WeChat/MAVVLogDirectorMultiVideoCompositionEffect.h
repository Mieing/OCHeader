@class MAVCopyRendererMetal;

@interface MAVVLogDirectorMultiVideoCompositionEffect : MAVBaseMultiVideoCompositionEffect

@property (nonatomic) float outputWidth;
@property (nonatomic) float outputHeight;
@property (nonatomic) BOOL outputSizeChanged;
@property (retain, nonatomic) MAVCopyRendererMetal *copyRender;
@property (nonatomic) struct __CVBuffer { } *destTexRef;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outputCrop;

- (id)init;
- (void)dealloc;
- (void)setAssetSize:(struct CGSize { double x0; double x1; })a0;
- (int)checkCreateDestTextureFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)renderTracks:(long long)a0 trackList:(id)a1 renderInfo:(id)a2 toPixelBuffer:(struct __CVBuffer { } *)a3;
- (void)addTrackInputTexture:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcCenterCropCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 track:(id)a1;
- (void).cxx_destruct;

@end

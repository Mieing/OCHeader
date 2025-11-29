@class XMMGPUClarityPreProcess, SpatiotemporalDenosingPreProcess, XImage;

@interface XVoipEffectManager : WeVisVoipEffectMgr {
    struct CGSize { double width; double height; } _renderTargetSizeWithoutRotation;
    struct CGSize { double width; double height; } _renderTargetSize;
    struct CGSize { double width; double height; } _yuvTextureSize;
    struct CGSize { double width; double height; } _yuvTexturePoolSize;
    struct CGSize { double width; double height; } _renderingInputSize;
    XImage *_renderingInputTexture;
    XImage *_algorithmInputTexture;
    XImage *_renderingOutputTexture;
    XImage *_renderOutputTextureY;
    XImage *_renderOutputTextureUV;
    struct __CVPixelBufferPool { } *_renderOuputYUVPool;
    struct unique_ptr<rfx::RfxImageCropFilter, std::default_delete<rfx::RfxImageCropFilter>> { struct __compressed_pair<rfx::RfxImageCropFilter *, std::default_delete<rfx::RfxImageCropFilter>> { struct RfxImageCropFilter *__value_; } __ptr_; } _yuvToRGBFilter;
    struct unique_ptr<rfx::RfxImageCropFilter, std::default_delete<rfx::RfxImageCropFilter>> { struct __compressed_pair<rfx::RfxImageCropFilter *, std::default_delete<rfx::RfxImageCropFilter>> { struct RfxImageCropFilter *__value_; } __ptr_; } _rgbImageCropFilter;
    struct unique_ptr<rfx::XRgba2YFilter, std::default_delete<rfx::XRgba2YFilter>> { struct __compressed_pair<rfx::XRgba2YFilter *, std::default_delete<rfx::XRgba2YFilter>> { struct XRgba2YFilter *__value_; } __ptr_; } _rgb2Y;
    struct unique_ptr<rfx::XRgba2UVFilter, std::default_delete<rfx::XRgba2UVFilter>> { struct __compressed_pair<rfx::XRgba2UVFilter *, std::default_delete<rfx::XRgba2UVFilter>> { struct XRgba2UVFilter *__value_; } __ptr_; } _rgb2UV;
    struct unique_ptr<rfx::XMMGPUSpatiotemporalDenosing, std::default_delete<rfx::XMMGPUSpatiotemporalDenosing>> { struct __compressed_pair<rfx::XMMGPUSpatiotemporalDenosing *, std::default_delete<rfx::XMMGPUSpatiotemporalDenosing>> { struct XMMGPUSpatiotemporalDenosing *__value_; } __ptr_; } _denosingFilter;
    struct unique_ptr<rfx::ClarityFilter, std::default_delete<rfx::ClarityFilter>> { struct __compressed_pair<rfx::ClarityFilter *, std::default_delete<rfx::ClarityFilter>> { struct ClarityFilter *__value_; } __ptr_; } _clarityFilter;
    SpatiotemporalDenosingPreProcess *denosingPreProcess;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } sdkSrcRGBData;
    struct ObjectRef<rfx::RfxTexture> { struct RfxTexture *mpObject; } _exportedRenderingOutput;
    struct unique_ptr<rfx::XDenoising, std::default_delete<rfx::XDenoising>> { struct __compressed_pair<rfx::XDenoising *, std::default_delete<rfx::XDenoising>> { struct XDenoising *__value_; } __ptr_; } _liveDenoising;
    struct unique_ptr<rfx::RfxRenderGraph, std::default_delete<rfx::RfxRenderGraph>> { struct __compressed_pair<rfx::RfxRenderGraph *, std::default_delete<rfx::RfxRenderGraph>> { struct RfxRenderGraph *__value_; } __ptr_; } _algorithmGraph;
}

@property (retain, nonatomic) XMMGPUClarityPreProcess *clarityPreProcess;

- (id)initWithSceneType:(long long)a0 modelKeyArray:(id)a1 runDeviceType:(unsigned long long)a2 isAllowFp16:(BOOL)a3;
- (void)dealloc;
- (void)setRGBATextureSize:(struct CGSize { double x0; double x1; })a0 yuvSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)updateExtraOutputTextureSize;
- (struct CGSize { double x0; double x1; })getAlgorithmInputSize;
- (BOOL)updateTexturesWithClipSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)callFaceTrack:(struct shared_ptr<wevision::HardwareBuffer> { struct HardwareBuffer *x0; struct __shared_weak_count *x1; })a0;
- (void)enableClarityFilter:(BOOL)a0 withMode:(int)a1;
- (void)enableSTDenoiseFilter:(BOOL)a0 useSpatioFilter:(BOOL)a1 useMultiTemporalFilter:(BOOL)a2;
- (void)encodeClarifyConvertY:(void *)a0 uv:(void *)a1 toRGB:(void *)a2 graph:(void *)a3 pixelMapping:(const void *)a4;
- (void)encodeConvertY:(void *)a0 uv:(void *)a1 toRGB:(void *)a2 graph:(void *)a3;
- (void)encodeScale:(struct RGTexture **)a0 uv:(struct RGTexture **)a1 toTexture:(struct RGTexture **)a2 graph:(void *)a3 flipX:(BOOL)a4;
- (void)encodeTrackFace:(struct RGTexture **)a0 graph:(void *)a1;
- (void)executeAlgorithm:(struct __CVBuffer { } *)a0;
- (void)encodeOriginalDenosingYTexture:(struct RGTexture **)a0 uvTexture:(struct RGTexture **)a1 toTexture:(struct RGTexture **)a2 graph:(void *)a3 motionLevel:(int)a4 noiseLevel:(int)a5 pixelMapping:(const void *)a6;
- (void)encodeRciEffect:(struct RGTexture **)a0 toTexture:(struct RGTexture **)a1 graph:(void *)a2;
- (void)encodeRGB:(void *)a0 toY:(void *)a1 toUV:(void *)a2 graph:(void *)a3;
- (void *)registerPixelBuffer:(struct __CVBuffer { } *)a0 forPlane:(unsigned int)a1 toGraph:(void *)a2 name:(id)a3;
- (BOOL)encodeDenosing:(struct __CVBuffer { } *)a0 cameraOutputY:(void *)a1 cameraOutputUV:(void *)a2 renderTarget:(void *)a3 toGraph:(void *)a4;
- (void)processVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 toRGBAImage:(id *)a1 yuvPixelBuffer:(struct __CVBuffer **)a2 cropSizeWithoutRotation:(struct CGSize { double x0; double x1; })a3 flipX:(BOOL)a4 shouldIgnoreBackground:(BOOL)a5;
- (void)clean;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

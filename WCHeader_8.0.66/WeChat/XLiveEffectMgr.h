@class XImage, XMMGPUClarityPreProcess, XLiveRenderTargetPool, SpatiotemporalDenosingPreProcess;

@interface XLiveEffectMgr : WeVisLiveEffectMgr {
    struct CGSize { double width; double height; } _renderTargetSizeWithoutRotation;
    struct CGSize { double width; double height; } _renderTargetSize;
    struct CGSize { double width; double height; } _yuvTextureSize;
    struct CGSize { double width; double height; } _yuvTexturePoolSize;
    struct CGSize { double width; double height; } _renderingInputSize;
    XImage *_renderingInputTexture;
    XImage *_algorithmInputTexture;
    XImage *_renderOutputTextureY;
    XImage *_renderOutputTextureUV;
    struct __CVPixelBufferPool { } *_renderOuputYUVPool;
    struct unique_ptr<rfx::RfxImageCropFilter, std::default_delete<rfx::RfxImageCropFilter>> { struct __compressed_pair<rfx::RfxImageCropFilter *, std::default_delete<rfx::RfxImageCropFilter>> { struct RfxImageCropFilter *__value_; } __ptr_; } _yuvToRGBFilter;
    struct unique_ptr<rfx::RfxImageCropFilter, std::default_delete<rfx::RfxImageCropFilter>> { struct __compressed_pair<rfx::RfxImageCropFilter *, std::default_delete<rfx::RfxImageCropFilter>> { struct RfxImageCropFilter *__value_; } __ptr_; } _bgra8ImageCropFilter;
    struct unique_ptr<rfx::RfxImageCropFilter, std::default_delete<rfx::RfxImageCropFilter>> { struct __compressed_pair<rfx::RfxImageCropFilter *, std::default_delete<rfx::RfxImageCropFilter>> { struct RfxImageCropFilter *__value_; } __ptr_; } _rgbImageCropFilter;
    struct unique_ptr<rfx::XRgba2YFilter, std::default_delete<rfx::XRgba2YFilter>> { struct __compressed_pair<rfx::XRgba2YFilter *, std::default_delete<rfx::XRgba2YFilter>> { struct XRgba2YFilter *__value_; } __ptr_; } _rgb2Y;
    struct unique_ptr<rfx::XRgba2UVFilter, std::default_delete<rfx::XRgba2UVFilter>> { struct __compressed_pair<rfx::XRgba2UVFilter *, std::default_delete<rfx::XRgba2UVFilter>> { struct XRgba2UVFilter *__value_; } __ptr_; } _rgb2UV;
    struct unique_ptr<rfx::XMMGPUSpatiotemporalDenosing, std::default_delete<rfx::XMMGPUSpatiotemporalDenosing>> { struct __compressed_pair<rfx::XMMGPUSpatiotemporalDenosing *, std::default_delete<rfx::XMMGPUSpatiotemporalDenosing>> { struct XMMGPUSpatiotemporalDenosing *__value_; } __ptr_; } _denosingFilter;
    struct unique_ptr<rfx::ClarityFilter, std::default_delete<rfx::ClarityFilter>> { struct __compressed_pair<rfx::ClarityFilter *, std::default_delete<rfx::ClarityFilter>> { struct ClarityFilter *__value_; } __ptr_; } _clarityFilter;
    SpatiotemporalDenosingPreProcess *denosingPreProcess;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } sdkSrcRGBData;
    struct unique_ptr<rfx::XDenoising, std::default_delete<rfx::XDenoising>> { struct __compressed_pair<rfx::XDenoising *, std::default_delete<rfx::XDenoising>> { struct XDenoising *__value_; } __ptr_; } _liveDenoising;
    struct unique_ptr<rfx::XLiveCompose, std::default_delete<rfx::XLiveCompose>> { struct __compressed_pair<rfx::XLiveCompose *, std::default_delete<rfx::XLiveCompose>> { struct XLiveCompose *__value_; } __ptr_; } _liveComposing;
    float _rotationInDegree;
    struct unique_ptr<rfx::RfxRenderGraph, std::default_delete<rfx::RfxRenderGraph>> { struct __compressed_pair<rfx::RfxRenderGraph *, std::default_delete<rfx::RfxRenderGraph>> { struct RfxRenderGraph *__value_; } __ptr_; } _algorithmGraph;
    XLiveRenderTargetPool *_pool;
}

@property (retain, nonatomic) XMMGPUClarityPreProcess *clarityPreProcess;
@property (nonatomic) BOOL allowCompressedForRenderingYUV;

- (id)initWithGlContext:(id)a0 globalContext:(void *)a1 sceneType:(long long)a2 modelKeyArray:(id)a3 SDKMode:(int)a4 isAllowFp16:(BOOL)a5 energyController:(id)a6 beautyAssetsDirectory:(id)a7;
- (void)enableSTDenoiseFilter:(BOOL)a0 useSpatioFilter:(BOOL)a1;
- (void)enableClarityFilter:(BOOL)a0 withMode:(int)a1;
- (void)dealloc;
- (void)setOutputRGBAtTextureSize:(struct CGSize { double x0; double x1; })a0 yuvSize:(struct CGSize { double x0; double x1; })a1;
- (unsigned int)getSuitablePixelFormatType;
- (BOOL)updateExtraOutputTextureSize;
- (void)clean;
- (BOOL)updateTexturesWithClipSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })getAlgorithmInputSize;
- (void)encodeClarifyConvertY:(void *)a0 uv:(void *)a1 toRGB:(void *)a2 graph:(void *)a3 pixelMapping:(const void *)a4 flipX:(BOOL)a5;
- (void)encodeConvertY:(void *)a0 uv:(void *)a1 toRGB:(void *)a2 graph:(void *)a3 flipX:(BOOL)a4 range:(int)a5 standard:(int)a6;
- (void)encodeConvertYPanel:(id)a0 uPanel:(id)a1 vPanel:(id)a2 toRGB:(void *)a3 graph:(void *)a4 flipX:(BOOL)a5;
- (void)encodeConvertYPanel:(id)a0 uvPanel:(id)a1 toRGB:(void *)a2 graph:(void *)a3 flipX:(BOOL)a4;
- (void)encodeScale:(struct RGTexture **)a0 uv:(struct RGTexture **)a1 toTexture:(struct RGTexture **)a2 graph:(void *)a3 flipX:(BOOL)a4;
- (void)composeElements:(id)a0 toTexture:(struct RGTexture **)a1 graph:(void *)a2 targetSize:(struct CGSize { double x0; double x1; })a3;
- (BOOL)callFaceTrack:(struct shared_ptr<wevision::HardwareBuffer> { struct HardwareBuffer *x0; struct __shared_weak_count *x1; })a0;
- (void *)encodeTrackFace:(struct RGTexture **)a0 graph:(void *)a1;
- (void)encodeDenosingYTexture:(struct RGTexture **)a0 uvTexture:(struct RGTexture **)a1 toTexture:(struct RGTexture **)a2 graph:(void *)a3 motionLevel:(int)a4 noiseLevel:(int)a5 pixelMapping:(const void *)a6;
- (void)encodeRciEffect:(struct RGTexture **)a0 toTexture:(struct RGTexture **)a1 graph:(void *)a2;
- (void)encodeRGB:(void *)a0 toY:(void *)a1 toUV:(void *)a2 graph:(void *)a3;
- (void *)registerPixelBuffer:(struct __CVBuffer { } *)a0 forPlane:(unsigned int)a1 toGraph:(void *)a2 name:(id)a3;
- (void)setRotation:(int)a0;
- (id)processRenderFrames:(id)a0;
- (void)executeAlgorithmWithComposingElements:(id)a0;
- (id)processPixelBuffer:(struct __CVBuffer { } *)a0 flipX:(BOOL)a1 algorithmTexSize:(struct CGSize { double x0; double x1; } *)a2;
- (struct CGSize { double x0; double x1; })executeAlgorithm:(struct __CVBuffer { } *)a0;
- (id)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 yuvPixelBuffer:(struct __CVBuffer **)a1 flipX:(BOOL)a2;
- (int)getMaxTextureImageUnit;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

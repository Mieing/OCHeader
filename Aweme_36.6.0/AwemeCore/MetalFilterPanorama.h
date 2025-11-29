@class VPVRGeometryData, VPVRCamera, UIImage, MTKTextureLoader;
@protocol MTLTexture, MTLBuffer;

@interface MetalFilterPanorama : MetalFilterDefault {
    BOOL _paramsDidChange;
    struct CGSize { double width; double height; } _outputTextureSize;
    long long _fov;
    long long _contentType;
    long long _scopicType;
    long long _projectionModel;
    float _CMPFaceInnerPadding;
    float _CMPFaceDimension;
    float _EACExpandCoef;
    MTKTextureLoader *_backStickerTextureLoader;
    id<MTLTexture> _backStickerTexture;
    id<MTLTexture> _defaultBackStickerTexture;
    float _backStickerImageCoverAreaDegrees;
    UIImage *_backStickerImage;
    id<MTLBuffer> _textureMappingSrcRectBuffer;
    id<MTLBuffer> _textureMappingDstRectBuffer;
    id<MTLBuffer> _vrConstantsBuffer;
    id<MTLTexture> _yTexture;
    id<MTLTexture> _uvTexture;
    VPVRCamera *_camera;
    VPVRGeometryData *_geometryData;
    float _longerSideFOVInRadians;
    void /* unknown type, empty encoding */ _cameraExtraRotation;
    struct { void /* unknown type, empty encoding */ columns[4]; } _modelRotationMatrix;
}

@property (nonatomic) long long postNotifiVRPoseInterval;

- (void)recenter;
- (void)rotateWithPitch:(double)a0 andYaw:(double)a1 andRoll:(double)a2;
- (id)getFragmentShader;
- (id)getVertexShader;
- (id)createPixelTextureWithFrame:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0 format:(id)a1;
- (long long)renderBefore:(id)a0 frame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a1;
- (void)drawFrame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a0 withRenderEncoder:(id)a1;
- (void)updateParams;
- (void)updateTextureWithFrame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; BOOL x19; BOOL x20; float x21; int x22; int x23; int x24; id x25; long long x26; long long x27; int x28; int x29; } *)a0 renderEncoder:(id)a1;
- (void)updateBackStickerWithImage:(id)a0;
- (long long)renderAfter;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setEffect:(id)a0;

@end

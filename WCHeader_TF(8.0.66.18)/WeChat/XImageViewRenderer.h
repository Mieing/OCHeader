@class XImageContext, NSString, XImage, UIView, NSLock, CAEDRMetadata, XImageView, CAMetalLayer;

@interface XImageViewRenderer : NSObject {
    struct unique_ptr<rfx::RfxImageView, std::default_delete<rfx::RfxImageView>> { struct __compressed_pair<rfx::RfxImageView *, std::default_delete<rfx::RfxImageView>> { struct RfxImageView *__value_; } __ptr_; } _imageView;
    struct unique_ptr<rfx::SharpenFilter, std::default_delete<rfx::SharpenFilter>> { struct __compressed_pair<rfx::SharpenFilter *, std::default_delete<rfx::SharpenFilter>> { struct SharpenFilter *__value_; } __ptr_; } _sharpenFilter;
    struct Matrix4x4<float> { float m[16]; } _transform;
    BOOL _useExternalTransform;
    struct ObjectRef<xnet::rci::RciSwapChain> { struct RciSwapChain *mpObject; } _swapChain;
    struct CGColorSpace { } *_colorSpace;
    struct ObjectRef<xnet::rci::RciVertexInput> { struct RciVertexInput *mpObject; } _vrVertexInput;
    struct ObjectRef<xnet::rci::RciBufferBlock> { struct RciBufferBlock *mpObject; } _vrPositionBlock;
    struct ObjectRef<xnet::rci::RciBufferBlock> { struct RciBufferBlock *mpObject; } _vrUVBlock;
    struct ObjectRef<rfx::RfxMaterial> { struct RfxMaterial *mpObject; } _vrMaterial;
    struct RfxPushConstantID { struct shared_ptr<unsigned int> { unsigned int *__ptr_; struct __shared_weak_count *__cntrl_; } mspMemberIdx; } _vrTransformID;
    struct RfxPushConstantID { struct shared_ptr<unsigned int> { unsigned int *__ptr_; struct __shared_weak_count *__cntrl_; } mspMemberIdx; } _vrYuvToRGBID;
    struct RfxPushConstantID { struct shared_ptr<unsigned int> { unsigned int *__ptr_; struct __shared_weak_count *__cntrl_; } mspMemberIdx; } _vrColorOffsetID;
}

@property (retain, nonatomic) XImageView *internalPreview;
@property (nonatomic) float rotationInDegree;
@property (weak, nonatomic) UIView *lastView;
@property (weak, nonatomic) CAMetalLayer *previewLayer;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) XImage *lastImage;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) XImageContext *context;
@property (nonatomic) BOOL isSupportHDR;
@property (nonatomic) BOOL preferHdr;
@property (retain, nonatomic) CAEDRMetadata *EDRMetadata;
@property (nonatomic) BOOL flipX;
@property (nonatomic) BOOL flipY;
@property (nonatomic) unsigned long long contentMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) float contentsScale;
@property (nonatomic) BOOL enableSharpenForYUV;
@property (nonatomic) unsigned long long sharpenMode;
@property (nonatomic) int sharpenIntensity;
@property (nonatomic) BOOL enableSharpenFor1080P;
@property (nonatomic) BOOL disableOpaqueRender;
@property (nonatomic) BOOL enableAsyncResize;

+ (BOOL)isSupportHDR;

- (id)initWithName:(id)a0;
- (id)initWithView:(id)a0 name:(id)a1;
- (void)dealloc;
- (void *)imageView;
- (void *)sharpenFilter;
- (void *)vrMaterial;
- (BOOL)createVrVertexInput:(int)a0;
- (struct ObjectRef<xnet::rci::RciSwapChain> { struct RciSwapChain *x0; })createSwapChain:(struct CGSize { double x0; double x1; })a0;
- (BOOL)createSwapChainIfNeed:(id)a0;
- (void)waitUntilFinish;
- (void)resize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)displayImage:(id)a0 uImage:(id)a1 vImage:(id)a2;
- (BOOL)displayImage:(id)a0 uvImage:(id)a1;
- (BOOL)displayImage:(id)a0;
- (BOOL)displayVrImage:(id)a0 uvImage:(id)a1 position:(float *)a2 uv:(float *)a3 vertexCount:(int)a4;
- (BOOL)displayVrImage:(id)a0 uImage:(id)a1 vImage:(id)a2;
- (void)setTransform:(float *)a0;
- (void)setColorSpace:(struct CGColorSpace { } *)a0;
- (id)overlayView;
- (id)preview;
- (id)currentImage;
- (void)rotateInDegree:(float)a0;
- (void)renderView:(id)a0;
- (void)addToView:(id)a0;
- (void)insertToView:(id)a0 index:(unsigned long long)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

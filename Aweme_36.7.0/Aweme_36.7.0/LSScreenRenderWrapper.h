@class NSString, LSGLContext, UIImage, LiveCoreRenderFilter, LSGLFramebuffer;

@interface LSScreenRenderWrapper : LSGLScreenRender {
    unsigned long long inputRotation;
    LSGLFramebuffer *inputFramebufferForDisplay;
    struct CGSize { double width; double height; } inputImageSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _viewBound;
    BOOL _frameRenderCallbackFlag;
    BOOL _layoutCallbackFlag;
    struct CGSize { double width; double height; } boundsSizeAtFrameBufferEpoch;
    struct CGSize { double width; double height; } _sizeInPixels;
    BOOL _needRender;
    long long _next_frame_timestamp;
    long long _display_frame_interval;
    union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } _prj_matrix;
    union _GLKMatrix4 { struct { float m00; float m01; float m02; float m03; float m10; float m11; float m12; float m13; float m20; float m21; float m22; float m23; float m30; float m31; float m32; float m33; } ; float m[16]; } _tex_matrix;
    int _frame_width;
    int _frame_height;
    int _wind_width;
    int _wind_height;
    unsigned long long _gl_fill_type;
    BOOL _fit_mode;
    BOOL _custom_mode;
    BOOL _enable_update_vertix;
    BOOL _size_changed;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _display_rect_f;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _crop_rect_f;
}

@property (nonatomic) void *render_element;
@property (retain, nonatomic) LSGLContext *context;
@property (retain, nonatomic) LiveCoreRenderFilter *filter;
@property (copy, nonatomic) NSString *render_name;
@property (nonatomic) BOOL first_frame_rendered;
@property (retain, nonatomic) UIImage *bgImage;
@property (nonatomic) struct CGSize { double width; double height; } bgImageSize;
@property (nonatomic) struct __CVBuffer { } *bgImageTexRef;

- (long long)nextAvailableTextureIndex;
- (struct CGSize { double x0; double x1; })maximumOutputSize;
- (void)endProcessing;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (void)setInputRotation:(unsigned long long)a0 atIndex:(long long)a1;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)needRender:(BOOL)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (BOOL)keepFrame:(long long)a0;
- (void)setPreviewBgImage:(id)a0;
- (void)setPreviewFps:(int)a0;
- (void)updateFrameInfoWithFrameWidth:(int)a0 frameHeight:(int)a1;
- (void)reacalculatePrjMatrix;
- (void)onFrameAvailable:(unsigned int)a0 tex_matrix:(float *)a1 prj_matrix:(float *)a2 width:(unsigned int)a3 height:(unsigned int)a4 timeMs:(unsigned long long)a5;
- (union _GLKMatrix4 { struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } x0; float x1[16]; })initTexMatrix;
- (void)updateViewVertexRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 TextureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)registerRenderFilter:(id)a0 withName:(id)a1;
- (void)renderFrame:(long long)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)updateViewTextureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (void).cxx_destruct;
- (void)setFillMode:(unsigned long long)a0;
- (id)name;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (void)startProcessing;

@end

@class AVCaptureSession, NSString, EAGLContext, AVCaptureDevice;

@interface NativeCaptureSessionIOS : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>

@property (nonatomic) long long cameraPosition;
@property (retain, nonatomic) AVCaptureSession *captureSession;
@property (retain, nonatomic) AVCaptureDevice *captureDevice;
@property (nonatomic) void *callback;
@property (nonatomic) struct __CVBuffer { } *curPixelBuffer;
@property (nonatomic) struct ARNativeCameraFrame { unsigned int format; char *y_address; unsigned int y_width; unsigned int y_width_stride; unsigned int y_height; char *uv_address; char *uv_address2; unsigned int uv_width; unsigned int uv_width_stride; unsigned int uv_height; unsigned int uv_len; unsigned int uv_len2; unsigned int uv_pixel_stride; unsigned long long pts_ms; unsigned int y_texture; unsigned int uv_texture; void *cvPixelBuffer; int camera_position; } curFrame;
@property (nonatomic) struct __CVBuffer { } *curAcquiredPixelBuffer;
@property (nonatomic) struct __CVOpenGLESTextureCache { } *textureCacheRef;
@property (retain, nonatomic) EAGLContext *glContextOld;
@property (retain, nonatomic) EAGLContext *glContextNew;
@property (nonatomic) int target_width;
@property (nonatomic) int target_height;
@property (nonatomic) int used_width;
@property (nonatomic) int used_height;
@property (nonatomic) BOOL auto_focus_once;
@property (nonatomic) BOOL need_gl_tex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCallback:(void *)a0 width:(int)a1 height:(int)a2 autoFocus_once:(BOOL)a3 need_gltex:(BOOL)a4;
- (BOOL)isRunning;
- (void)startRunning;
- (void)stopRunning;
- (struct ARNativeCameraFrame { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; unsigned int x4; char *x5; char *x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned long long x13; unsigned int x14; unsigned int x15; void *x16; int x17; })acquireLatestFrame;
- (void)setupTextureCache;
- (void)setupEGLContext:(void *)a0;
- (void)makeEGLContext;
- (void)restoreEGLContext;
- (float)getFOV;
- (int)getNativeWidth;
- (int)getNativeHeight;
- (id)cameraWithPosition:(long long)a0;
- (void)updateCaptureSession;
- (void)switchCameraPosition:(long long)a0;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)onVideoStart:(id)a0;
- (void)onVideoStop:(id)a0;
- (void)onVideoError:(id)a0;
- (void)onVideoInterrupt:(id)a0;
- (void)onVideoInterruptEnd:(id)a0;
- (void).cxx_destruct;

@end

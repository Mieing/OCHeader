@interface OMJCaptureSession : NSObject

@property (nonatomic) struct XMJCaptureSessionOptions { BOOL isUsingFrontCamera; int dimensionLevel; BOOL UseNativeSurface; BOOL CreateFromCamoSession; BOOL NeedRunningCaptureSession; } options;
@property (nonatomic) struct SharedPtr<XMJCaptureSession> { struct XMJCaptureSession *_ptr; } backCaptureSession;

- (id)initWithDimensionLevel:(unsigned long long)a0 frontCamera:(BOOL)a1;
- (void)setupAndStartRunning;
- (void)stopRunning;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

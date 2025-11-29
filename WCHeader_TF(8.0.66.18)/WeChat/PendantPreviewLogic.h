@class AVCaptureVideoDataOutput, NSString, XEffectEffectManager, EmoticonLensPackage, NSRecursiveLock, AVCaptureSession, AVCaptureDevice, NSObject, AVCaptureDeviceInput, AVAssetWriterInput, AVCaptureConnection;
@protocol OS_dispatch_queue, PendantPreviewLogicDelegate;

@interface PendantPreviewLogic : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, ICdnComMgrExt>

@property (weak, nonatomic) id<PendantPreviewLogicDelegate> delegate;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) AVCaptureDeviceInput *deviceInput;
@property (retain, nonatomic) AVAssetWriterInput *assetWriterInput;
@property (retain, nonatomic) AVCaptureVideoDataOutput *dataOutput;
@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureDevice *videoDevice;
@property (retain, nonatomic) AVCaptureConnection *videoConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bufferQueue;
@property (nonatomic) BOOL isFrontCamera;
@property (nonatomic) BOOL dropFirstFrame;
@property (retain, nonatomic) XEffectEffectManager *effectManager;
@property (nonatomic) BOOL reloadEffectFinish;
@property (retain, nonatomic) EmoticonLensPackage *lensPackage;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)resetEffectManager;
- (void)changePreviewType:(long long)a0;
- (void)loadPendantResourceWithURL:(id)a0;
- (id)cachePathForURLString:(id)a0;
- (id)downloadPathForURLString:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void)startCamera;
- (void)stopCamera;
- (void)switchCamera;
- (id)deviceWithPosition:(long long)a0;
- (BOOL)switchCameraToPosition:(long long)a0;
- (void)setFPS:(long long)a0;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (id)previewLayer;
- (void)clearAll;
- (void)applyPendantEffect:(id)a0;
- (id)getCaptureImage;
- (void).cxx_destruct;

@end

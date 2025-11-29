@class AVCaptureVideoPreviewLayer, NSString, WeVisVoipEffectMgr, VOIPVideoRender, AVCaptureSession, CMMotionManager, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureVideoDataOutput, NSObject;
@protocol OS_dispatch_queue;

@interface MMOpenVoiceVideoCapture : MMOpenVoiceVideoBase <AVCaptureVideoDataOutputSampleBufferDelegate>

@property (weak, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) AVCaptureDevice *device;
@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureDeviceInput *input;
@property (retain, nonatomic) AVCaptureVideoDataOutput *output;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (nonatomic) int currentRenderOrien;
@property (nonatomic) BOOL inited;
@property (nonatomic) BOOL useFrontCamera;
@property (nonatomic) unsigned int frameIdx;
@property (nonatomic) long long m_videoOrientation;
@property (nonatomic) long long m_cameraOrientation;
@property (nonatomic) BOOL m_usingFrontCameraLastFrame;
@property (nonatomic) BOOL m_cameraFrontState;
@property (nonatomic) int m_switchCameraFrameCnt;
@property (nonatomic) long long m_cameraChangeToOrientation;
@property (nonatomic) unsigned int m_cameraChangeToOrientationLastCount;
@property (retain, nonatomic) CMMotionManager *m_motionMgr;
@property (nonatomic) struct CGSize { double width; double height; } resamplingSize;
@property (retain, nonatomic) WeVisVoipEffectMgr *wevisEffectMgr;
@property (retain, nonatomic) VOIPVideoRender *render;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (int)initView:(int)a0 openId:(id)a1 dic:(id)a2 queue:(id)a3;
- (void)updateCaptureRes:(int)a0;
- (BOOL)enable720pCapture;
- (BOOL)updateGPUReslution:(int)a0;
- (void)setCameraPos:(long long)a0;
- (void)updateCameraPosToFitDevice;
- (int)start;
- (int)updateView:(int)a0 dic:(id)a1;
- (void)stop;
- (void)uintView;
- (void)newVideoSample:(struct opaqueCMSampleBuffer { } *)a0;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (unsigned long long)cameraCount;
- (BOOL)isCameraFront;
- (int)getCaptureFps;
- (void)initWeVisEffectMgr;
- (void)renderNV12:(id)a0;
- (BOOL)setBackgroundEffectMode:(int)a0 enable:(BOOL)a1;
- (void).cxx_destruct;

@end

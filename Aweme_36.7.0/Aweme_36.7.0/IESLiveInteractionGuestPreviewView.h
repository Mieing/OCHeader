@class NSObject, NSString, UILabel, LCInteractRender, UIButton;
@protocol IESLiveVideoEffectProcessing, IESLiveEffectProcessLifyCycle, IESLiveEffectProcessService, IESLiveRecoderFactory, IESLiveCompoundSubscription, OS_dispatch_queue, IESLiveRecoder;

@interface IESLiveInteractionGuestPreviewView : UIView <HTSLiveCameraEffectProvider>

@property (nonatomic) BOOL isPreviewing;
@property (retain, nonatomic) id<IESLiveRecoderFactory> recoderFactory;
@property (retain, nonatomic) id<IESLiveEffectProcessLifyCycle> videoEffectLifeCycle;
@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> videoProcesser;
@property (retain, nonatomic) id<IESLiveEffectProcessService> effectProcesser;
@property (nonatomic) struct CGSize { double width; double height; } previewSize;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *openCameraBtn;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> containerFrameSubscription;
@property (nonatomic) BOOL didClean;
@property (retain, nonatomic) LCInteractRender *renderer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *renderQueue;
@property (nonatomic) BOOL shouldCheckEffectProcesser;
@property (nonatomic) BOOL killedByPKAudienceLinkmic;
@property (nonatomic) BOOL transFerFromPK;
@property (retain, nonatomic) id<IESLiveRecoder> camera;
@property (nonatomic) BOOL pureRender;
@property (copy, nonatomic) id /* block */ onOpenCameraCompletion;
@property (nonatomic) BOOL openGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)resetOutputSize:(struct CGSize { double x0; double x1; })a0;
- (void)setUpEffectEnvironment;
- (void)loadBeautyResource;
- (void)setupCameraPermissionTip;
- (void)loadPureRender;
- (void)loadCapture;
- (void)didOpenCameraBtn;
- (void)setupCameraWithPosition:(long long)a0;
- (void)hideCameraPermissionTip;
- (void)bindContainer:(id)a0;
- (id)initWithPreviewSize:(struct CGSize { double x0; double x1; })a0;
- (void)overturn;
- (id)cameraPreview;
- (void).cxx_destruct;
- (void)cleanup;
- (long long)currentPosition;
- (void)dealloc;
- (void)startVideoCapture;
- (void)stopVideoCapture;
- (void)setupCamera;

@end

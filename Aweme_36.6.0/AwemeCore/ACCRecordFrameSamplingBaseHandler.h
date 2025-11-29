@class ACCExtractAbilityManager, NSString, NSTimer, UIImage, AWEVideoPublishViewModel, NSMutableArray, IESEffectModel;
@protocol ACCCameraService, ACCRecordFlowService, ACCRecordFrameSamplingHandlerDelegate, ACCRecordFrameSamplingServiceProtocol, ACCRecordPropService;

@interface ACCRecordFrameSamplingBaseHandler : NSObject <ACCCameraLifeCircleEvent, ACCRecordFrameSamplingHandlerProtocol, ACCEffectEvent> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _samplingFramesLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _preloadLock;
}

@property (retain, nonatomic) NSTimer *recordFramesTimer;
@property (readonly, nonatomic) NSMutableArray *samplingFrames;
@property (nonatomic) double nextCaptureTime;
@property (readonly, nonatomic) NSMutableArray *preloadFrames;
@property (readonly, nonatomic) NSMutableArray *preloadTimes;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly, weak, nonatomic) IESEffectModel *currentSticker;
@property (readonly, weak, nonatomic) UIImage *faceImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<ACCRecordFrameSamplingServiceProtocol> frameSamplingContext;
@property (readonly, weak, nonatomic) id<ACCCameraService> cameraService;
@property (readonly, weak, nonatomic) id<ACCRecordFlowService> flowService;
@property (readonly, nonatomic) double timeInterval;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (weak, nonatomic) id<ACCRecordFrameSamplingHandlerDelegate> delegate;
@property (copy, nonatomic) NSString *captureID;
@property (weak, nonatomic) ACCExtractAbilityManager *extractManager;

- (void)cameraService:(id)a0 didChangeDuration:(double)a1 totalDuration:(double)a2;
- (BOOL)shouldHandle:(id)a0;
- (void)onEffectMessageReceived:(id)a0;
- (void)configFlowService:(id)a0;
- (void)configPropService:(id)a0;
- (void)startWithCameraService:(id)a0 timeInterval:(double)a1;
- (void)sampleFrame;
- (void)removeAllFrames;
- (void)saveBgPhotosForTakePicture;
- (id)multiAssetsPixaloopSelectedImages;
- (BOOL)p_shouldDisableTimer;
- (void)sampleFrameFromTimer:(BOOL)a0;
- (void)addFrameIfNeed:(id)a0 atTime:(double)a1 fromTimer:(BOOL)a2;
- (BOOL)needAfterProcess;
- (id)preprocessFrame:(id)a0;
- (void)p_addFrameIfNeed:(id)a0;
- (void)p_addPreloadFrameFeature:(id)a0 time:(id)a1;
- (void)saveHQVFrame:(id)a0 atTime:(double)a1;
- (void)prepareToSampleFrame;
- (void)firstSampling;
- (void)timedSampling;
- (void)samplingCompleted;
- (BOOL)enableHQVFrame;
- (void)configCameraService:(id)a0 samplingContext:(id)a1;
- (void)reduceSamplingFramesByThreshold:(unsigned long long)a0;
- (id)mutableSamplingFrames;
- (id)immutableSamplingFrames;
- (void)sampleFrameForPixloop;
- (void)addFrameIfNeed:(id)a0 atTime:(double)a1;
- (void)stopTimer;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)dealloc;

@end

@class NSString, YTBizPalmRegister, FaceRecogAVRecorder, NSMutableArray;
@protocol PalmEntryLogicControllerDelegate;

@interface PalmEntryLogicController : NSObject <CameraScannerViewDelegate>

@property (retain, nonatomic) YTBizPalmRegister *palmRegister;
@property (retain, nonatomic) FaceRecogAVRecorder *avRecorder;
@property (retain, nonatomic) NSMutableArray *successAvRecorders;
@property (nonatomic) int successAvRecorderIndex;
@property (nonatomic) BOOL isDectecting;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) unsigned int beepSoundId;
@property (nonatomic) BOOL alreadyGetSuccessImage;
@property (retain, nonatomic) NSString *sessionId;
@property (copy, nonatomic) id /* block */ m_getFaceRecordCallBack;
@property (weak, nonatomic) id<PalmEntryLogicControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)initPalmRegister;
- (BOOL)checkPalmModel;
- (BOOL)setupPalmRegister;
- (id)getPalmPipelineResult;
- (id)wrapSdkResult:(id)a0 videoPath:(id)a1;
- (void)checkAuthoration:(id /* block */)a0;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)startRecordVideo:(double)a0 videoHeight:(double)a1 sessionId:(id)a2;
- (void)startRecordSuccessVideo:(double)a0 videoHeight:(double)a1 sessionId:(id)a2;
- (void)stopRecordVideo;
- (void)cancelRecordVideo;
- (void)cancelRecordSuccessVideo;
- (void)startDetectPalm;
- (void)startFirstDetectPalmFeedBack;
- (void)lightShock;
- (void)playDetectSound;
- (void)startPalmRegisterSuccessFeedBack;
- (void)successShock;
- (void)playSuccessSound;
- (void)stopRecordAndSave:(id /* block */)a0;
- (BOOL)isSuccessVideoRecording;
- (id)getFailVideoPath;
- (void).cxx_destruct;

@end

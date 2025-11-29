@class NSObject, BDCTVideoRecorder, FaceLiveModule, BDCTFlow, BytedCertVideoRecordParameter;
@protocol OS_dispatch_queue, BDCTVideoRecordControllerDelegate;

@interface BDCTVideoRecordController : NSObject {
    NSObject<OS_dispatch_queue> *_controllerQueue;
    NSObject<OS_dispatch_queue> *_faceDetectQueue;
}

@property (retain, nonatomic) BytedCertVideoRecordParameter *parameter;
@property (weak, nonatomic) id<BDCTVideoRecordControllerDelegate> delegate;
@property (weak, nonatomic) BDCTFlow *flow;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) double recordPrepareStartTime;
@property (nonatomic) double recordStartTime;
@property (nonatomic) double recordEndTime;
@property (nonatomic) unsigned long long waitFaceContinueFailureCnt;
@property (nonatomic) unsigned long long recordingContinueFailureCnt;
@property (retain, nonatomic) BDCTVideoRecorder *videoRecorder;
@property (retain, nonatomic) FaceLiveModule *faceliveInstance;
@property (nonatomic) long long recorderStage;
@property (nonatomic) double recordLimitTime;
@property (nonatomic) double totalLimitTime;

+ (id)controllerWithFlow:(id)a0 faceliveInstance:(id)a1 delegate:(id)a2;

- (void)quite;
- (void)stopVideoRecord;
- (void)prepareVideoRecord;
- (void)startRecordVideoProcedure;
- (void)recordWithCaptureOutput:(id)a0 sampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)p_checkPrepareTimeLimit;
- (void)faceDetectInRecording:(struct opaqueCMSampleBuffer { } *)a0;
- (void)faceDetectInWaitFace:(struct opaqueCMSampleBuffer { } *)a0;
- (void)p_stopVideoRecordWithResult:(long long)a0;
- (void)restartVideoRecordNeedNewConfig;
- (void)getVideoRecordConfigWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;
- (void)cancel;

@end

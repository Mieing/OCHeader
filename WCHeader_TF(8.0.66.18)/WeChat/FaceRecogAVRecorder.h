@class SPXAudioRecorder, FaceRecogVideoWriter, NSString, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface FaceRecogAVRecorder : NSObject <AudioRecorderDelegate>

@property (nonatomic) BOOL isRecordingVideo;
@property (nonatomic) BOOL isRecordingAudio;
@property (nonatomic) BOOL hasVideoData;
@property (nonatomic) BOOL isProcessingVideo;
@property (nonatomic) BOOL isProcessingAudio;
@property (copy, nonatomic) id /* block */ fetchCallback;
@property (copy, nonatomic) id /* block */ snapshotCallback;
@property (nonatomic) BOOL shouldTakeSnapshot;
@property (retain, nonatomic) SPXAudioRecorder *spxRecorder;
@property (retain, nonatomic) FaceRecogVideoWriter *videoWriter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *videoWriterQueue;
@property (nonatomic) BOOL userCancel;
@property (retain, nonatomic) NSData *outputAudioData;
@property (retain, nonatomic) NSString *outputVideoPath;
@property (retain, nonatomic) NSString *bioId;
@property (nonatomic) unsigned int voiceId;
@property (nonatomic) unsigned long long audioTimeStamp;
@property (nonatomic) unsigned long long videoTimeStamp;
@property (nonatomic) BOOL isRecordVideoForPay;
@property (nonatomic) long long audioRecorderErrorCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)updateBioId:(id)a0;
- (id)getBioId;
- (void)cancel;
- (void)stop;
- (BOOL)startRecordVideoWithWidth:(double)a0 height:(double)a1;
- (BOOL)startRecordAudio;
- (void)onGetCaptureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (BOOL)OnRecorderPrepareSend:(id)a0;
- (void)OnRecorderEndRecording:(id)a0;
- (void)OnRecorderPart:(id)a0 Offset:(unsigned int)a1 Len:(unsigned int)a2 EndFlag:(unsigned int)a3 ForceDelete:(BOOL)a4 Duration:(unsigned int)a5;
- (void)OnRecorderBeginRecording:(id)a0 ErrNo:(int)a1;
- (void)tryOutputVideoFromPath:(id)a0 toPath:(id)a1 complete:(id /* block */)a2;
- (void)exportOriginVideoPath:(id)a0 toPath:(id)a1 complete:(id /* block */)a2;
- (void)mergeAudioWithOriginVideoPath:(id)a0 toPath:(id)a1 complete:(id /* block */)a2;
- (void)fetchOutputData:(id /* block */)a0;
- (void)checkDumpAVDataFinished;
- (void)takeSnapshot:(id /* block */)a0;
- (id)screenshotOfVideoStream:(struct __CVBuffer { } *)a0;
- (BOOL)saveSnapShotWithBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void).cxx_destruct;

@end

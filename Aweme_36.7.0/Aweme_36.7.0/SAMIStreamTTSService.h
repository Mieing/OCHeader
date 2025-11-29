@class SAMICore, NSString, SAMISDKParams, SAMIStreamTTSTask, NSObject;
@protocol OS_dispatch_queue, SAMIStreamTTSServiceDelegate;

@interface SAMIStreamTTSService : NSObject <SAMICoreCallbackListener, SAMIStreamTTSServiceProtocol>

@property (copy, nonatomic) NSString *draftFolderPath;
@property (retain, nonatomic) SAMISDKParams *samiSDKParams;
@property (nonatomic) long long curTaskType;
@property (nonatomic) long long fileMode;
@property (nonatomic) BOOL enableChangeSpeechRate;
@property (nonatomic) BOOL enableTimestamp;
@property (nonatomic) long long textCount;
@property (nonatomic) BOOL isEnterBackground;
@property (nonatomic) BOOL flagToSave;
@property (nonatomic) BOOL audioStreamHasGetFirstFrame;
@property (retain, nonatomic) SAMICore *samiHandle;
@property (retain, nonatomic) SAMIStreamTTSTask *runningTask;
@property (retain, nonatomic) SAMIStreamTTSTask *cancelTask;
@property (retain, nonatomic) SAMIStreamTTSTask *task;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *safeQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *safeStopQueue;
@property (weak, nonatomic) id<SAMIStreamTTSServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopPlay;
- (void)onMessageReceived:(long long)a0 withBlock:(id)a1;
- (void)stopTaskIfNeed;
- (id)initWithFileMode:(long long)a0 draftFolderPath:(id)a1 isEnableChangeSpeechRate:(BOOL)a2 enableTimestamp:(BOOL)a3;
- (void)beginDownload:(id)a0 voiceInfo:(id)a1 useSamiSliceText:(BOOL)a2 needPlaying:(BOOL)a3;
- (void)cleanService;
- (void)createTaskAsyncWithTexts:(id)a0 audioType:(id)a1 taskType:(long long)a2 useSamiSliceText:(BOOL)a3 needPlaying:(BOOL)a4;
- (void)destroySAMIHandle;
- (id)currentQueueName;
- (void)streamTTSDownloadStartCallback;
- (void)streamTTSGetFirstFrameCallback;
- (void)taskFinishWithFiles:(id)a0 texts:(id)a1 phonemes:(id)a2 underRunCount:(long long)a3 taskID:(id)a4;
- (void)streamTTSFinishCallback;
- (void)taskFailWithStatusCode:(int)a0 taskID:(id)a1;
- (void)streamTTSFailedCallback;
- (void)streamTTSerrorCallback:(long long)a0 taskID:(id)a1;
- (void)streamTTSDownloadCompletedCallback:(id)a0 audioTexts:(id)a1 phonemes:(id)a2 underRunCount:(long long)a3 taskID:(id)a4;
- (void)createTaskWithTexts:(id)a0 audioType:(id)a1 taskType:(long long)a2 useSamiSliceText:(BOOL)a3 needPlaying:(BOOL)a4;
- (void)beginTask:(BOOL)a0;
- (void)createSAMIHandleIfNeed;
- (void)beginProcessWithTask:(id)a0 needPlaying:(BOOL)a1;
- (void)createSAMIContextParameter:(id /* block */)a0;
- (void)createSAMIProcessParameterWithSpeaker:(id)a0 text:(id)a1 sampleRate:(int)a2 enablePlaying:(BOOL)a3 enableSaveAudioToFile:(BOOL)a4 enableConcurrency:(BOOL)a5 enableSentenceSeg:(BOOL)a6 timestamp:(int)a7 body:(id /* block */)a8;
- (void)changeSpeechRate:(float)a0;
- (void)cancelDownload;
- (void).cxx_destruct;
- (id)token;
- (void)dealloc;
- (void)forceStop;
- (long long)tokenType;
- (void)stopDownload;

@end

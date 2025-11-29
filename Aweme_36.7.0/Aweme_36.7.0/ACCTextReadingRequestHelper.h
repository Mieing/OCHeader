@class SAMIStreamTTSService, NSTimer, NSMutableDictionary, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ACCTextReadingRequestHelper : NSObject <SAMIStreamTTSServiceDelegate>

@property (retain, nonatomic) NSTimer *pollTimer;
@property (retain, nonatomic) id currentTokenRequest;
@property (retain, nonatomic) id currentPollRequest;
@property (retain, nonatomic) NSMutableArray *audioRequests;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue;
@property (retain, nonatomic) SAMIStreamTTSService *streamTTSService;
@property (retain) NSMutableDictionary *streamTTSBlocks;
@property (retain) NSMutableDictionary *streamTTSFirstFrameBlocks;
@property (copy, nonatomic) NSString *currentFilePath;
@property (nonatomic) BOOL isStreamTTSDownloadingInternal;
@property (nonatomic) double downloadCompleteTimestamp;
@property (nonatomic) double firstFrameTimestamp;
@property (nonatomic) double downloadStartTimestamp;
@property (nonatomic) long long taskStartTime;
@property (retain, nonatomic) NSMutableDictionary *ttsStreamETParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generatedAudioPathFor:(id)a0 speakerID:(id)a1;
+ (id)generatedAudioPathFor:(id)a0 speakerID:(id)a1 streamSpeakerID:(id)a2;
+ (id)generatedAudioPathFor:(id)a0 speakerID:(id)a1 suffix:(id)a2;
+ (BOOL)enableStreamTextToSpeech;
+ (id)getTTSSuffix:(id)a0;
+ (id)sharedHelper;

- (void)cancelTextReadingRequest;
- (id)stampTextModelsWithUUID:(id)a0;
- (id)stampModelForClientMatchWithTextContent:(id)a0 stampTextModels:(id)a1;
- (void)setStampTextModels:(id)a0 WithUUID:(id)a1;
- (void)requestTextReaderForUploadText:(id)a0 textSpeaker:(id)a1 enableTimestamp:(BOOL)a2 filePath:(id)a3 speedRate:(id)a4 completionBlock:(id /* block */)a5;
- (void)stopStreamTTSAndInvokeIfNeeded;
- (void)forceStopStreamTTSandCleanService;
- (void)stopStreamTTSPlaying;
- (void)requestTextReaderForUploadText:(id)a0 textSpeaker:(id)a1 streamTextSpeaker:(id)a2 enableTimestamp:(BOOL)a3 needPlaying:(BOOL)a4 filePath:(id)a5 speedRate:(id)a6 firstFrameBlock:(id /* block */)a7 completionBlock:(id /* block */)a8;
- (void)resetStreamTTSParams;
- (void)requestTextReaderForUploadText:(id)a0 textSpeaker:(id)a1 enableTimestamp:(BOOL)a2 filePath:(id)a3 speedRate:(id)a4 completionBlock:(id /* block */)a5 streamAdapterBlock:(id /* block */)a6;
- (void)startStreamingTextReaderForUploadText:(id)a0 streamTextSpeaker:(id)a1 needPlaying:(BOOL)a2 filePath:(id)a3 firstFrameBlock:(id /* block */)a4 completionBlock:(id /* block */)a5;
- (void)cancelAndRemoveTextReadingRequest:(id)a0;
- (void)ttsActionEventTracking:(id)a0;
- (id)generateStreamTTSAudioPath;
- (id)moveStreamTTSFileToBusinessFilePath:(id)a0 businessFilePath:(id)a1;
- (id)ttsSupportPunctuationMap;
- (void)ttsDownloadCompleted:(id)a0 audioTexts:(id)a1 phonemes:(id)a2 underRunCount:(long long)a3 taskID:(id)a4;
- (void)ttsError:(long long)a0 taskID:(id)a1;
- (void)ttsStreamDownloadStart;
- (void)ttsStreamGetFirstFrame;
- (void)ttsStreamFinish;
- (void)ttsStreamFailed;
- (id)stampModelForDefaultMatchWithTextContent:(id)a0 stampTextModels:(id)a1 ttsTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (void).cxx_destruct;
- (id)init;

@end

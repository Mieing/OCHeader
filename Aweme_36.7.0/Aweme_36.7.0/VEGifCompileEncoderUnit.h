@class NSString, HTSVideoData, VEImageEncoder, NSError, NSObject, VETransData;
@protocol OS_dispatch_queue, VEProcessSampleDelegate;

@interface VEGifCompileEncoderUnit : VEUnitObject <VEProcessSampleDelegate, IVECompileWriter, VECompileStageProtocol, VECompileEncoderUnitProtocol>

@property (nonatomic) unsigned long long transStatus;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *videoQueue;
@property (nonatomic) BOOL isVideoWriterFinish;
@property (nonatomic) BOOL isAudioWriterFinish;
@property (retain, nonatomic) VETransData *transData;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (retain, nonatomic) VEImageEncoder *imageEncoder;
@property (copy, nonatomic) NSString *outputPath;
@property (nonatomic) unsigned long long frames;
@property (nonatomic) int gifFPS;
@property (weak, nonatomic) id<VEProcessSampleDelegate> downstream;
@property (nonatomic) BOOL hasDecreseFrameTimeStamp;
@property (retain, nonatomic) NSError *encoderError;
@property (retain, nonatomic) NSString *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (weak, nonatomic) id<VEProcessSampleDelegate> audioDataProvider;
@property (weak, nonatomic) id<VEProcessSampleDelegate> videoDataProvider;
@property (copy, nonatomic) id /* block */ customAudioProcessBlock;
@property (copy, nonatomic) id /* block */ encodeDataCB;
@property (nonatomic) long long curVideoStage;
@property (nonatomic) long long curAudioStage;

- (void)returnFramebuffer:(id)a0;
- (BOOL)encodeSampleData:(id)a0;
- (BOOL)getVideoWriterFinish;
- (BOOL)getAudioWriterFinish;
- (id)_buildTranscodeRes:(id)a0;
- (void)_initEncoder:(id)a0;
- (BOOL)startLoopWriter;
- (BOOL)cancelWriterWithError:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getWritedDuration;
- (double)getCompileProgress;
- (BOOL)processSampleData:(id)a0;
- (BOOL)setConfig:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)resume;
- (void)closeSession:(BOOL)a0;
- (void)resetSession;
- (BOOL)startWriter;

@end

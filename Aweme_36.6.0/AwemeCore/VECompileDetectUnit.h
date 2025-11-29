@class NSString, NSError, NSObject, VETransData;
@protocol OS_dispatch_queue, VEProcessSampleDelegate;

@interface VECompileDetectUnit : IESMMObject <IVECompileWriter>

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) VETransData *transData;
@property (nonatomic) unsigned long long detectStatus;
@property (nonatomic) BOOL isAudioDetectFinish;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioDetectQueue;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (weak, nonatomic) id<VEProcessSampleDelegate> downstream;
@property (weak, nonatomic) id<VEProcessSampleDelegate> audioDataProvider;
@property (weak, nonatomic) id<VEProcessSampleDelegate> videoDataProvider;
@property (copy, nonatomic) id /* block */ customAudioProcessBlock;
@property (copy, nonatomic) id /* block */ encodeDataCB;
@property (retain, nonatomic) NSString *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long curVideoStage;
@property (nonatomic) long long curAudioStage;

- (BOOL)startAudioDetect;
- (BOOL)startVideoDetect;
- (BOOL)processAudioSamplebuf:(struct opaqueCMSampleBuffer { } *)a0;
- (id)getBreakPointURL;
- (BOOL)getVideoWriterFinish;
- (BOOL)getAudioWriterFinish;
- (BOOL)startLoopWriter;
- (BOOL)cancelWriterWithError:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getWritedDuration;
- (double)getCompileProgress;
- (void)pauseForBackground;
- (void)resumeForBackground;
- (BOOL)processSampleData:(id)a0;
- (BOOL)setConfig:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)resume;
- (BOOL)startWriter;

@end

@class HTSGLContext, AVAsset, HTSVideoData, AVURLAsset, NSString, NSLock, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface VEReverseUnit : NSObject <IESAssetReverseProtocol, IVEReverseProtocol>

@property (retain, nonatomic) HTSVideoData *videoData;
@property (retain, nonatomic) AVAsset *reverseAsset;
@property (retain, nonatomic) AVAsset *reverseSrcAsset;
@property (nonatomic) BOOL shouldCancelReverse;
@property (nonatomic) BOOL timeMachineReady;
@property (nonatomic) BOOL reverseVideoStatus;
@property (retain, nonatomic) NSLock *uniqueLock;
@property (nonatomic) unsigned long long multiVideoMergeStatus;
@property (retain, nonatomic) AVURLAsset *multiVideoMergeAsset;
@property (copy, nonatomic) NSString *reverseVideoDataMD5;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reverseQueue;
@property (retain, nonatomic) HTSGLContext *htsGLContext;
@property (nonatomic) unsigned long long reverseProcessStatus;
@property (nonatomic) BOOL useNewMudule;
@property (nonatomic) BOOL enableMultiTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ reverseCompleteBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *reverseCompleteSemaphore;

+ (struct CGSize { double x0; double x1; })p_fitSize:(struct CGSize { double x0; double x1; })a0 rotation:(unsigned long long)a1;
+ (struct CGSize { double x0; double x1; })p_adaptiveVideoSize:(id)a0;
+ (void)applyTimeMachine:(long long)a0 beginTime:(double)a1 videoData:(id)a2;
+ (void)applyTimeMachineWithConfig:(id)a0 completeBlk:(id /* block */)a1 videoData:(id)a2;
+ (void)applyTimeMachine:(long long)a0 beginTime:(double)a1 startTime:(double)a2 completeBlk:(id /* block */)a3 videoData:(id)a4;
+ (void)applyTimeMachineWithConfig:(id)a0 videoData:(id)a1;

- (BOOL)updateVideoData:(id)a0;
- (void)clearReverseAsset;
- (id)initWithVideoData:(id)a0;
- (void)restartReverseAsset:(id /* block */)a0;
- (void)reverseAssetWithComplete:(id /* block */)a0;
- (void)p_mergeAssetsWithComplete:(id /* block */)a0;
- (id)p_getCompressionProps:(id)a0;
- (void)p_reverseAsset:(id)a0 outputURL:(id)a1 owner:(id)a2 compressProps:(id)a3 videoComposition:(id)a4 progressBlock:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (void)cancelReverseAsset;
- (void)restoreReverseIfNeeded:(id /* block */)a0;
- (void).cxx_destruct;

@end

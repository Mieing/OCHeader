@class NSError, NSString, NSRecursiveLock, ACCMomentMediaAsset, VEAIMomentBIMResult, VEVideoFramesGenerator, NSDictionary, VEAIMomentAlgorithm, NSObject, VEAIMomentBIMConfig;
@protocol OS_dispatch_queue, ACCMVPhotoCalculateOperationDelegate;

@interface ACCMVPhotoCalculateOperation : NSOperation

@property (readonly, getter=isCancelled) BOOL cancelled;
@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;
@property (retain, nonatomic) NSRecursiveLock *stateLock;
@property (nonatomic) int requestId;
@property (retain, nonatomic) VEVideoFramesGenerator *frameGenerator;
@property (retain, nonatomic) NSDictionary *imageExif;
@property (copy, nonatomic) NSString *videoModelString;
@property (copy, nonatomic) NSString *videoCreateDateString;
@property (retain, nonatomic) VEAIMomentBIMResult *bimResult;
@property (retain, nonatomic) NSError *bimError;
@property (nonatomic) unsigned long long orientation;
@property (nonatomic) double startTime;
@property (retain, nonatomic) VEAIMomentBIMConfig *imageBIMConfig;
@property (retain, nonatomic) VEAIMomentBIMConfig *videoNormalBIMConfig;
@property (retain, nonatomic) VEAIMomentBIMConfig *videoKeyBIMConfig;
@property (nonatomic) unsigned long long algorithmType;
@property (weak, nonatomic) VEAIMomentAlgorithm *aiAlgorithm;
@property (retain, nonatomic) ACCMomentMediaAsset *asset;
@property (copy, nonatomic) id /* block */ bimCompletion;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *calculateQueue;
@property (nonatomic) long long calculateIndex;
@property (weak, nonatomic) id<ACCMVPhotoCalculateOperationDelegate> opDelegate;
@property (nonatomic) BOOL videoFrameExtractionOptimizeEnabled;

+ (id)bimCallbackQueue;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)processImageAsset:(id)a0;
- (void)processVideoAsset:(id)a0;
- (void)processInvalidAsset;
- (void)handleError;
- (BOOL)isBIMReady;
- (void)checkComplete;
- (double)generatorFPSWithVideoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)calculatePhotoWithImage:(id)a0;
- (void)calculateVideoWithAsset:(id)a0;
- (void)setCancelled:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isConcurrent;
- (id)init;
- (BOOL)isAsynchronous;
- (void)start;
- (void)cancel;

@end

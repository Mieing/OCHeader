@class MMLiveStorageCleanupPinningToken, MMWeEffectManager, MMLiveTaskId, MMFinderLiveTask;

@interface MMLiveFaceLogic : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (readonly, nonatomic) MMWeEffectManager *weeffectManager;
@property (retain, nonatomic) MMLiveStorageCleanupPinningToken *resourcesPinningToken;
@property BOOL isFaceDetectionStarted;
@property (nonatomic) double lastRefreshTime;
@property (copy, nonatomic) id /* block */ completeBlock;

+ (id)baseResourceDir;

- (id)initWithTaskId:(id)a0;
- (BOOL)startFaceDetectionWithCompleteBlock:(id /* block */)a0;
- (void)onWeEffectProcessedRenderFrameRefresh:(id)a0;
- (void)onWeEffectManagerDestroyed:(id)a0;
- (BOOL)applyLiveFaceDetectMaterial;
- (void)startWeEffectManagerIfNeed;
- (void)stopWeEffectManagerIfNeed;
- (id)getTemplateResourcePath;
- (id)getActualResourcePath;
- (void).cxx_destruct;

@end

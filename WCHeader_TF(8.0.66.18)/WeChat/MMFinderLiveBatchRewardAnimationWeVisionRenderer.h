@class MMFinderLiveBatchRewardWeVisionRenderTask, NSString, MMFinderLiveTaskId, NSMutableArray;
@protocol MMFinderLiveBatchRewardAnimationRenderingDelegate;

@interface MMFinderLiveBatchRewardAnimationWeVisionRenderer : NSObject <MMFinderLiveGiftResourceMgrExt>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSMutableArray *renderTaskQueue;
@property (retain, nonatomic) NSMutableArray *waitingTaskQueue;
@property (retain, nonatomic) MMFinderLiveBatchRewardWeVisionRenderTask *currentRenderTask;
@property (weak, nonatomic) id<MMFinderLiveBatchRewardAnimationRenderingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)addBatchRewardAnimationWithGift:(id)a0 comboId:(id)a1 animationImgNum:(unsigned int)a2;
- (void)tryNextRenderTask;
- (BOOL)processLuaScriptJsonMessage:(id)a0 fromSourceId:(int)a1;
- (void)onCurrentTaskAnimationEnd;
- (void)onLiveGiftResDownloadCompleted:(id)a0 retry:(unsigned long long)a1 totalLength:(unsigned long long)a2 resType:(long long)a3 productId:(id)a4 downloadUrl:(id)a5;
- (void)initActualResDir;
- (id)getTemplateResourcePath;
- (id)getActualTemplateResourcePath;
- (id)getActualLuaScriptFolderPath;
- (id)getActualLuaScriptFilePath;
- (id)liveTask;
- (void)startRenderingOfTask:(id)a0;
- (void)completeCurrentTaskRenderingOfAnimationWithCompleteBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end

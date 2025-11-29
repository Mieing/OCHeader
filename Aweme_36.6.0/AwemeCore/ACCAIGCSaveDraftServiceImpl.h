@class NSString;
@protocol ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface ACCAIGCSaveDraftServiceImpl : ACCEditViewModel <ACCSequenceEditServicePlayerSubscriber, ACCAIGCSaveDraftServiceProtocol>

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (copy, nonatomic) NSString *syncQueueCurrentTaskID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)saveAIMateEditAsyncDraftFrom:(id)a0 taskID:(id)a1 extraDict:(id)a2 completion:(id /* block */)a3;
+ (id)getCoverImageFromPublishModel:(id)a0;

- (void)saveAIMemoriesAsyncDraftWithTaskID:(id)a0 msgToEffectStart:(double)a1 extraDict:(id)a2 completion:(id /* block */)a3;
- (void)saveTemplateAsyncDraftWithTaskID:(id)a0 templateModel:(id)a1 asyncBusinessModel:(id)a2 msgToEffectStart:(double)a3 extraDict:(id)a4 completion:(id /* block */)a5;
- (id)getCoverImage;
- (BOOL)isHitLoraAsyncAllInSync;
- (void)saveDraftUnifyWithData:(id)a0 state:(long long)a1 effect:(id)a2 msgToEffectStart:(double)a3 resultCompleted:(id /* block */)a4;
- (void)loraSyncSaveDraftWithModel:(id)a0 isCreateRole:(BOOL)a1 finishCompleted:(id /* block */)a2;
- (void)_handleSaveDraftResult:(BOOL)a0 taskID:(id)a1 estimatedDuration:(double)a2 waitTimeTip:(id)a3 uglyContextDict:(id)a4 resultCompleted:(id /* block */)a5;
- (id)loraGetCoverImageWithLoraInfo:(id)a0;
- (void)_handleLoraSyncSaveDraftFinish:(BOOL)a0 forbid:(BOOL)a1 taskID:(id)a2 trackParams:(id)a3 completion:(id /* block */)a4;
- (void)_handleTemplateAsyncSaveDraftResult:(BOOL)a0 taskID:(id)a1 estimatedDuration:(double)a2 completion:(id /* block */)a3;
- (void)_handleAIMemoriesAsyncSaveDraftResult:(BOOL)a0 taskID:(id)a1 estimatedDuration:(double)a2 completion:(id /* block */)a3;
- (void)saveDraftWithData:(id)a0 state:(long long)a1 effect:(id)a2 msgToEffectStart:(double)a3 newAigcPipeline:(BOOL)a4 resultCompleted:(id /* block */)a5;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end

@protocol AWEAIGCBusinessTaskProtocol;

@interface ACCStudioAIMemoriesTaskModel : ACCEditViewModel

@property (weak, nonatomic) id<AWEAIGCBusinessTaskProtocol> aigcTask;
@property (retain, nonatomic) id<AWEAIGCBusinessTaskProtocol> aigcDraftRecoverTask;
@property (copy, nonatomic) id /* block */ requestGenerationBlock;
@property (copy, nonatomic) id /* block */ generationCompletion;
@property (nonatomic) BOOL isFromDraftReOpenTask;

- (void)stopLongConnectionAndQueryTask;
- (void)showDebugToast:(id)a0;
- (void)transferAsyncTaskForUnifyInteraction;
- (void)removeBusinessTask;
- (id)createAIMemoriesTaskWithExtraInfo:(id)a0 requestGenerationBlock:(id /* block */)a1 generationCompletion:(id /* block */)a2;
- (void)cancelTaskForAIMemories;
- (void)p_revertTaskFromDraftWith:(id)a0 requestGenerationBlock:(id /* block */)a1 generationCompletion:(id /* block */)a2;
- (void)p_buildAiMemoriesTask:(id)a0 requestGenerationBlock:(id /* block */)a1 generationCompletion:(id /* block */)a2;
- (void)trackerForCreateEffect;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)dealloc;

@end

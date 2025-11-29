@protocol AWEAIGCBusinessTaskProtocol;

@interface ACCAIImageToLiveTaskModel : ACCEditViewModel

@property (weak, nonatomic) id<AWEAIGCBusinessTaskProtocol> aigcTask;
@property (copy, nonatomic) id /* block */ isProcess;
@property (copy, nonatomic) id /* block */ prepareEffectDataFinish;
@property (copy, nonatomic) id /* block */ taskUnifyInteractionBlock;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isFromDraftReOpenTask;

- (void)stopLongConnectionAndQueryTask;
- (void)transferAsyncTaskForUnifyInteraction;
- (void)cancelTaskForImage2Live;
- (id)createImage2LiveTaskWithExtraInfo:(id)a0 isProcess:(id /* block */)a1 prepareEffectDataFinish:(id /* block */)a2 taskUnifyInteractionBlock:(id /* block */)a3 taskDownCompletion:(id /* block */)a4;
- (void)trackImage2LivesLoadingWillBegin;
- (void)p_revertTaskFromDraftWith:(id)a0 completion:(id /* block */)a1 isProcess:(id /* block */)a2 prepareEffectDataFinish:(id /* block */)a3 taskUnifyInteractionBlock:(id /* block */)a4;
- (void)p_buildAiProcessTask:(id)a0 completion:(id /* block */)a1 isProcess:(id /* block */)a2 prepareEffectDataFinish:(id /* block */)a3 taskUnifyInteractionBlock:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)dealloc;

@end

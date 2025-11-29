@class AWEAIGCBusinessRequestModel, AWEAIGCProcessResultModel, NSMutableDictionary, NSString, NSMutableArray;
@protocol AWEAIGCBusinessInjectHandler, IESLCMessageHandlerProtocol;

@interface AWEAIGCAIMemoriesBusinessTask : NSObject <IESLCMessageHandlerService, AWEAIGCBusinessTaskProtocol, AWEAIGCBusinessProcessProtocol>

@property (retain, nonatomic) NSMutableDictionary *stageTrackMap;
@property (retain, nonatomic) NSMutableDictionary *trackInfo;
@property (retain, nonatomic) AWEAIGCBusinessRequestModel *requestModel;
@property (retain, nonatomic) id<AWEAIGCBusinessInjectHandler> handler;
@property (retain, nonatomic) AWEAIGCProcessResultModel *resultModel;
@property (copy, nonatomic) id /* block */ requestGenerationBlock;
@property (copy, nonatomic) id /* block */ generationCompletion;
@property (retain, nonatomic) NSMutableArray *aigcStartUploadProtocols;
@property (nonatomic) BOOL handleResult;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)stopLongConnectionAndQueryTask;
- (void)showDebugToast:(id)a0;
- (void)startLongConnectionAndQueryTask;
- (void)observerAIProcessBusinessTaskUnifyInteractionCompletion:(id /* block */)a0;
- (void)observerAIProcessBusinessTaskCompletion:(id /* block */)a0;
- (void)initialResultModelForDraftRecorver:(id)a0;
- (void)transferAsyncTask;
- (void)startDelayQueryTask;
- (void)addSLCMessageSubscriber;
- (void)removeSLCMessageSubscriber;
- (void)uploadImageList:(id)a0;
- (void)submitTaskWithImageUploadResult:(id)a0;
- (void)handleAigcStartUploadImages:(id)a0 extra:(id)a1 authParameters:(id)a2 result:(id /* block */)a3;
- (void)p_queryCurrentTask;
- (void)p_handleAIMemoriesResultWithQueryInfo:(id)a0 statusMsg:(id)a1 receivedFrom:(id)a2;
- (void)markTaskFinish;
- (id)initWithRequestModel:(id)a0 injectClassHandler:(Class)a1;
- (void)runTaskWithAuthor:(id)a0 error:(id)a1;
- (BOOL)hasIgnoreAuthor;
- (void).cxx_destruct;
- (void)stopQuery;
- (void)cancelTask;

@end

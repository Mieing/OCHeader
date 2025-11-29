@class AWEAIGCBusinessRequestModel, AWEAIGCProcessResultModel, NSMutableDictionary, AWEAIGCBusinessScheduleProgress, NSString, NSMutableArray;
@protocol AWEAIGCBusinessInjectHandler, IESLCMessageHandlerProtocol;

@interface AWEAIGCTemplateBusinessTask : NSObject <IESLCMessageHandlerService, AWEAIGCBusinessTaskProtocol, AWEAIGCBusinessProcessProtocol>

@property (retain, nonatomic) AWEAIGCBusinessRequestModel *requestModel;
@property (retain, nonatomic) AWEAIGCProcessResultModel *resultModel;
@property (retain, nonatomic) NSMutableDictionary *stageTrackMap;
@property (retain, nonatomic) NSMutableDictionary *trackInfo;
@property (nonatomic) double initialTimeInterval;
@property (nonatomic) double lastStageTimeInterval;
@property (retain, nonatomic) NSMutableArray *imageUploadProtocols;
@property (nonatomic) double querryStartTimeInterval;
@property (copy, nonatomic) id /* block */ interactionResultBlock;
@property (copy, nonatomic) id /* block */ completedBlock;
@property (retain, nonatomic) AWEAIGCBusinessScheduleProgress *progress;
@property (retain, nonatomic) id<AWEAIGCBusinessInjectHandler> handler;
@property (nonatomic) BOOL handleResult;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)stopLongConnectionAndQueryTask;
- (unsigned long long)convertType;
- (id)getAIGCType;
- (void)startLongConnectionAndQueryTask;
- (void)observerAIProcessBusinessTaskUnifyInteractionCompletion:(id /* block */)a0;
- (void)observerAIProcessBusinessTaskCompletion:(id /* block */)a0;
- (void)startRepeatQueryTask;
- (void)transferAsyncTask;
- (void)observerBusinessProgress:(id /* block */)a0;
- (void)startDelayQueryTask;
- (void)addSLCMessageSubscriber;
- (void)removeSLCMessageSubscriber;
- (void)uploadImageList:(id)a0;
- (void)submitTaskWithImageUploadResult:(id)a0;
- (void)handleAigcStartUploadImages:(id)a0 extra:(id)a1 authParameters:(id)a2 result:(id /* block */)a3;
- (void)p_queryCurrentTask;
- (void)markTaskFinish;
- (id)initWithRequestModel:(id)a0 injectClassHandler:(Class)a1;
- (void)runTaskWithAuthor:(id)a0 error:(id)a1;
- (BOOL)hasIgnoreAuthor;
- (id)getTaskId;
- (void)stopLongConnection;
- (void)finishTask:(id)a0 error:(id)a1;
- (void)p_handleResultWith:(id)a0 error:(id)a1;
- (void)p_parseAIProcessServiceResult;
- (void)preprocessImages:(id)a0 tos:(id)a1;
- (id)convertToImageDictWithImagePaths:(id)a0 cachedTOSArray:(id)a1 resultTOSDict:(id)a2;
- (void)updateTOSCacheWithImagePaths:(id)a0 cachedTOSArray:(id)a1;
- (void)roundAIGCStartUploadImages:(id)a0 extra:(id)a1 authParameters:(id)a2 result:(id /* block */)a3;
- (void)fillReusedTOSIfNeededWithImages:(id)a0 tos:(id)a1;
- (void)resizeImagesIfNeededWithImages:(id)a0 tos:(id)a1;
- (void).cxx_destruct;
- (void)stopQuery;

@end

@class AWEAIGCBusinessRequestModel, NSString, AWEAIGCProcessResultModel, NSNumber;
@protocol AWEAIGCBusinessInjectHandler, IESLCMessageHandlerProtocol;

@interface ACCAIGCUnifyLoadingViewModel : NSObject <IESLCMessageHandlerService>

@property (copy, nonatomic) NSString *currentTaskId;
@property (nonatomic) BOOL isAsync;
@property (nonatomic) BOOL isMultiLora;
@property (nonatomic) BOOL handleResult;
@property (nonatomic) double startTimeInterval;
@property (nonatomic) double querryStartTimeInterval;
@property (nonatomic) double longStartTimeInterval;
@property (retain, nonatomic) NSNumber *referenceImageCount;
@property (nonatomic) BOOL isQuerying;
@property (nonatomic) unsigned long long queryCount;
@property (retain, nonatomic) id<AWEAIGCBusinessInjectHandler> handler;
@property (retain, nonatomic) AWEAIGCBusinessRequestModel *requestModel;
@property (retain, nonatomic) AWEAIGCProcessResultModel *resultModel;
@property (copy, nonatomic) id /* block */ completedBlock;
@property (copy, nonatomic) id /* block */ interactionResultBlock;
@property (copy, nonatomic) id /* block */ resourceBlock;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)stopLongConnectionAndQueryTask;
- (id)getAIGCType;
- (void)startLongConnectionAndQueryTask;
- (void)observerReceiveRequestResourceModelWith:(id /* block */)a0;
- (void)observerAIProcessBusinessTaskUnifyInteractionCompletion:(id /* block */)a0;
- (void)observerAIProcessBusinessTaskCompletion:(id /* block */)a0;
- (void)updateRequestModel:(id)a0 handle:(id)a1;
- (void)updateCurrentPageTaskId:(id)a0 isMultiLora:(BOOL)a1;
- (void)startDelayQueryTask:(BOOL)a0;
- (void)p_queryCurrentTask;
- (void)trackAICoreBusinessStepSubEventWith:(unsigned long long)a0 error:(id)a1;
- (void)p_handleResultWith:(id)a0 requestModel:(id)a1 error:(id)a2;
- (id)getMultiLoraProfileNum;
- (void)p_parseAiProcessTypeLoraSyncServiceResultWith:(id)a0 requestModel:(id)a1 completion:(id /* block */)a2;
- (void)p_parseAIProcessServiceResultWith:(id)a0 requestModel:(id)a1 completion:(id /* block */)a2;
- (void)stopLongConnection;
- (void)trackToolsAIGCCorePicDownloadUrl:(id)a0 assetsCount:(long long)a1 isSucceeded:(BOOL)a2 errorCode:(long long)a3;
- (void)trackToolsAIGCCoreAIProcessReview:(id)a0 serverTaskId:(id)a1 stageTrackMap:(id)a2 assetsCount:(long long)a3 isSucceeded:(BOOL)a4 errorCode:(long long)a5;
- (void)trackMonitorGenerateAllTimeConsuming:(double)a0 statusCode:(long long)a1 errorCode:(long long)a2;
- (void)p_addSLCMessageSubscriber;
- (void)p_removeSLCMessageSubscriber;
- (void)p_markTaskFinish;
- (void)cancelTask:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stopQuery;
- (id)getScene;

@end

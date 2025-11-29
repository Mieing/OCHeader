@class NSMutableDictionary, RxScheduler, RTVInteractionOperationController, NSString, RTVInteractionWebService;
@protocol RxInjector, RTVUserProfileManagerInterface, RTVInteractionMonitorInterface;

@interface RTVInteractionClient : NSObject <RTVInteractionClientInterface, RTVInteractionServiceInterface>

@property (readonly, nonatomic) RxScheduler *scheduler;
@property (retain, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (retain, nonatomic) RTVInteractionWebService *webService;
@property (retain, nonatomic) RTVInteractionOperationController *operationDataController;
@property (retain, nonatomic) id<RTVInteractionMonitorInterface> monitor;
@property (nonatomic) long long lastestOperationID;
@property (retain, nonatomic) NSMutableDictionary *observers;
@property (retain, nonatomic) NSMutableDictionary *operationRequestInfos;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)didReceiveOpeartionDictionary:(id)a0;
- (void)didReceiveReplyOperationDictionary:(id)a0;
- (void)ackMessageWithSequenceID:(id)a0;
- (void)pullReceiveOperationsWithRoomID:(long long)a0;
- (void)addOperationObserver:(id)a0 forBusinessTypes:(id)a1;
- (void)removeOperationObserver:(id)a0;
- (id)executeOperationWithoutReplyWait:(id)a0;
- (id)replyOperation:(id)a0 replyContentString:(id)a1 result:(BOOL)a2;
- (id)isTheLastestOperationWithOperationID:(long long)a0;
- (id)__requestTaskWithOperation:(id)a0;
- (id)__cancelExecuteRequestTask:(id)a0;
- (id)__executeOperation:(id)a0 needReply:(BOOL)a1;
- (id)__tryToExecuteRequestTask:(id)a0;
- (id)__executeRequestTaskImmediately:(id)a0;
- (void)__handleReceiveOperation:(id)a0;
- (void)__handleReceiveReplyOperation:(id)a0;
- (void).cxx_destruct;
- (id)cancelOperation:(id)a0;
- (id)executeOperation:(id)a0;

@end

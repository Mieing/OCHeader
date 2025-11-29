@class NSArray, NSDictionary, NSOperationQueue, NSString;
@protocol RTVStateMachineLogService, RxInjector, RTVStateMachineInterface;

@interface RTVStateTransferActionHandlerManager : NSObject <RTVStateTransferActionHandlerManagerInterface>

@property (readonly, nonatomic) NSDictionary *stateTransferHandersMap;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) id<RTVStateMachineInterface> stateMachine;
@property (readonly, copy, nonatomic) NSArray *actionHandlerClasses;
@property (weak, nonatomic) id<RTVStateMachineLogService> logService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rxInjectorCreateWithArgs:(id)a0 injector:(id)a1;

- (void)rxAwakeFromPropertyInjection;
- (id)initWithStateMachine:(id)a0 registerActionHandlers:(id)a1;
- (void)__initialOperationQueue;
- (id)registerStateActionHandlers;
- (void).cxx_destruct;
- (id)handleAction:(id)a0;

@end

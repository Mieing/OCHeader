@class NSArray, NSString;
@protocol IESIMFlowOutputContext, IESIMFlowInputContext, IESIMFlowDelegate, IESIMFlowNodeProtocol;

@interface IESIMSerialFlow : NSObject <IESIMFlowProtocol>

@property (retain, nonatomic) id<IESIMFlowInputContext> inputContext;
@property (retain, nonatomic) id<IESIMFlowOutputContext> outputContext;
@property (copy, nonatomic) NSArray *nodes;
@property (weak, nonatomic) id<IESIMFlowNodeProtocol> currentRunningNode;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) double startTime;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<IESIMFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNodes:(id)a0 context:(id)a1;
- (void)willBeginFlow:(id)a0;
- (void)executeNode:(id)a0 prevOutput:(id)a1;
- (void)asyncToFlowQueue:(id /* block */)a0;
- (void)didFinishFlowError:(id)a0;
- (void)callBackNodeStart:(id)a0;
- (void)callBackUpdateNode:(id)a0 progress:(double)a1;
- (void)handleNodeCompletion:(id)a0 output:(id)a1 duration:(long long)a2 error:(id)a3;
- (void)callBackNodeEnd:(id)a0 output:(id)a1 duration:(long long)a2 error:(id)a3;
- (void)asyncToCallBackQueue:(id /* block */)a0;
- (void).cxx_destruct;
- (void)run;
- (void)setupTimeout;
- (void)cancel;

@end

@class NSArray, NSString;
@protocol BDXBridgeDispatcherDelegate;

@interface BDXBridgeDispatcher : NSObject <BDXBridgeEngineCallMessageHandler>

@property (copy, nonatomic) NSArray *executors;
@property (weak, nonatomic) id<BDXBridgeDispatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleCallMessage:(id)a0 resultHandler:(id /* block */)a1;
- (void)sortExecutorByPriority;
- (id)initWithExecutors:(id)a0;
- (BOOL)lynxView:(id)a0 shouldCall:(id)a1 params:(id)a2 callback:(id /* block */)a3;
- (void).cxx_destruct;

@end

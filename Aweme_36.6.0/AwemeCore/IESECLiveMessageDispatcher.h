@class IESECLiveIMConfig, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, IESECLiveIMPaaSWorker;

@interface IESECLiveMessageDispatcher : NSObject <IESECLiveMessageSubscriber, IESECLiveIMManager, IESECLiveMessageDispatcher>

@property (retain, nonatomic) NSMutableDictionary *subscribers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *decodeQueue;
@property (retain, nonatomic) id<IESECLiveIMPaaSWorker> worker;
@property (retain, nonatomic) IESECLiveIMConfig *currentConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configConnection:(id)a0;
- (void)unSubscribeForAll:(id)a0;
- (void)addSubscriber:(id)a0 forClasses:(id)a1;
- (void)unSubscribe:(id)a0 forClass:(Class)a1;
- (void)generalMessageMessageReceived:(id)a0;
- (void)p_configConnection:(id)a0;
- (void)p_messageReceived:(id)a0;
- (BOOL)shouldReceivedMessage:(id)a0;
- (BOOL)p_addSubscribe:(id)a0 forKey:(id)a1;
- (BOOL)p_unSubscribe:(id)a0 forKey:(id)a1;
- (id)decodeMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)dispatchMessage:(id)a0;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end

@class NSArray, NSString, IESLiveExecutionMessageDispatcher, NSMutableDictionary, IESLiveExecutionSequenceQueue;

@interface IESLiveExecutionModule : NSObject <IESLiveExecutionMessageHandlerProtocol>

@property (nonatomic) BOOL isExecuting;
@property (weak, nonatomic) IESLiveExecutionSequenceQueue *sequenceQueue;
@property (retain, nonatomic) IESLiveExecutionMessageDispatcher *messageDispatcher;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSArray *subscribeMsgTypes;
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableDictionary *messageTokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subscribeMessages;
- (id)executeForStage:(id)a0 withContext:(id)a1 params:(id)a2;
- (void)subscribeMessageTypes:(id)a0;
- (void)handleMessage:(id)a0;
- (void)sendMessage:(id)a0;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

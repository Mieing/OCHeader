@class HTSEventContext, NSString, IESLivePublicScreenContext, NSMutableArray, IESLivePublicScreenDataFlowManager;
@protocol IESLivePublicScreenMonitorProtocol, IESLiveMessageListIndividualPriorityQueueProtocol;

@interface IESLivePublicScreenPriorityDataHandlerAttachment : NSObject <IESLivePSDataFlowAttachmentProtocol, IESLivePublicScreenHeatSubscriber, IESLivePublicScreenMessageHandlerProtocol, IESLivePublicScreenNodeHandlerProtocol>

@property (retain, nonatomic) id<IESLiveMessageListIndividualPriorityQueueProtocol> messagePriorityQueue;
@property (retain, nonatomic) id<IESLiveMessageListIndividualPriorityQueueProtocol> nodePriorityQueue;
@property (retain, nonatomic) NSMutableArray *messagesConsumeBuffer;
@property (retain, nonatomic) NSMutableArray *nodeConsumeBuffer;
@property (nonatomic) long long highPriorityProtectThreshold;
@property (nonatomic) long long lowPriorityProtectThreshold;
@property (nonatomic) BOOL enableHighPriorityStratery;
@property (nonatomic) BOOL enableLowPriorityStratery;
@property (weak, nonatomic) IESLivePublicScreenDataFlowManager *dataFlowManager;
@property (retain, nonatomic) IESLivePublicScreenContext *publicScreenContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ didAttach;
@property (copy, nonatomic) id /* block */ didDetach;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLivePublicScreenMonitorProtocol> monitor;

- (BOOL)shouldActive;
- (void)removeAllMessageBuffer;
- (void)removeAllNodeBuffer;
- (BOOL)enableConsumeMessages;
- (long long)messageHandlerType;
- (BOOL)addMessageToBuffer:(id)a0;
- (id)consumeMessagesWithLimitCount:(long long)a0;
- (id)allBufferMessages;
- (long long)nodeHandlerType;
- (BOOL)addNodeToBuffer:(id)a0;
- (id)consumeRefreshNodesWithLimitCount:(long long)a0;
- (id)allBufferNodes;
- (void)receivedMessageCountIn30Seconds:(long long)a0;
- (id)abilityProtocol;
- (id)livePublicScreenIndividualConfig:(BOOL)a0;
- (void)setupBuffers;
- (void)setupWithIndividualConfig:(id)a0;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;

@end

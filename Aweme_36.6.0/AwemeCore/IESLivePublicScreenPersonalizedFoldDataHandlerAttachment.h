@class IESLiveMessageListFoldPriorityQueue, HTSEventContext, IESLivePublicScreenContext, NSString, NSMutableArray, IESLivePublicScreenDataFlowManager;
@protocol IESLivePublicScreenMonitorProtocol;

@interface IESLivePublicScreenPersonalizedFoldDataHandlerAttachment : NSObject <IESLivePSDataFlowAttachmentProtocol, IESLivePublicScreenMessageHandlerProtocol, IESLivePublicScreenNodeHandlerProtocol>

@property (retain, nonatomic) IESLiveMessageListFoldPriorityQueue *foldMessageQueue;
@property (retain, nonatomic) IESLiveMessageListFoldPriorityQueue *foldNodeQueue;
@property (retain, nonatomic) NSMutableArray *consumeMessagesBuffer;
@property (retain, nonatomic) NSMutableArray *consumeNodesBuffer;
@property (nonatomic) long long foldMessageBufferMaxCount;
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
- (id)consumeFoldNode;
- (id)abilityProtocol;
- (BOOL)isSendByCurrentUser:(id)a0;
- (id)livePublicScreenIndividualConfig:(BOOL)a0;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;
- (void)setup;

@end

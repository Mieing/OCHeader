@class HTSEventContext, NSString, IESLivePublicScreenContext, NSMutableArray, IESLivePublicScreenDataFlowManager;
@protocol IESLivePublicScreenMonitorProtocol;

@interface IESLivePublicScreenFoldDataHandlerAttachment : NSObject <IESLivePSDataFlowAttachmentProtocol, IESLivePublicScreenMessageHandlerProtocol, IESLivePublicScreenNodeHandlerProtocol, IESLivePublicScreenFoldDataHandlerService>

@property (retain, nonatomic) NSMutableArray *foldMessagesBuffer;
@property (retain, nonatomic) NSMutableArray *foldNodeBuffer;
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
- (BOOL)needFoldForMessage:(id)a0 nodeStrategy:(id)a1;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;
- (void)setup;

@end

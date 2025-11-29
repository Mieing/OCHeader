@class NSString, HTSEventContext, IESLivePublicScreenContext, NSMutableArray, IESLivePublicScreenDataFlowManager;
@protocol IESLivePublicScreenMonitorProtocol;

@interface IESLivePublicScreenBatchUpdatesAttachment : NSObject <IESLivePublicScreenBatchUpdatesService, IESLivePSDataFlowAttachmentProtocol, IESLivePublicScreenNodeHandlerProtocol>

@property (nonatomic) BOOL shouldBlockNodeUpdates;
@property (retain, nonatomic) NSMutableArray *batchBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) IESLivePublicScreenDataFlowManager *dataFlowManager;
@property (retain, nonatomic) IESLivePublicScreenContext *publicScreenContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ didAttach;
@property (copy, nonatomic) id /* block */ didDetach;
@property (retain, nonatomic) id<IESLivePublicScreenMonitorProtocol> monitor;

- (BOOL)shouldActive;
- (void)removeAllNodeBuffer;
- (long long)nodeHandlerType;
- (BOOL)addNodeToBuffer:(id)a0;
- (id)consumeRefreshNodesWithLimitCount:(long long)a0;
- (id)allBufferNodes;
- (id)abilityProtocol;
- (BOOL)shouldBlockUpdates;
- (void)recoverBlock;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;
- (void)dealloc;
- (unsigned long long)refreshCount;

@end

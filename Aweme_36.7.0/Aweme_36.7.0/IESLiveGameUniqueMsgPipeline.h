@class NSString;

@interface IESLiveGameUniqueMsgPipeline : NSObject <IESLivePipelineDelegate>

@property (copy, nonatomic) NSString *connectId;
@property (nonatomic) BOOL isReceivedEntranceMsg;
@property (nonatomic) BOOL isReceivedGameStartMsg;
@property (nonatomic) BOOL isReceivedGameStopMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receivePacket:(id)a0 throwPacketBlock:(id /* block */)a1;
- (void)handleEntranceMsgWithPacket:(id)a0 throwPacketBlock:(id /* block */)a1;
- (void)handleStartMsgWithPacket:(id)a0 throwPacketBlock:(id /* block */)a1;
- (void)handleStopMsgWithPacket:(id)a0 throwPacketBlock:(id /* block */)a1;
- (void)clearVars;
- (void).cxx_destruct;

@end

@class NSString;

@interface IESLiveGameErrorMsgFilterPipeline : NSObject <IESLivePipelineDelegate>

@property (copy, nonatomic) NSString *connectId;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) long long seq;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receivePacket:(id)a0 throwPacketBlock:(id /* block */)a1;
- (void)updateConnectId:(id)a0 appId:(id)a1 seq:(long long)a2;
- (BOOL)shouldHandleMsgWithConnID:(id)a0;
- (void).cxx_destruct;
- (void)clear;

@end

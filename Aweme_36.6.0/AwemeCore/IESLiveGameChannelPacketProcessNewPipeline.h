@class NSString;

@interface IESLiveGameChannelPacketProcessNewPipeline : NSObject <IESLivePipelineDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receivePacket:(id)a0 throwPacketBlock:(id /* block */)a1;
- (void)processPacket:(id)a0 completion:(id /* block */)a1;
- (void)processPacket:(id)a0 info:(id)a1 completion:(id /* block */)a2;

@end

@class NSString;

@interface IESLiveGameHeartBeatPipeline : NSObject <IESLiveSocialInteractAction, IESLiveMultiAudioAction, IESLivePipelineDelegate>

@property (nonatomic) BOOL ignoreNoRTCSEIRceived;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)didJoinChannelWithLayout:(id)a0;
- (void)didLeaveChannelWithLayout:(id)a0;
- (void)receivePacket:(id)a0 throwPacketBlock:(id /* block */)a1;
- (void)processPacket:(id)a0 appId:(id)a1 connectId:(id)a2 seq:(long long)a3 msgType:(unsigned long long)a4 msgContentType:(unsigned long long)a5;
- (void)didJoinChannel:(BOOL)a0;

@end

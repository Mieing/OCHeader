@class IESLiveAAIGameSyncVideoStreamUtil, NSString;

@interface IESLiveGameSyncVideoStreamPipeline : NSObject <IESLiveAAIGameSyncVideoStreamUtilDelegate, IESLivePipelineDelegate>

@property (retain, nonatomic) IESLiveAAIGameSyncVideoStreamUtil *syncVideoStreamUtil;
@property (copy, nonatomic) id /* block */ throwPacketBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)syncVideoStreamUtil:(id)a0 receiveSyncVideoStreamMsg:(id)a1;
- (void)receivePacket:(id)a0 throwPacketBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end

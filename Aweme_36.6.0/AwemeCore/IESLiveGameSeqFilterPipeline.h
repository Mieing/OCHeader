@class NSString, NSMutableOrderedSet;

@interface IESLiveGameSeqFilterPipeline : NSObject <IESLivePipelineDelegate>

@property (retain, nonatomic) NSMutableOrderedSet *receivedMessagesSeqNumber;
@property (retain, nonatomic) NSMutableOrderedSet *uploadedLogSeqQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receivePacket:(id)a0 throwPacketBlock:(id /* block */)a1;
- (BOOL)isNeedFilterSeq:(long long)a0;
- (BOOL)isNeedUploadLog:(long long)a0;
- (void)handleUploadedSeqQueueOverLimit;
- (void)handleSeqQueueOverLimit;
- (void).cxx_destruct;
- (id)init;

@end

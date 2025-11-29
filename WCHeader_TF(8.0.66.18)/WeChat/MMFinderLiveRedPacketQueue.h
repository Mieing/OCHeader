@class NSString, MMFinderLiveTaskId, NSMutableArray, MMFinderLiveRedPacketItem;

@interface MMFinderLiveRedPacketQueue : NSObject <MMFinderLiveRedPacketItemObserver>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (copy, nonatomic) NSString *senderMicId;
@property (retain, nonatomic) NSMutableArray *redPackets;
@property (readonly, copy, nonatomic) NSString *observedKey;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) MMFinderLiveRedPacketItem *firstRedPacket;
@property (readonly, nonatomic) MMFinderLiveRedPacketItem *lastRedPacket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 senderMicId:(id)a1;
- (id)init;
- (void)addRedPacket:(id)a0;
- (void)removeRedPacket:(id)a0;
- (void)willAddRedPacket:(id)a0;
- (void)willRemoveRedPacket:(id)a0;
- (void)didAddRedPacket:(id)a0;
- (void)didRemoveRedPacket:(id)a0;
- (void)redPacketItem:(id)a0 statusDidChange:(long long)a1;
- (void).cxx_destruct;

@end

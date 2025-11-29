@class MMFinderLiveRedPacketItem, NSString, MMFinderLiveTaskId, MMFinderLiveRedPacketLogic, MMFinderLiveRedPacketQueue;

@interface MMFinderLiveRedPacketViewModel : NSObject <MMFinderLiveRedPacketQueueObserver, MMFinderLiveRedPacketItemObserver>

@property (weak, nonatomic) MMFinderLiveRedPacketLogic *logic;
@property (retain, nonatomic) MMFinderLiveRedPacketQueue *queue;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (copy, nonatomic) NSString *senderMicId;
@property (retain, nonatomic) MMFinderLiveRedPacketItem *targetRedPacket;
@property (nonatomic) BOOL remainingTimeHidden;
@property (copy, nonatomic) NSString *remainingTimeString;
@property (nonatomic) unsigned long long count;
@property (nonatomic) BOOL hidden;
@property (readonly, copy, nonatomic) NSString *observedKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 senderMicId:(id)a1;
- (void)refreshRemainingTimeHidden:(BOOL)a0;
- (void)refreshRemainingTimeStringWithTimeInterval:(unsigned int)a0;
- (void)refreshRedPacketCount:(unsigned long long)a0;
- (void)refreshHiddenWithRedPacketCount:(unsigned long long)a0;
- (void)openTargetRedPacket;
- (void)redPacketQueueDidChange:(id)a0;
- (void)redPacketItem:(id)a0 remainingTimeDidChange:(unsigned int)a1;
- (void).cxx_destruct;

@end

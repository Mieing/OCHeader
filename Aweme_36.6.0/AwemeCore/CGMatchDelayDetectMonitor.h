@class NSTimer, NSMapTable, NSString;

@interface CGMatchDelayDetectMonitor : CGMatchObject <CGCloudPlayerStatusUpdateMessage, CGRTCSEIMessageDelegate>

@property (nonatomic) unsigned long long loopPeriod;
@property (nonatomic) unsigned long long frames;
@property (retain) NSTimer *loopTimer;
@property (retain, nonatomic) NSMapTable *delayEventTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1 room:(id)a2 dataChannel:(id)a3;
- (void)detectDelay;
- (void)sendOperationDelayDetectCommand:(id)a0 frames:(unsigned long long)a1;
- (void)handleDelayPBModel:(id)a0 event:(id)a1;
- (void)handleDelayJson:(id)a0 event:(id)a1;
- (void)receiveDelayPBData:(id)a0;
- (void)receiveDelayData:(id)a0;
- (void)onSEIMessageReceived:(id)a0 uid:(id)a1;
- (void)item:(id)a0 cloudPlayer:(id)a1 statusDidUpdated:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;

@end

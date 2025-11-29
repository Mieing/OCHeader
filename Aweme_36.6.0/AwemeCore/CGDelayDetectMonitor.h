@class NSTimer, NSMapTable, NSString;
@protocol XPlayDelayMonitorDelegate;

@interface CGDelayDetectMonitor : CGObject <CGCloudPlayerStatusUpdateMessage, CGRTCSEIMessageDelegate, XPlayDelayMonitor> {
    id<XPlayDelayMonitorDelegate> delegate;
}

@property (nonatomic) unsigned long long loopPeriod;
@property (nonatomic) unsigned long long frames;
@property (retain) NSTimer *loopTimer;
@property (retain, nonatomic) NSMapTable *delayEventTable;
@property (nonatomic) double lastFullLinkDetectTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)handleFullLinkDelayDetectEventWithData:(id)a0;
- (double)calculateAverageDelayWithStartTime:(double)a0 endTimeArr:(id)a1;
- (double)calculateAverageDelayWithStartTimeArr:(id)a0 endTimeArr:(id)a1;
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
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)a0;

@end

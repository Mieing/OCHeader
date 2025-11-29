@class NSThread, NSTimer, NSMutableDictionary, NSString, NSLock, BDCastProxyRemuxer;

@interface BDCastFLVStreamProducer : NSObject {
    id /* block */ _streamDataAvailableBlock;
}

@property (retain, nonatomic) NSThread *thread;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSLock *dataPoolAccessLock;
@property (retain, nonatomic) NSMutableDictionary *dataPool;
@property unsigned long long dataIndex;
@property (nonatomic) unsigned long long consumedDataIndex;
@property (nonatomic) long long totalNoStreamDataAvailableBlockTimes;
@property unsigned long long consumedDataLength;
@property (retain, nonatomic) NSLock *blockAccessLock;
@property (copy, nonatomic) NSString *requestId;
@property (weak, nonatomic) BDCastProxyRemuxer *remuxer;
@property (copy, nonatomic) id /* block */ noStreamDataAvailableBlockMaxTimesReached;
@property (copy, nonatomic) id /* block */ noStreamDataAvailableBlockWarningTimesReached;
@property (nonatomic) long long maxNoStreamDataAvailableBlockTimes;
@property (nonatomic) long long discardPacketNoStreamDataAvailableBlockTimes;

- (void)threadEntryPoint:(id)a0;
- (void)cancelThread;
- (void)setStreamDataAvailableBlock:(id /* block */)a0;
- (void)timerFired:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)addData:(id)a0;
- (void)dealloc;

@end

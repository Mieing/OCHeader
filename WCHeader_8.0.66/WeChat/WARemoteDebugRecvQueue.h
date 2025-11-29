@class NSMutableArray;
@protocol WARemoteDebugRecvQueueDelegate;

@interface WARemoteDebugRecvQueue : NSObject {
    NSMutableArray *_recvIntervalList;
    unsigned int _currRecvSeq;
    unsigned int _prevRecvSeq;
    unsigned int _accumulateCount;
}

@property (weak, nonatomic) id<WARemoteDebugRecvQueueDelegate> delegate;

- (id)init;
- (void)mergeMessages:(id)a0 cmdID:(unsigned int)a1;
- (void)handleFirstRecvInterval;
- (void)logRecvIntervalList;
- (unsigned int)getCurrRecvSeq;
- (unsigned int)getIntervalRecvCount;
- (void)clearAccumulateCount;
- (void).cxx_destruct;

@end

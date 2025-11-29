@class NSRecursiveLock, NSArray, NSNumber, NSMutableArray;

@interface CSPChunkDataMonitorRecord : NSObject

@property (retain, nonatomic) NSMutableArray *chunkReceiveTSStore;
@property (retain, nonatomic) NSMutableArray *numberOfBytesReceiveStore;
@property (retain, nonatomic) NSMutableArray *chunkParsedTSStore;
@property (retain, nonatomic) NSNumber *establishTimestamp;
@property (retain, nonatomic) NSNumber *breakTimestamp;
@property (retain, nonatomic) NSNumber *totalBytesReceived;
@property (retain, nonatomic) NSNumber *firstByteTimestamp;
@property (retain, nonatomic) NSRecursiveLock *receiveTSLock;
@property (retain, nonatomic) NSMutableArray *chunkReceiveTSStore;
@property (retain, nonatomic) NSMutableArray *chunkParsedTSStore;
@property (retain, nonatomic) NSNumber *establishTimestamp;
@property (retain, nonatomic) NSNumber *breakTimestamp;
@property (retain, nonatomic) NSNumber *totalBytesReceived;
@property (retain, nonatomic) NSNumber *firstByteTimestamp;
@property (retain, nonatomic) NSRecursiveLock *receiveTSLock;
@property (retain, nonatomic) NSMutableArray *numberOfBytesReceiveStore;
@property (readonly, copy, nonatomic) NSArray *chunkReceiveDuration;
@property (readonly, copy, nonatomic) NSArray *chunkReceiveTimeStamp;
@property (readonly, copy, nonatomic) NSArray *chunkParsedDuration;
@property (readonly, copy, nonatomic) NSArray *chunkParsedTimeStamp;
@property (readonly, nonatomic) NSNumber *firstByteDuration;
@property (readonly, copy, nonatomic) NSArray *numberOfBytesChunkReceived;

- (void)addToChunkReceiveTSStore:(id)a0;
- (void)addToNumberOfBytesReceiveStore:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)debugDescription;

@end

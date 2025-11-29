@class NSMutableArray;

@interface WARealtimeDataOperationBufferPool : MMObject

@property (retain, nonatomic) NSMutableArray *immediatePriorityBuffer;
@property (retain, nonatomic) NSMutableArray *highPriorityBuffer;
@property (retain, nonatomic) NSMutableArray *normalPriorityBuffer;

- (id)init;
- (void)addOperation:(id)a0;
- (id)dequeueProperBatchOperationsUnderTotalBytesSize:(unsigned long long)a0 actualBytesSize:(unsigned long long *)a1 despiteRetryInterval:(unsigned int)a2;
- (unsigned long long)totalBufferSize;
- (void).cxx_destruct;

@end

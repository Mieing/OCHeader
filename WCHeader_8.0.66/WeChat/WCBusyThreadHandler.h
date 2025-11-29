@class NSLock, NSMutableArray;

@interface WCBusyThreadHandler : NSObject

@property (nonatomic) int size;
@property (nonatomic) int tailIndex;
@property (retain, nonatomic) NSMutableArray *cycleArray;
@property (retain, nonatomic) NSLock *lock;

- (id)initWithCycleArraySize:(int)a0;
- (void)recordBusyThreads;
- (id)makeCallTrees;
- (void).cxx_destruct;

@end

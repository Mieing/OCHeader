@class NSMutableArray;

@interface TTQueue : NSObject

@property (retain) NSMutableArray *array;
@property long long queueSizeMax;

- (id)initWhithSize:(long long)a0;
- (BOOL)enqueue:(id)a0 insertType:(long long)a1;
- (long long)getQueueTaskCount;
- (long long)getQueueSizeMax;
- (void).cxx_destruct;
- (id)dequeue;
- (BOOL)isQueueFull;

@end

@class NSMutableArray;

@interface AWECommerceTaskQueue : NSObject

@property (retain, nonatomic) NSMutableArray *array;

- (void)enqueueElementsFromQueue:(id)a0 filter:(unsigned long long)a1;
- (void)enqueueElementFromQueue:(id)a0 filter:(unsigned long long)a1;
- (BOOL)remove:(id)a0;
- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)init;
- (id)dequeue;
- (long long)size;

@end

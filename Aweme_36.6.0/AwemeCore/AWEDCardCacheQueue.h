@class NSMutableArray;

@interface AWEDCardCacheQueue : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (nonatomic) long long maxSize;

- (void)enqueue:(id)a0;
- (id)peek;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)clear;
- (id)initWithSize:(long long)a0;
- (id)dequeue;
- (long long)size;

@end

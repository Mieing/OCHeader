@class NSMutableArray;

@interface IESEZDanmakuPriorityQueue : IESEZDanmakuQueue

@property (retain, nonatomic) NSMutableArray *insertArray;

- (void)queue:(id)a0;
- (unsigned long long)getPriorityFromData:(id)a0;
- (void).cxx_destruct;
- (id)allObjects;
- (id)dequeue;
- (unsigned long long)count;
- (void)clean;

@end

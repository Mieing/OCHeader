@class NSPointerArray;

@interface AWEHPUIControlTaskPriorityQueue : NSObject

@property (retain, nonatomic) NSPointerArray *queue;

- (void)pushTask:(id)a0;
- (id)topTask;
- (void)removeTask:(id)a0;
- (void).cxx_destruct;

@end

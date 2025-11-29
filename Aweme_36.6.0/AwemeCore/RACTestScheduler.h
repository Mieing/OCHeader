@interface RACTestScheduler : RACScheduler

@property (readonly, nonatomic) struct __CFBinaryHeap { } *scheduledActions;
@property (nonatomic) unsigned long long numberOfDirectlyScheduledBlocks;

- (id)after:(id)a0 schedule:(id /* block */)a1;
- (id)after:(id)a0 repeatingEvery:(double)a1 withLeeway:(double)a2 schedule:(id /* block */)a3;
- (void)stepAll;
- (id)init;
- (void)step;
- (void)dealloc;
- (void)step:(unsigned long long)a0;
- (id)schedule:(id /* block */)a0;

@end

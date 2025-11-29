@interface RxMainQueueScheduler : RxQueueScheduler

+ (BOOL)supportRunLoop;

- (id)initWithName:(id)a0;
- (id)schedule:(id /* block */)a0;

@end

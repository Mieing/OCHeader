@interface RxImmediateScheduler : RxScheduler

- (id)after:(id)a0 schedule:(id /* block */)a1;
- (id)after:(id)a0 repeatingEvery:(double)a1 withLeeway:(double)a2 schedule:(id /* block */)a3;
- (id)init;
- (id)schedule:(id /* block */)a0;

@end

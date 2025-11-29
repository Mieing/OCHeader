@interface RACEagerSequence : RACArraySequence

+ (id)return:(id)a0;

- (id)eagerSequence;
- (id)foldRightWithStart:(id)a0 reduce:(id /* block */)a1;
- (id)lazySequence;
- (id)concat:(id)a0;
- (id)bind:(id /* block */)a0;

@end

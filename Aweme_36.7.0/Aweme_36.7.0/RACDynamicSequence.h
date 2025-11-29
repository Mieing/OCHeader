@class RACSequence;

@interface RACDynamicSequence : RACSequence {
    id _head;
    RACSequence *_tail;
    id _dependency;
}

@property (retain, nonatomic) id headBlock;
@property (retain, nonatomic) id tailBlock;
@property (nonatomic) BOOL hasDependency;
@property (copy, nonatomic) id /* block */ dependencyBlock;

+ (id)sequenceWithHeadBlock:(id /* block */)a0 tailBlock:(id /* block */)a1;
+ (id)sequenceWithLazyDependency:(id /* block */)a0 headBlock:(id /* block */)a1 tailBlock:(id /* block */)a2;

- (id)tail;
- (id)head;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end

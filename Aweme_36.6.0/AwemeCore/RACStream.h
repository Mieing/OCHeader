@class NSString;

@interface RACStream : NSObject

@property (copy) NSString *name;

+ (id)return:(id)a0;
+ (id)join:(id)a0 block:(id /* block */)a1;
+ (id)zip:(id)a0;
+ (id)zip:(id)a0 reduce:(id /* block */)a1;
+ (id)empty;
+ (id)concat:(id)a0;

- (id)zipWith:(id)a0;
- (id)setNameWithFormat:(id)a0;
- (id)flattenMap:(id /* block */)a0;
- (id)scanWithStart:(id)a0 reduce:(id /* block */)a1;
- (id)reduceEach:(id /* block */)a0;
- (id)scanWithStart:(id)a0 reduceWithIndex:(id /* block */)a1;
- (id)takeUntilBlock:(id /* block */)a0;
- (id)skipUntilBlock:(id /* block */)a0;
- (id)mapReplace:(id)a0;
- (id)combinePreviousWithStart:(id)a0 reduce:(id /* block */)a1;
- (id)takeWhileBlock:(id /* block */)a0;
- (id)skipWhileBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)concat:(id)a0;
- (id)init;
- (id)map:(id /* block */)a0;
- (id)take:(unsigned long long)a0;
- (id)startWith:(id)a0;
- (id)ignore:(id)a0;
- (id)distinctUntilChanged;
- (id)filter:(id /* block */)a0;
- (id)skip:(unsigned long long)a0;
- (id)flatten;
- (id)bind:(id /* block */)a0;

@end

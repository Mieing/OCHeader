@interface AWEVideoCachePrefetchTask : AWEVideoCacheRequestTask

+ (id)taskWithURL:(id)a0 queue:(id)a1;
+ (id)taskWithURL:(id)a0 cacheURL:(id)a1 queue:(id)a2;

- (id)initWithURL:(id)a0 cacheURL:(id)a1 queue:(id)a2;
- (void)setUpPrefetchTask;
- (BOOL)startWithSize:(unsigned long long)a0;
- (id)initWithURL:(id)a0 queue:(id)a1;

@end

@protocol AWEVideoPlayerInternalDelegate;

@interface AWEVideoCachePlayTask : AWEVideoCacheRequestTask

@property (weak, nonatomic) id<AWEVideoPlayerInternalDelegate> internalDelegate;

+ (id)taskWithURL:(id)a0 queue:(id)a1 internalDelegate:(id)a2;

- (id)initWithURL:(id)a0 queue:(id)a1 internalDelegate:(id)a2;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (void).cxx_destruct;

@end

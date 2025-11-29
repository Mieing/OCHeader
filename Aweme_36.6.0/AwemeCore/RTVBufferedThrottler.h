@class NSMutableDictionary;

@interface RTVBufferedThrottler : RTVThrottler {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *callbackDic;

- (void)executeWithKey:(id)a0 callback:(id /* block */)a1;
- (id)__doExecute:(BOOL *)a0;
- (BOOL)__continueAfterExecute;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end

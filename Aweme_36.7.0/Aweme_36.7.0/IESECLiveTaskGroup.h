@class NSMutableDictionary;

@interface IESECLiveTaskGroup : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock1;
    long long _count;
}

@property (copy, nonatomic) id /* block */ countChange;
@property (retain, nonatomic) NSMutableDictionary *tasks;
@property (readonly, nonatomic) long long count;

- (id)initWithCountChange:(id /* block */)a0;
- (id)allTask;
- (void)addTask:(id)a0;
- (void)removeTask:(id)a0;
- (void).cxx_destruct;
- (void)setCount:(long long)a0;
- (id)init;

@end

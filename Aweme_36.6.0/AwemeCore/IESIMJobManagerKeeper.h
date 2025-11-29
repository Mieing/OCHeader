@class NSMutableSet;

@interface IESIMJobManagerKeeper : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mutex;
}

@property (class, readonly, nonatomic) IESIMJobManagerKeeper *sharedInstance;

@property (readonly, nonatomic) NSMutableSet *executors;

- (void)pick:(id)a0;
- (void)drop:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end

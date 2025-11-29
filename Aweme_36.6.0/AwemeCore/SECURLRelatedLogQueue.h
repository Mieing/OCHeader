@class NSString, SECURLRelatedLogConcreteNode;

@interface SECURLRelatedLogQueue : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
    SECURLRelatedLogConcreteNode *_head;
    BOOL _empty;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) double toleranceExpire;

- (id)logsBetween:(double)a0 andTime:(double)a1;
- (void)clearExpire;
- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)initWithKey:(id)a0;

@end

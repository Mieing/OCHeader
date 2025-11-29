@class NSArray;

@interface FurionSmartServicePortraitFilter : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (copy, nonatomic) NSArray *conditionDicts;
@property (nonatomic) BOOL reverse;
@property (copy, nonatomic) NSArray *conditions;
@property (nonatomic) BOOL enableLock;

- (BOOL)passTestWithPortraitGetter:(id /* block */)a0;
- (void)doLock;
- (void)doUnlock;
- (id)initWithJSONConfigDict:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

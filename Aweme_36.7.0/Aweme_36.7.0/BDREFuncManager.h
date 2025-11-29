@class NSMutableDictionary;

@interface BDREFuncManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *functions;

+ (id)sharedManager;

- (void)registerFunc:(id)a0;
- (id)getFuncFromSymbol:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

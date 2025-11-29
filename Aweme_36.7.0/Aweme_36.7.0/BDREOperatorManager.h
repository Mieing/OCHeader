@class NSDictionary;

@interface BDREOperatorManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (retain, nonatomic) NSDictionary *operators;

+ (id)sharedManager;

- (id)getOperatorFromSymbol:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)registerOperator:(id)a0;

@end

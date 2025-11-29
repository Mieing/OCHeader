@class NSMutableArray;

@interface AWEPrivacyThreadModule : NSObject

@property (retain, nonatomic) NSMutableArray *aspectors;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;

+ (id)sharedInstance;

- (id)threadModuleInvoke;
- (void)addAspector:(id)a0;
- (void)removeAspector:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

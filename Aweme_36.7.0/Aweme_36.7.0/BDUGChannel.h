@class NSMutableArray;

@interface BDUGChannel : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _observerMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _accountClassMutex;
}

@property (retain, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) Class accountClass;

+ (id)defaultChannel;

- (void)triggerAccountStatusEventWithStatus:(long long)a0;
- (void)addAcountEventObserver:(Class)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

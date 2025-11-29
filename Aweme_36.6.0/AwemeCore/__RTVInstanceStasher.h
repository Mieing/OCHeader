@class NSString, NSMutableSet;

@interface __RTVInstanceStasher : NSObject <RTVInstanceStasher> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex_lock;
}

@property (readonly, nonatomic) NSMutableSet *stashSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

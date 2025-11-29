@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXBatchUpdateAggregaterManager : NSObject <TIMXInstanceScopeSingleton>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedOperationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end

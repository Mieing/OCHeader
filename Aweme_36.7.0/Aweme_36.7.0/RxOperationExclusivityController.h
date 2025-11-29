@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface RxOperationExclusivityController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSMutableDictionary *operations;

+ (id)sharedExclusivityController;

- (void)__addOperation:(id)a0 category:(id)a1;
- (void)__removeOperation:(id)a0 category:(id)a1;
- (void)addOperation:(id)a0 categories:(id)a1;
- (void)removeOperation:(id)a0 categories:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

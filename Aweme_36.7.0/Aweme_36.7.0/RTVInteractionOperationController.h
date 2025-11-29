@class RxScheduler, NSMutableDictionary;
@protocol RxInjector;

@interface RTVInteractionOperationController : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) NSMutableDictionary *operationCache;
@property (readonly, nonatomic) NSMutableDictionary *operationMapper;

- (void)rxAwakeFromPropertyInjection;
- (id)operationWithID:(id)a0;
- (id)operationOfLastestVersionWithSection:(id)a0;
- (id)saveOperation:(id)a0;
- (id)__saveOperation:(id)a0 withSection:(id)a1;
- (void).cxx_destruct;

@end

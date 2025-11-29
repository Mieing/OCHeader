@class NSObject;
@protocol OS_dispatch_queue;

@interface LVDependencyInjector : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;
@property (nonatomic) BOOL ioOptimizeEnabled;

+ (void)setBundleDataSource:(Class)a0;
+ (void)registerTemplateIOQueue:(id)a0;
+ (id)templateIOQueue;
+ (id)shared;

- (void).cxx_destruct;

@end

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEInfraDefaultResourceMetric : NSObject

@property (copy, nonatomic) NSArray *paths;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)dealloc;
- (void)setup;
- (void)metric;

@end

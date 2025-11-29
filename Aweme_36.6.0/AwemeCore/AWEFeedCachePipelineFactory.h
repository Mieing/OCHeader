@class NSMutableArray;

@interface AWEFeedCachePipelineFactory : NSObject

@property (retain, nonatomic) NSMutableArray *processorFactories;
@property (retain, nonatomic) NSMutableArray *creators;

+ (id)sharedInstance;

- (id)createWithTag:(id)a0 completedListener:(id /* block */)a1 failureListener:(id /* block */)a2;
- (void)registerFactories:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)initData;

@end

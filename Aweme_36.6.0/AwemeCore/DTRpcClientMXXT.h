@class DTRpcConfigManagerMXXT, NSOperationQueue, NSMutableArray, NSLock;

@interface DTRpcClientMXXT : NSObject

@property (retain, nonatomic) NSOperationQueue *requestQueue;
@property (retain, nonatomic) DTRpcConfigManagerMXXT *configManager;
@property (retain, nonatomic) NSMutableArray *interceptors;
@property (retain, nonatomic) NSLock *lock;

+ (id)defaultClient;

- (void)addInterceptor:(id)a0;
- (id)executeMethodAsync:(id)a0 params:(id)a1 completionBlock:(id /* block */)a2;
- (id)executeMethod:(id)a0 params:(id)a1;
- (void)cancelAllOperationsInThread:(id)a0;
- (id)configForScope:(int)a0;
- (void)setConfig:(id)a0 forScope:(int)a1;
- (id)preferredConfig:(id)a0;
- (id)preferredConfig;
- (void).cxx_destruct;
- (id)executeOperation:(id)a0;

@end

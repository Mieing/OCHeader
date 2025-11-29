@protocol XPlayNetworkPriorityManagerInterface;

@interface XPlayNetworkManager : NSObject

@property (retain) id<XPlayNetworkPriorityManagerInterface> priorityManager;

+ (BOOL)engineTypeEnable:(unsigned long long)a0;
+ (id)defaultManager;

- (id)taskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)taskWithRequest:(id)a0 isStreamMethod:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)_taskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)_uploadTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)uploadTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)preConnectUrl:(id)a0 withEngineType:(unsigned long long)a1;
- (id)hostCommonParams;
- (void).cxx_destruct;
- (id)init;

@end

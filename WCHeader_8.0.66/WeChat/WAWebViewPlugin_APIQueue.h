@class NSMutableArray, NSObject;
@protocol WAWebViewPlugin_ApiQueueProtocol;

@interface WAWebViewPlugin_APIQueue : WAWebViewPluginBase

@property (retain) NSMutableArray *arrEvent;
@property (retain) NSObject<WAWebViewPlugin_ApiQueueProtocol> *runningEvent;

- (id)init;
- (void)addApiEvent:(id)a0 param:(id)a1;
- (void)checkApiEvent;
- (void)removeApiEvent:(id)a0;
- (void).cxx_destruct;

@end

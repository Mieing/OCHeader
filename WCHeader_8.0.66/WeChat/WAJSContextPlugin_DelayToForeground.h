@class NSMutableArray;

@interface WAJSContextPlugin_DelayToForeground : WAJSContextPluginBase

@property (retain, nonatomic) NSMutableArray *delayPerformArr;

- (id)init;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (void)addDelayJSAPIHandler:(id /* block */)a0 jsapiName:(id)a1;
- (void)execute;
- (void)trimJSAPIInArray:(id)a0;
- (void).cxx_destruct;

@end

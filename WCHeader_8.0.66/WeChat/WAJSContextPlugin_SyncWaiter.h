@class NSMutableDictionary;

@interface WAJSContextPlugin_SyncWaiter : WAJSContextPluginBase

@property (retain) NSMutableDictionary *syncMap;

- (id)init;
- (void)markSyncTag:(id)a0;
- (void)releaseSyncTag:(id)a0 extData:(id)a1;
- (void)waitFromAsync:(id)a0 timeout:(long long)a1 returnBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end

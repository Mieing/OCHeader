@class NSString;

@interface EcsCoreEcsPreloadMgr_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsPreloadMgr_Ur>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)tryStartPreload:(id)a0;
- (id)getCachedPreloadData:(id)a0;
- (void)getCachedPreloadDataAsync:(id)a0 callback:(id /* block */)a1;
- (void)getCachedPreloadDataAsyncWithTimeout:(id)a0 timeoutMs:(unsigned int)a1 callback:(id /* block */)a2;
- (void)clearAllCache;

@end

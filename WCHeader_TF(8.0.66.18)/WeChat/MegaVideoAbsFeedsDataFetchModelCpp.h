@class NSString;

@interface MegaVideoAbsFeedsDataFetchModelCpp : UnitRCObjcBaseProxyClass <MegaVideoAbsFeedsDataFetchModel>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)respCacheKey;
- (void)fetchFeeds:(id)a0 cacheResult:(id)a1 onSuccess:(id /* block */)a2 onFail:(id /* block */)a3;

@end

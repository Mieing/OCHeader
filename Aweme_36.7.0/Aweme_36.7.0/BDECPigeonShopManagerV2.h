@class BDECPigeonClientV2, NSObject;
@protocol BDECPigeonCacheProtocol, OS_dispatch_queue;

@interface BDECPigeonShopManagerV2 : NSObject

@property (retain) id<BDECPigeonCacheProtocol> cache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *shopInfosRWQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheCreateQueue;
@property (weak, nonatomic) BDECPigeonClientV2 *client;

- (void)batchFetchSerivceInfosWithPigeonBizType:(id)a0 pigeonShopId:(id)a1 conGroupId:(id)a2 pigeonCidList:(id)a3 completion:(id /* block */)a4;
- (void)batchFetchShopInfosWithShopIds:(id)a0 options:(id)a1 pigeonBizType:(id)a2 completion:(id /* block */)a3;
- (void)batchFetchServiceEntityInfosWithServiceEntityIDs:(id)a0 bizType:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)cacheShopInfo:(id)a0 pigeonBizType:(id)a1;
- (id)shopInfoFromMemoryCache:(id)a0 pigeonBizType:(id)a1;
- (void)shopInfosFromCache:(id)a0 pigeonBizType:(id)a1 completion:(id /* block */)a2;
- (void)batchFetchShopInfosWithPigeonBizType:(id)a0 extendParams:(id)a1 bizExt:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)fetchShopIdWithPigeonBizType:(id)a0 bizShopId:(id)a1 conGroupId:(id)a2 completion:(id /* block */)a3;
- (void)tryCreateCache;
- (void)batchFetchShopInfosAfterFilteredWithPigeonBizType:(id)a0 conGroupIds:(id)a1 shopInfoRetDict:(id)a2 bizExt:(id)a3 options:(id)a4 completion:(id /* block */)a5;
- (id)encodeShopInfoCacheKeyWithShopId:(id)a0 pigeonBizType:(id)a1;
- (void)batchFetchShopInfosAfterFilteredWithShopIds:(id)a0 options:(id)a1 shopInfoRetDict:(id)a2 pigeonBizType:(id)a3 completion:(id /* block */)a4;
- (id)encodeServiceEntityIDInCache:(id)a0 bizType:(id)a1;
- (id)decodeServiceEntityIDInCache:(id)a0;
- (void)batchFetchServiceEntityInfosAfterFilteredWithServiceEntityIDs:(id)a0 bizType:(id)a1 options:(id)a2 serviceEntityInfoRetDict:(id)a3 completion:(id /* block */)a4;
- (void)setupPatch;
- (id)decodeShopInfoCacheKeyWithShopId:(id)a0;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0;

@end

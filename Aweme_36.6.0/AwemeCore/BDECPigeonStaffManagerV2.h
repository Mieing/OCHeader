@class BDECPigeonClientV2, NSObject;
@protocol OS_dispatch_queue, BDECPigeonCacheProtocol;

@interface BDECPigeonStaffManagerV2 : NSObject

@property (weak, nonatomic) BDECPigeonClientV2 *client;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheCreateQueue;
@property (retain) id<BDECPigeonCacheProtocol> cache;

- (void)fetchBizRoleInfoWithPigeonIds:(id)a0 pigeonShopId:(id)a1 pigeonBizType:(id)a2 pigeonBizRoleType:(id)a3 options:(id)a4 completion:(id /* block */)a5;
- (unsigned long long)hasPermissionStatusWithCode:(long long)a0;
- (void)fetchCurrentStaffPigeonIDWithPigeonBizType:(id)a0 completion:(id /* block */)a1;
- (void)fetchIMPermissionWithPigeonBizType:(id)a0 conGroupId:(id)a1 completion:(id /* block */)a2;
- (void)fetchStaffInfoWithPigeonCids:(id)a0 pigeonShopId:(id)a1 conGroupId:(id)a2 pigeonBizType:(id)a3 completion:(id /* block */)a4;
- (void)fetchCurrentStaffInfoWithPigeonBizType:(id)a0 conGroupId:(id)a1 completion:(id /* block */)a2;
- (void)fetchTransferStaffInfoListWithPigeonBizType:(id)a0 pigeonShopId:(id)a1 conGroupId:(id)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void)configStaffOnlineStatusWithPigeonCid:(id)a0 pigeonShopId:(id)a1 pigeonBizType:(id)a2 onlineStatus:(unsigned long long)a3 extraParams:(id)a4 completion:(id /* block */)a5;
- (void)tryCreateCache;
- (void)fetchStaffInfoPaginationWithPigeonCids:(id)a0 pigeonShopId:(id)a1 conGroupId:(id)a2 retryCount:(long long)a3 pigeonBizType:(id)a4 completion:(id /* block */)a5;
- (id)generateCacheKeyWithPigeonCid:(id)a0 pigeonShopId:(id)a1 pigeonBizType:(id)a2 pigeonBizRoleType:(id)a3;
- (void)fetchBizRoleInfoWithPigeonIds:(id)a0 pigeonShopId:(id)a1 pigeonBizType:(id)a2 pigeonBizRoleType:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0;

@end

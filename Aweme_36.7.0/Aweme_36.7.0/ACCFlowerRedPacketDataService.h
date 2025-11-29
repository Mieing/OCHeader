@interface ACCFlowerRedPacketDataService : NSObject

+ (id)urlByReplacingMgDomainWithUrlString:(id)a0;
+ (void)trackForFlowerRedpacketRequest:(double)a0 extraParams:(id)a1 event:(id)a2 error:(id)a3;
+ (id)p_localCouponStausErrorTipFromRedPacketStatus:(unsigned long long)a0;
+ (unsigned long long)p_assetStausFromCouponStatus:(unsigned long long)a0;
+ (void)checkRedPacketAssetStausWithAssetModel:(id)a0 redPacketModel:(id)a1 completion:(id /* block */)a2;
+ (void)writeOffCouponWithWithAssetModel:(id)a0 redPacketModel:(id)a1 completion:(id /* block */)a2;

@end

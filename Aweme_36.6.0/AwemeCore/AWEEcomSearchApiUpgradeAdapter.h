@class NSString;

@interface AWEEcomSearchApiUpgradeAdapter : NSObject <AWEEcomSearchApiUpgradeAdapterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shopSearchAggregateShoppingUrlPathForChannel:(id)a0 enterFrom:(id)a1;
+ (id)convertResponseIfNeeded:(id)a0;
+ (Class)responseModelClassForChannel:(id)a0 enterFrom:(id)a1;
+ (id)shopSearchAggregateShoppingChunkUrlPathForChannel:(id)a0 enterFrom:(id)a1;
+ (id)chunkInfoWithResponseJson:(id)a0;
+ (Class)responseModelClassWithResponseJson:(id)a0;
+ (BOOL)enableApiUpgradeForChannel:(id)a0 enterFrom:(id)a1;
+ (id)apiUpgradeChannels;
+ (id)apiUpgradeEnterFroms;
+ (BOOL)enableApiUpgradeForChannel:(id)a0;


@end

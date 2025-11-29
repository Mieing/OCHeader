@class NSString, BDECPigeonShopInfoFetchOptionsV2;

@interface AWEECOMIMPaasShopInfoFetchOptionsNew : NSObject <AWEECOMIMPaasShopInfoFetchOptionsProtocol>

@property (retain, nonatomic) BDECPigeonShopInfoFetchOptionsV2 *shopInfoFetchOptions;
@property (nonatomic) BOOL useCache;
@property (nonatomic) double cacheExpirationTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)PaasShopInfoFetchOptionsWithPigeonShopInfoFetchOptions:(id)a0;

- (id)convertToPigeonShopInfoFetchOptions;
- (void).cxx_destruct;
- (id)init;

@end

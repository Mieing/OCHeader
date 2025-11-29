@class NSString;

@interface AWEECPrefetchManager : NSObject <HTSService, AWEECPrefetchManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gurdAccessKey;
+ (void)syncShopGeckoResources;
+ (void)prefetchDataForXTab;
+ (id)triggerMallPrefetch:(id)a0;
+ (void)prefetchDataForMallInProfileIfNeeded;
+ (void)runPitayaTask:(id)a0 inputParams:(id)a1 completion:(id /* block */)a2;


@end

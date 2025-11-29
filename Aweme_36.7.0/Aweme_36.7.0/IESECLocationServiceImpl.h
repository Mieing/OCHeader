@class NSString;

@interface IESECLocationServiceImpl : NSObject <IESECLocationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removeLocationSubmitObserverForKey:(id)a0;
+ (id)getLocationMockViewController;
+ (id)locationCacheCert;
+ (void)requestCurrentLocation:(long long)a0 completion:(id /* block */)a1;
+ (void)addLocationSubmitObserverForKey:(id)a0 completion:(id /* block */)a1;
+ (BOOL)hasPermission;
+ (id)cert;


@end

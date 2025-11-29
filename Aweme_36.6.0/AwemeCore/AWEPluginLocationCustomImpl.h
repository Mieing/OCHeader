@class NSString;

@interface AWEPluginLocationCustomImpl : NSObject <BDPLocationPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)bdp_requestCurrentLocationWithAccuracy:(long long)a0 completion:(id /* block */)a1 appId:(id)a2 apiName:(id)a3;
- (void)bdp_initSharedLocationManager;
- (long long)bdp_getAuthorizationStatus;
- (long long)bdp_getAccuracyAuthorization;
- (void)bdp_requestAuthorizationWithCompletion:(id /* block */)a0;
- (id)bdp_getCurrentLocationCache;
- (void)bdp_requestCurrentLocationWithCompletion:(id /* block */)a0;
- (id)bdp_subscribeHeadlingUpdateWithBlock:(id /* block */)a0;
- (void)bdp_unsubscribeHeadlingUpdateWithToken:(id)a0;
- (id)bdp_subscribeLocationUpdateWithAccuracy:(long long)a0 distanceFilter:(double)a1 block:(id /* block */)a2 appId:(id)a3 apiName:(id)a4;
- (void)bdp_unsubscribeLocationUpdateWithToken:(id)a0;
- (long long)transformAWELocationAccuracy:(long long)a0;

@end

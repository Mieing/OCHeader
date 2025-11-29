@class NSString;

@interface AWEYAPSKMService : HTSService <AWEYAPSKMService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transferRouteUrlWithCodeUrl:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)registerVoiceBroadcastNotification;
- (void)saveScanInfo:(id)a0;
- (BOOL)isSupportSKM;
- (BOOL)isSchemeMatchedSKM:(id)a0;
- (void)transferRouteUrlWithCodeUrl:(id)a0 completion:(id /* block */)a1;
- (id)createTaskCheckCodeValid:(id)a0 extraParams:(id)a1 extraQueryParams:(id)a2 completion:(id /* block */)a3;

@end

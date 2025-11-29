@class NSString;

@interface BDUGLuckyCatLocationManager : NSObject <BDUGLuckyLocationProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestWhenInUseAuthorizationWithCompletion:(id /* block */)a0;
+ (void)requestWhenInUseAuthorizationWithCompletion:(id /* block */)a0 paramModel:(id)a1 method:(id)a2;
+ (BOOL)currentAccuracyLocationGranted;
+ (void)uploadLocationWithBussinessId:(id)a0 completion:(id /* block */)a1;
+ (void)uploadLocationWithBussinessId:(id)a0 completion:(id /* block */)a1 paramModel:(id)a2 method:(id)a3;
+ (void)uploadLocationWithBussinessId:(id)a0 completion:(id /* block */)a1 paramModel:(id)a2 method:(id)a3 extraParams:(id)a4;
+ (void)__sendPrivacyActionTrackWithEntry:(id)a0 hostImpl:(id)a1 paramModel:(id)a2 method:(id)a3 forBPEAScene:(unsigned long long)a4;
+ (id)__urlForBDXBridgeContext:(id)a0;
+ (id)serviceProtocol;
+ (id)shareInstance;
+ (long long)currentLocationAuthorizationStatus;


@end

@class NSTimer, CLLocation, BDUGLocationInfo;

@interface BDUGLocationBluetoothScan : NSObject

@property (retain, nonatomic) BDUGLocationInfo *cachedLocationInfo;
@property (retain, nonatomic) CLLocation *cachedLocation;
@property (retain, nonatomic) NSTimer *pollingTimer;
@property (nonatomic) long long desiredAccuracy;
@property (nonatomic) double timeout;
@property (nonatomic, getter=isAllowedPopupAlert) BOOL allowedPopupAlert;

+ (id)sharedManager;

- (void)startLocatingInBusiness:(id)a0 extraInfo:(id)a1 completion:(id /* block */)a2;
- (void)_startLocatingInBusiness:(id)a0 extraInfo:(id)a1 cert:(id)a2 completion:(id /* block */)a3;
- (void)startLocatingInBusiness:(id)a0 extraInfo:(id)a1 cert:(id)a2 completion:(id /* block */)a3;
- (void)_startLocatingAfterCheckAuthorizationStatusInBusiness:(id)a0 extraInfo:(id)a1 cert:(id)a2 completion:(id /* block */)a3;
- (void)_requestLocationInfoInBusiness:(id)a0 extraInfo:(id)a1 cert:(id)a2 completion:(id /* block */)a3;
- (void)uploadLocationInBusiness:(id)a0 extraInfo:(id)a1 location:(id)a2 cert:(id)a3 completion:(id /* block */)a4;
- (void)startLocatingInBusiness:(id)a0 completion:(id /* block */)a1;
- (void)startLocatingInBusiness:(id)a0 cert:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end

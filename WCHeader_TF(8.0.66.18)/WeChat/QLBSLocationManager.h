@class NSString, TencentLBSLocationManager;

@interface QLBSLocationManager : QLocationManager <TencentLBSLocationManagerDelegate>

@property (retain, nonatomic) TencentLBSLocationManager *manager;
@property (nonatomic) BOOL toTriggerLocationCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithKey:(id)a0;
- (void)requestWhenInUseAuthorization;
- (void)tencentLBSLocationManager:(id)a0 didFailWithError:(id)a1;
- (void)tencentLBSLocationManager:(id)a0 didUpdateLocation:(id)a1;
- (void)tencentLBSLocationManager:(id)a0 didUpdateHeading:(id)a1;
- (void)tencentLBSLocationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void).cxx_destruct;

@end

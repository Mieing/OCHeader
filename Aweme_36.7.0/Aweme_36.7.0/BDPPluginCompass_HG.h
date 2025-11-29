@class NSString, BDPUniqueID, CLLocationManager;

@interface BDPPluginCompass_HG : BDPBridgeInstancePlugin <CLLocationManagerDelegate>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) CLLocationManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCompassWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)stopCompassWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (void)dealloc;

@end

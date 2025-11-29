@class BDPUniqueID, BDPLocationManager;

@interface BDPPluginCompass : BDPBridgeInstancePlugin

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPLocationManager *manager;
@property (retain, nonatomic) id token;

- (void)startCompassWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)stopCompassWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end

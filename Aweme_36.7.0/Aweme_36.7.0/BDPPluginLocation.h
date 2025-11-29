@class NSString, BDPUniqueID;

@interface BDPPluginLocation : BDPBridgeInstancePlugin <BDPContainerLifeCycleMessage, BDPPermissionChangeMessage> {
    BDPUniqueID *_uniqueID;
}

@property (nonatomic) BOOL isUpdatingLocation;
@property (nonatomic) BOOL isGCJUpdatingLocation;
@property (retain, nonatomic) id updateLocationToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)pluginMode;

- (void)applicationExitWithUniqueID:(id)a0;
- (void)applicationEnterBackGroundWithUniqueID:(id)a0;
- (void)applicationEnterForeGroundWithUniqueID:(id)a0;
- (void)permissionStatusChanged:(id)a0 on:(BOOL)a1 uniqueID:(id)a2;
- (void)p_tempStopSubscribeLocationUpdate;
- (void)openLocationWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)p_startSubscribeLocationUpdateInGCJ:(BOOL)a0;
- (void)p_reallyStopSubscribeLocationUpdateWithComplection:(id /* block */)a0;
- (void)p_subscribeOnLocationChangeError:(id)a0;
- (void)getLocationWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)startLocationUpdateWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)stopLocationUpdateWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

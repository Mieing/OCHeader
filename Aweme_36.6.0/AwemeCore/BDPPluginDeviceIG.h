@class BDPScreenOnLock, BDPUniqueID;

@interface BDPPluginDeviceIG : BDPBridgeInstancePlugin

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPScreenOnLock *screenOnLock;

- (void)getSystemInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getSystemInfoSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setKeepScreenOnWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end

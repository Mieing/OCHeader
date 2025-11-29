@class NSString;

@interface WAJSEventHandler_startBeaconDiscovery : WAJSEventHandler_BaseEvent <IWAJSContextBeaconProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)innerHandleJSEventAfterAuth:(id)a0;
- (void)didStartRangeBeacons:(id)a0 errCode:(int)a1 appid:(id)a2;
- (void)dealloc;
- (id)beaconInstance;

@end

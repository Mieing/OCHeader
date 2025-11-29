@class NSString;

@interface WAJSEventHandler_startBLEPeripheralAdvertising : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol> {
    NSString *m_serverId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

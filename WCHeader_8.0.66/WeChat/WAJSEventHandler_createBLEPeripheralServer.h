@class NSString;

@interface WAJSEventHandler_createBLEPeripheralServer : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol> {
    NSString *m_serverID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

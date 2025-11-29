@class NSString;

@interface WAJSEventHandler_closeBLEConnection : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;

@end

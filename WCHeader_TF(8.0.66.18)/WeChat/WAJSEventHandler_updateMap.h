@interface WAJSEventHandler_updateMap : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)handleJSEventAfterAuth:(id)a0 mapView:(id)a1 mapid:(unsigned int)a2 embedMapInstance:(id)a3;
- (void)updateMapCovers:(id)a0 covers:(id)a1;

@end

@interface WAJSEventHandler_canvasToTempFilePath : WAJSEventHandler_BaseEvent

- (id)convertRawPixelToUIImage:(id)a0 width:(unsigned int)a1 height:(unsigned int)a2;
- (void)handleImageReady:(id)a0 needScale:(BOOL)a1 dic:(id)a2 synchronize:(BOOL)a3;
- (void)handleJSEvent:(id)a0;
- (void)innerHandleJSEvent:(id)a0 synchronize:(BOOL)a1;

@end

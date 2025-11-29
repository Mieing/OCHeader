@interface _LocalJSEventHandler_imageSearch : LocalJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)sendDataReadyEvent:(id)a0 requestId:(id)a1;
- (void)sendMPDataReadyEvent:(id)a0 requestId:(id)a1;
- (void)sendNotDataReadyEvent:(id)a0 isMPdata:(BOOL)a1;
- (id)imageSearchPlugin;

@end

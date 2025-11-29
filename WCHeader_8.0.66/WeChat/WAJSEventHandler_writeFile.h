@interface WAJSEventHandler_writeFile : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)innerHandleJSEven:(id)a0 isAppend:(BOOL)a1;
- (id)dataWithEncodingString:(id)a0 encoding:(id)a1;

@end

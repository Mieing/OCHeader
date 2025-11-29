@interface WAJSEventHandler_getFileInfo : WAJSEventHandler_BaseEvent

@property (nonatomic) BOOL shouldEndBeforeDealloc;

- (void)handleJSEvent:(id)a0;
- (void)onResult:(id)a0 error:(id)a1 errNo:(unsigned int)a2;
- (void)dealloc;

@end

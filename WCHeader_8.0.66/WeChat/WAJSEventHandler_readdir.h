@interface WAJSEventHandler_readdir : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)innerHandleJSEven:(id)a0;
- (void)readHomeDir:(id)a0;
- (void)readFilesOfDirectoryAtPath:(id)a0 localIDPrefix:(id)a1 array:(id)a2;

@end

@interface WAJSEventHandler_fs_copyFile : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)innerHandleJSEven:(id)a0;
- (void)tryCopyFromLocalCache:(id)a0 destFilePath:(id)a1;

@end

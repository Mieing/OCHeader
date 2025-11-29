@interface WAJSEventHandler_saveVideoToPhotosAlbum : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)video:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end

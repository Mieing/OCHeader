@interface WAJSEventHandler_addVideoToFavorites : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (id)getRealVideoPathWithVideoPath:(id)a0;
- (id)getThumbDataWithPath:(id)a0;
- (id)getVideoInfoWithVideoPath:(id)a0 thumbData:(id)a1;

@end

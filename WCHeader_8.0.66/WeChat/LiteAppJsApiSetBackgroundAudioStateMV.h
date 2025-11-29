@interface LiteAppJsApiSetBackgroundAudioStateMV : LiteAppJsApi

- (id)init;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (id)musicInfoFromParams:(id)a0;
- (void)fillMvDataWithMusicInfo:(id)a0 originParams:(id)a1;
- (id)makeMusicShare:(id)a0;

@end

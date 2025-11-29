@interface WebviewJSEventHandler_setBackgroundAudioState : WebviewJSEventHandlerBase

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)handleSingleAudioEvent:(id)a0 audioInfo:(id)a1 scene:(unsigned long long)a2;
- (void)handleAlbumEvent:(id)a0 albumId:(id)a1 albumMusicInfos:(id)a2 playAudioId:(id)a3;
- (id)musicInfoFromParams:(id)a0;
- (void)fillMvDataWithMusicInfo:(id)a0 originParams:(id)a1;
- (id)jsapiName;

@end

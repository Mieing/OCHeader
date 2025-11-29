@class NSString;

@interface WebviewJSEventHandler_PlayVoice : WebviewJSEventHandlerBase <IFavAudioPlayerExt> {
    BOOL _stopVoiceFlag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)setStopVoiceFlag;
- (void)OnBeginPlay:(id)a0;
- (void)OnEndPlay:(id)a0;
- (void)sendEndEventToJS:(id)a0;
- (void)OnPlayError:(id)a0;

@end

@class NSString;
@protocol IWAWebViewPluginDelegate;

@interface WAWebViewPlugin_voicePlayer : WAWebViewPluginBase <IFavAudioPlayerExt> {
    BOOL _stopVoiceFlag;
}

@property (copy, nonatomic) NSString *localId;
@property (weak, nonatomic) id<IWAWebViewPluginDelegate> resultDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)playVoice:(id)a0;
- (void)setStopVoiceFlag;
- (id)voiceCacheRootPath;
- (id)voiceCachePathByfileName:(id)a0;
- (id)localPathByAudioData:(id)a0 pathExtension:(id)a1;
- (void)OnBeginPlay:(id)a0;
- (void)OnEndPlay:(id)a0;
- (void)sendEndEventToJS:(id)a0;
- (void)OnPlayError:(id)a0;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void).cxx_destruct;

@end

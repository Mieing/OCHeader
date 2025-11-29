@class AVAudioPlayer;

@interface WAJSContextPlugin_OpenVoice : WAJSContextPluginBase

@property (retain, nonatomic) AVAudioPlayer *player;

- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (id)getOpenVoiceBaseView;
- (void)insertView:(id)a0 callback:(id /* block */)a1;
- (void)updateView:(id)a0 callback:(id /* block */)a1;
- (void)removeView:(id)a0 callback:(id /* block */)a1;
- (void)playCallTone;
- (void)stopCallTone;
- (void).cxx_destruct;

@end

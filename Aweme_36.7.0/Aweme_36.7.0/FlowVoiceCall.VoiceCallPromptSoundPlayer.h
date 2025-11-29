@interface FlowVoiceCall.VoiceCallPromptSoundPlayer : NSObject <FlowMusicPlayerDelegate, AVAudioPlayerDelegate> {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ promptPlayer;
    void /* unknown type, empty encoding */ videoEnginePromptPlayer;
    void /* unknown type, empty encoding */ playFinishHandler;
    void /* unknown type, empty encoding */ circleSelf;
    void /* unknown type, empty encoding */ lastResource;
}

- (void)playerDidFinish:(id)a0 error:(id)a1;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end

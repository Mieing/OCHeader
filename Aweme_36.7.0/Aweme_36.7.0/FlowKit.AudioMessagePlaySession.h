@interface FlowKit.AudioMessagePlaySession : NSObject <FlowMusicPlayerDelegate> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ vid;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_player;
}

- (void)playerAudioRendered:(id)a0;
- (void)playerReadyToPlay:(id)a0;
- (void)playerCloseAysncFinish:(id)a0;
- (void)playerDidFinish:(id)a0 error:(id)a1;
- (void)player:(id)a0 playbackStateDidChanged:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end

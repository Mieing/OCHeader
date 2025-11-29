@class NSString;

@interface AQAudioPlayer : BaseAudioPlayer {
    BOOL mIsBindMuteSwitch;
}

@property (copy, nonatomic) NSString *mCachedTag;

- (void)openAudioFile:(id)a0;
- (void)setDataFormat;
- (void)setMagicCookieForPlayBack;
- (void)prepareBuffers;
- (void)setBindMuteSwitch:(BOOL)a0;
- (void)updateSession;
- (BOOL)preparePlayWithAudioFile:(id)a0 cachedForTag:(id)a1;
- (void)play;
- (void)replay;
- (void)stop;
- (void)autostop;
- (void).cxx_destruct;

@end

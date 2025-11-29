@interface AWEFormatImpl.TTSAudioPlayer : NSObject <AFDMuteAwemeMessage, AVAudioPlayerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_downloadHelper;
    void /* unknown type, empty encoding */ _identifier;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ isPlaying;
    void /* unknown type, empty encoding */ isPaused;
    void /* unknown type, empty encoding */ audioPlayer;
    void /* unknown type, empty encoding */ volume;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ currentAudioPath;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ subtitleProvider;
    void /* unknown type, empty encoding */ currentSubtitleDidChange;
    void /* unknown type, empty encoding */ firstShow;
    void /* unknown type, empty encoding */ lastSubtitleProcessedTime;
    void /* unknown type, empty encoding */ subtitleUpdateTimer;
    void /* unknown type, empty encoding */ lastSubtitleText;
    void /* unknown type, empty encoding */ completionHandler;
}

- (void)muteAwemeMessage;
- (void)muteAwemeCanceled;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)audioPlayerDecodeErrorDidOccur:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)updateSubtitle;
- (id)init;
- (void)dealloc;

@end

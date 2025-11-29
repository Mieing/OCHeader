@interface AWEFormatImpl.FormatLiveAudioPlayer : NSObject <AFDMuteAwemeMessage> {
    void /* unknown type, empty encoding */ _identifier;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ allSubtitleText;
    void /* unknown type, empty encoding */ typer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioPlayer;
    void /* unknown type, empty encoding */ volume;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ subtitleProvider;
    void /* unknown type, empty encoding */ lastSubtitleProcessedTime;
    void /* unknown type, empty encoding */ subtitleUpdateTimer;
    void /* unknown type, empty encoding */ lastSubtitleText;
}

- (void)muteAwemeMessage;
- (void)muteAwemeCanceled;
- (void)loopDisplay;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

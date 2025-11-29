@interface FlowKit.MessagingMusicComponent : FlowCommon.TightCouplingComponent {
    void /* unknown type, empty encoding */ _conversation;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _voiceCallProvider;
    void /* unknown type, empty encoding */ throttler;
    void /* unknown type, empty encoding */ authCheckManager;
    void /* unknown type, empty encoding */ generatedMusicAutoPlayQueue;
    void /* unknown type, empty encoding */ autoPlayMessageID;
    void /* unknown type, empty encoding */ chunkAutoPlayedMessageID;
    void /* unknown type, empty encoding */ currentAutoPlayStarted;
    void /* unknown type, empty encoding */ $__lazy_storage_$__currentMusicPlayer;
    void /* unknown type, empty encoding */ _currentMusicPlayerEntity;
    void /* unknown type, empty encoding */ lastStartedMessageID;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _trackerProvider;
    void /* unknown type, empty encoding */ trackHelper;
    void /* unknown type, empty encoding */ musicContainerPresented;
}

- (void)willResignActive;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

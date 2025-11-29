@interface FlowAVKit.AVCallSession : NSObject <FlowAVSDK.FlowAVAudioDataProcessor> {
    void /* unknown type, empty encoding */ _trackerProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _appInfo;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ pluginContainer;
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ engine;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ callTask;
    void /* unknown type, empty encoding */ currentModalType;
    void /* unknown type, empty encoding */ rwlock;
    void /* unknown type, empty encoding */ cancellableSet;
    void /* unknown type, empty encoding */ isRetrying;
    void /* unknown type, empty encoding */ isUpdateTTSPlayFinished;
}

- (id)onProcessRecordFrame:(id)a0;
- (id)onProcessPlayFrame:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

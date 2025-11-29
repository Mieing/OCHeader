@interface FlowKit.VoiceMixedViewModel : NSObject {
    void /* unknown type, empty encoding */ didAddAction;
    void /* unknown type, empty encoding */ didRemoveAction;
    void /* unknown type, empty encoding */ didUpdateAction;
    void /* unknown type, empty encoding */ didCreateAction;
    void /* unknown type, empty encoding */ didTTSAnimationSatusChanged;
    void /* unknown type, empty encoding */ didTrackVoiceAudition;
    void /* unknown type, empty encoding */ recommendList;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ containerVC;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ preRequestMixedArray;
    void /* unknown type, empty encoding */ curRequestMixedArray;
    void /* unknown type, empty encoding */ storedMixedPreviewVoiceInfo;
    void /* unknown type, empty encoding */ selectedMixedArray;
    void /* unknown type, empty encoding */ lastCount;
    void /* unknown type, empty encoding */ lastSelectIndex;
    void /* unknown type, empty encoding */ voiceMixedDownloader;
    void /* unknown type, empty encoding */ _audioSceneResource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceProcessSession;
    void /* unknown type, empty encoding */ currentPlayingId;
    void /* unknown type, empty encoding */ voiceRemixId;
    void /* unknown type, empty encoding */ capabilityConfig;
    void /* unknown type, empty encoding */ languageCode;
    void /* unknown type, empty encoding */ ttsAnimationStatus;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

@interface FlowAVKit.VoiceCallAudioEngine : NSObject {
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ _inputAmplitude;
    void /* unknown type, empty encoding */ _outputAmplitude;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ callSpan;
    void /* unknown type, empty encoding */ _isRunning;
    void /* unknown type, empty encoding */ _isEngineRunning;
    void /* unknown type, empty encoding */ _inputBufferQueue;
    void /* unknown type, empty encoding */ _mixerBufferQueue;
    void /* unknown type, empty encoding */ _mixerDataSize;
    void /* unknown type, empty encoding */ _playerBufferCount;
    void /* unknown type, empty encoding */ _shouldStartPlayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_asrInputAudioDataOpt;
    void /* unknown type, empty encoding */ engineAECQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bufferDelegateEnable;
    void /* unknown type, empty encoding */ engine;
    void /* unknown type, empty encoding */ sinkNode;
    void /* unknown type, empty encoding */ ttsPlayer;
    void /* unknown type, empty encoding */ musicComfortPlayer;
    void /* unknown type, empty encoding */ promptPlayer;
    void /* unknown type, empty encoding */ isMusicComfortPlaying;
    void /* unknown type, empty encoding */ inputFormat;
    void /* unknown type, empty encoding */ sourceFormat;
    void /* unknown type, empty encoding */ outputFormat;
    void /* unknown type, empty encoding */ fileWriter;
    void /* unknown type, empty encoding */ audioConverter;
    void /* unknown type, empty encoding */ receiverLock;
    void /* unknown type, empty encoding */ _receiver;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

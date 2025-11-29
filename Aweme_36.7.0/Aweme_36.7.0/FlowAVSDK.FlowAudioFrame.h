@interface FlowAVSDK.FlowAudioFrame : NSObject {
    void /* unknown type, empty encoding */ buffer;
    void /* unknown type, empty encoding */ samples;
    void /* unknown type, empty encoding */ sampleRate;
    void /* unknown type, empty encoding */ channel;
    void /* unknown type, empty encoding */ refData;
    void /* unknown type, empty encoding */ extraInfo;
    void /* unknown type, empty encoding */ extraData;
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ isSilent;
    void /* unknown type, empty encoding */ sentenceId;
    void /* unknown type, empty encoding */ queryRound;
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ ttsTaskID;
    void /* unknown type, empty encoding */ isFirst;
    void /* unknown type, empty encoding */ num;
}

- (void).cxx_destruct;
- (id)init;

@end

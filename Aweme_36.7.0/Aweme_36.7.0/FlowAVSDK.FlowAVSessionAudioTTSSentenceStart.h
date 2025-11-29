@class NSString;

@interface FlowAVSDK.FlowAVSessionAudioTTSSentenceStart : NSObject {
    void /* function */ silenceContext;
    void /* function */ text;
    void /* function */ ttsTaskID;
    void /* function */ drawContent;
    void /* function */ sentenceID;
}

@property (nonatomic, copy) NSString *silenceContext;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *ttsTaskID;
@property (nonatomic, copy) NSString *drawContent;
@property (nonatomic, copy) NSString *sentenceID;

- (id)initWithSilenceContext:(id)a0 text:(id)a1 ttsTaskID:(id)a2 drawContent:(id)a3 sentenceID:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end

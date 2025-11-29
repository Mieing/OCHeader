@class NSString;

@interface FlowAVSDK.FlowAVSessionAudioTTSSentenceEnd : NSObject {
    void /* function */ silenceContext;
    void /* function */ text;
}

@property (nonatomic, copy) NSString *silenceContext;
@property (nonatomic, copy) NSString *text;

- (id)initWithSilenceContext:(id)a0 text:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

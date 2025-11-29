@class NSString, _TtC9FlowAVSDK15FlowAVAudioInfo;

@interface FlowAVSDK.FlowAVASRConfig : NSObject {
    void /* function */ lang;
    void /* function */ extra;
}

@property (nonatomic) long long audioSrc;
@property (nonatomic, copy) NSString *lang;
@property (nonatomic, retain) _TtC9FlowAVSDK15FlowAVAudioInfo *audioInfo;
@property (nonatomic, copy) NSString *extra;

- (id)initWithAudioSrc:(long long)a0 lang:(id)a1 audioInfo:(id)a2 extra:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end

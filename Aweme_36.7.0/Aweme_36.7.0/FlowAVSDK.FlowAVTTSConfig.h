@class NSString, _TtC9FlowAVSDK15FlowAVAudioInfo;

@interface FlowAVSDK.FlowAVTTSConfig : NSObject {
    void /* function */ speaker;
    void /* function */ extra;
}

@property (nonatomic, retain) _TtC9FlowAVSDK15FlowAVAudioInfo *audioInfo;
@property (nonatomic, copy) NSString *speaker;
@property (nonatomic, copy) NSString *extra;

- (id)initWithAudioInfo:(id)a0 speaker:(id)a1 extra:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end

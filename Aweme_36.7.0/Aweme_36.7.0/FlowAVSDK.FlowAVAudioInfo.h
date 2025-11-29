@class NSString;

@interface FlowAVSDK.FlowAVAudioInfo : NSObject {
    void /* function */ format;
}

@property (nonatomic, copy) NSString *format;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long channel;

- (id)initWithFormat:(id)a0 sampleRate:(long long)a1 channel:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end

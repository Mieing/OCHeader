@interface FlowAVSDK.FlowAVSessionConfig : NSObject

@property (nonatomic) BOOL autoSubscribeAudioFrame;
@property (nonatomic) BOOL enableDump;
@property (nonatomic) BOOL enableSamiProcessor;

- (id)initWithAutoSubscribeAudioFrame:(BOOL)a0 enableDump:(BOOL)a1 enableSamiProcessor:(BOOL)a2;
- (id)init;

@end

@interface LiveKTVAudioEffectProcessInitParam : NSObject

@property (nonatomic) int channelCnt;
@property (nonatomic) int sampleRate;
@property (nonatomic) int frameDuration;
@property (nonatomic) unsigned long long audioFormat;

+ (id)defaultParam;

- (BOOL)isEqual:(id)a0;
- (BOOL)isLegal;

@end

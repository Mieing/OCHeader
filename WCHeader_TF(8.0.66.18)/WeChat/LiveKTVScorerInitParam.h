@interface LiveKTVScorerInitParam : NSObject

@property (nonatomic) int channelCnt;
@property (nonatomic) int sampleRate;

+ (id)defaultParam;

- (BOOL)isEqual:(id)a0;

@end

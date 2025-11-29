@class NSData;

@interface LiveKTVAudioProcessFrameUnit : NSObject

@property (nonatomic) int channelCnt;
@property (nonatomic) int sampleRate;
@property (nonatomic) int frameDuration;
@property (nonatomic) unsigned long long audioFormat;
@property (retain, nonatomic) NSData *inBufferData;
@property (readonly, nonatomic) short *inBuffer;
@property (readonly, nonatomic) int bufferLengthInShort;
@property (readonly, nonatomic) short *outBuffer;

+ (id)genInFrameUnit:(id)a0 channels:(int)a1 sampleRate:(int)a2 frameDuration:(int)a3 audioFormat:(unsigned long long)a4;

- (void).cxx_destruct;

@end

@interface SAMICore_VopAudioCheckerConfig : NSObject

@property (nonatomic) int sampleRate;
@property (nonatomic) int sampleBit;
@property (nonatomic) int channel;
@property (nonatomic) int maxBlockSize;

- (void)dealloc;

@end

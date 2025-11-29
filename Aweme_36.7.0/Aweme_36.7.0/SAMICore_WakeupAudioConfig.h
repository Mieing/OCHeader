@class NSString;

@interface SAMICore_WakeupAudioConfig : NSObject

@property (nonatomic) int sampleRate;
@property (nonatomic) int channel;
@property (retain, nonatomic) NSString *format;
@property (nonatomic) int bitrate;
@property (nonatomic) int decoderLength;

- (void)dealloc;

@end

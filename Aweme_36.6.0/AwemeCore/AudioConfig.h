@class NSString;

@interface AudioConfig : NSObject

@property (nonatomic) int sampleRate;
@property (nonatomic) int channel;
@property (retain, nonatomic) NSString *format;
@property (nonatomic) int bitRate;

- (void)dealloc;

@end

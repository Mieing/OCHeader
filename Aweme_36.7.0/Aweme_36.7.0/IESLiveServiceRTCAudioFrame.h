@class NSData;

@interface IESLiveServiceRTCAudioFrame : NSObject

@property (retain, nonatomic) NSData *buffer;
@property (nonatomic) int samples;
@property (nonatomic) int channel;
@property (nonatomic) int sampleRate;

- (void).cxx_destruct;

@end

@class NSData;

@interface HTSFormatAudioFrame : NSObject

@property (retain, nonatomic) NSData *buffer;
@property (nonatomic) int samples;
@property (nonatomic) long long channel;
@property (nonatomic) long long sampleRate;

- (void).cxx_destruct;
- (double)getDuration;
- (int)getVolume;

@end

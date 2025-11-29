@interface TPAudioFrameBuffer : NSObject

@property (nonatomic) char **data;
@property (nonatomic) int *size;
@property (nonatomic) unsigned int sampleRate;
@property (nonatomic) unsigned long long channelLayout;
@property (nonatomic) long long format;
@property (nonatomic) long long ptsMs;
@property (nonatomic) int nbSamples;
@property (nonatomic) int channels;
@property (nonatomic) int trackID;
@property (nonatomic) int flags;

@end

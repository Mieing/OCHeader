@interface DeviceAudioParam : WXPBGeneratedMessage

@property (nonatomic) unsigned int sampleRate;
@property (nonatomic) unsigned int sampleLenInms;
@property (nonatomic) unsigned int channels;
@property (nonatomic) int sourceMode;
@property (nonatomic) int phoneMode;
@property (nonatomic) int speakerMode;
@property (nonatomic) int phoneStreamtype;
@property (nonatomic) int speakerStreamtype;
@property (nonatomic) int voipStreamtype;
@property (nonatomic) int playSampleRate;
@property (nonatomic) int playSampleLenInms;
@property (nonatomic) int playChannnels;
@property (nonatomic) int payloadType;

+ (void)initialize;

@end

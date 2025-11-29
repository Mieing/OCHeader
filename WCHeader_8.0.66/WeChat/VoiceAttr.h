@interface VoiceAttr : WXPBGeneratedMessage

@property (nonatomic) int fileType;
@property (nonatomic) int encodeType;
@property (nonatomic) int sampleRate;
@property (nonatomic) int bitsPerSample;

+ (void)initialize;

@end

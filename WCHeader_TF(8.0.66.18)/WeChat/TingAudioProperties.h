@class NSString;

@interface TingAudioProperties : WXPBGeneratedMessage

@property (nonatomic) unsigned int sampleRate;
@property (nonatomic) unsigned int channels;
@property (retain, nonatomic) NSString *codecId;
@property (nonatomic) unsigned int bitRate;
@property (nonatomic) float duration;

+ (void)initialize;

@end

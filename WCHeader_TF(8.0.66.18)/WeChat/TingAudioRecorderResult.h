@class NSString;

@interface TingAudioRecorderResult : WXPBGeneratedMessage

@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *voiceFilePath;
@property (nonatomic) int voiceDuration;

+ (void)initialize;

@end

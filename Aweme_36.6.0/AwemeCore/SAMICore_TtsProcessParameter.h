@interface SAMICore_TtsProcessParameter : NSObject

@property (nonatomic) const char *speaker;
@property (nonatomic) const char *textType;
@property (nonatomic) const char *text;
@property (nonatomic) BOOL enableConcurrency;
@property (nonatomic) BOOL enableSentenceSeg;
@property (nonatomic) int sampleRate;
@property (nonatomic) long long timestamp;
@property (nonatomic) BOOL enablePlaying;
@property (nonatomic) BOOL enableSaveAudioToFile;
@property (nonatomic) BOOL enableTextSeg;
@property (nonatomic) const char *emotion;
@property (nonatomic) float emotionScale;

@end

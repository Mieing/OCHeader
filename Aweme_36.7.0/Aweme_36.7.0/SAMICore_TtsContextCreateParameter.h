@protocol SAMICoreCallbackListener;

@interface SAMICore_TtsContextCreateParameter : NSObject

@property (nonatomic) const char *url;
@property (nonatomic) const char *appKey;
@property (nonatomic) const char *header;
@property (nonatomic) const char *taskId;
@property (nonatomic) const char *sessionId;
@property (nonatomic) int connectTimeout;
@property (nonatomic) long long tokenType;
@property (nonatomic) const char *token;
@property (nonatomic) const char *speaker;
@property (nonatomic) const char *format;
@property (nonatomic) const char *textType;
@property (nonatomic) const char *text;
@property (nonatomic) BOOL enableConcurrency;
@property (nonatomic) BOOL enableSentenceSeg;
@property (nonatomic) long long timestamp;
@property (nonatomic) int sampleRate;
@property (nonatomic) int speechRate;
@property (nonatomic) int pitchRate;
@property (nonatomic) BOOL enableTimestamp;
@property (nonatomic) int silenceDuration;
@property (nonatomic) BOOL enableNetTransportCompress;
@property (nonatomic) int bitRate;
@property (nonatomic) BOOL enableSaveAudioToFile;
@property (nonatomic) const char *saveFileDir;
@property (nonatomic) BOOL enable_split;
@property (nonatomic) const char *extra;
@property (nonatomic) BOOL enableAudio2Bs;
@property (nonatomic) const char *internal;
@property (nonatomic) BOOL enableTextSeg;
@property (nonatomic) const char *emotion;
@property (nonatomic) float emotionScale;
@property (nonatomic) BOOL reuseAudioSession;
@property (retain, nonatomic) id<SAMICoreCallbackListener> listener;

- (void)dealloc;

@end

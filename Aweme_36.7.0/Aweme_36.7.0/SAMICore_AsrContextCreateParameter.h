@class NSArray;
@protocol SAMICoreCallbackListener;

@interface SAMICore_AsrContextCreateParameter : NSObject

@property (nonatomic) const char *url;
@property (nonatomic) const char *appKey;
@property (nonatomic) const char *header;
@property (nonatomic) const char *taskId;
@property (nonatomic) const char *sessionId;
@property (nonatomic) long long tokenType;
@property (nonatomic) const char *token;
@property (nonatomic) const char *format;
@property (nonatomic) int sampleRate;
@property (nonatomic) int maxBlockSize;
@property (nonatomic) int channel;
@property (nonatomic) const char *language;
@property (nonatomic) const char *extra;
@property (nonatomic) const char *model;
@property (nonatomic) int sos_silence_timeout;
@property (nonatomic) int eos_silence_timeout;
@property (nonatomic) int sentence_max_time;
@property (nonatomic) int enable_punctuation;
@property (nonatomic) int enable_speaker_diarization;
@property (nonatomic) long long timestamp;
@property (nonatomic) int connect_timeout;
@property (nonatomic) int enable_audio_cache;
@property (nonatomic) int audio_cache_size;
@property (nonatomic) int enable_remove_first_audio_data;
@property (nonatomic) int enable_net_transport_compress;
@property (retain, nonatomic) id<SAMICoreCallbackListener> listener;
@property (nonatomic) const char *businessInfo;
@property (nonatomic) long long audio_src;
@property (nonatomic) int retry_count;
@property (nonatomic) int retry_mode;
@property (retain, nonatomic) NSArray *retry_interval_time_ms;
@property (nonatomic) int finish_wait_timeout;
@property (nonatomic) int max_buffer_count;

- (void)dealloc;

@end

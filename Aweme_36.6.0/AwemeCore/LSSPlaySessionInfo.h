@class NSString, NSMutableArray;

@interface LSSPlaySessionInfo : NSObject

@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) int stallTotalCount;
@property (nonatomic) int retryTotalCount;
@property (nonatomic) long long stopTimestamp;
@property (retain, nonatomic) NSString *TAG;
@property (nonatomic) BOOL isValid;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) long long playTime;
@property (nonatomic) long long downloadSpeed;
@property (retain, nonatomic) NSString *network;
@property (retain, nonatomic) NSString *update;
@property (retain, nonatomic) NSString *create;
@property (nonatomic) long long firstFrameAudioBuffer;
@property (nonatomic) long long firstFrameVideoBuffer;
@property (nonatomic) long long firstFrameDownloadSpeed;
@property (nonatomic) long long firstFrame;
@property (nonatomic) int success;
@property (nonatomic) int m302;
@property (nonatomic) int connectCost;
@property (nonatomic) int stallType;
@property (nonatomic) long long stallTime;
@property (nonatomic) long long startTs;
@property (nonatomic) long long stallTotalTime;
@property (nonatomic) long long endTs;
@property (nonatomic) long long duration;
@property (nonatomic) int bitrate;
@property (retain, nonatomic) NSString *neptuneName;
@property (nonatomic) double fps;
@property (nonatomic) int gop;
@property (nonatomic) int sampleRate;
@property (nonatomic) int channel;
@property (nonatomic) int height;
@property (nonatomic) int width;
@property (retain, nonatomic) NSString *streamSuffix;
@property (retain, nonatomic) NSString *protocol;
@property (nonatomic) long long videoBuffer;
@property (nonatomic) long long audioBuffer;
@property (copy, nonatomic) NSMutableArray *stallSeries;
@property (copy, nonatomic) NSMutableArray *renderAudioSeries;
@property (copy, nonatomic) NSMutableArray *renderVideoSeries;
@property (copy, nonatomic) NSMutableArray *videoBufferList;
@property (copy, nonatomic) NSMutableArray *audioBufferList;
@property (copy, nonatomic) NSMutableArray *bitrateList;
@property (nonatomic) long long DTS;
@property (nonatomic) long long PTS;

- (id)getValue:(id)a0 defaultValue:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

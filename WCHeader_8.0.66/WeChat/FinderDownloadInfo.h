@class NSString, NSMutableArray, DownloadSpeed;

@interface FinderDownloadInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long feedId;
@property (nonatomic) unsigned int pageIndex;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int preloadBytes;
@property (nonatomic) unsigned int downloadedBytes;
@property (nonatomic) unsigned int fileBytes;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int totalPlayTimeMs;
@property (nonatomic) unsigned int totalWaitTimeMs;
@property (nonatomic) unsigned int downloadSpeedKbps;
@property (retain, nonatomic) NSMutableArray *waitDetails;
@property (nonatomic) unsigned int stopplayTimestamp;
@property (nonatomic) unsigned int playPosition;
@property (nonatomic) unsigned int firstLoadTimeMs;
@property (retain, nonatomic) NSString *codingFormat;
@property (nonatomic) unsigned long long preloadStrategyId;
@property (nonatomic) unsigned int rttMs;
@property (nonatomic) unsigned int networkId;
@property (retain, nonatomic) NSString *svrIp;
@property (nonatomic) unsigned int svrPort;
@property (retain, nonatomic) NSString *fileFormat;
@property (nonatomic) unsigned long long megaVideoId;
@property (nonatomic) unsigned int playCount;
@property (retain, nonatomic) DownloadSpeed *downloadSpeed;
@property (nonatomic) unsigned int preloadMaxBitRate;
@property (retain, nonatomic) NSString *requestFormat;
@property (nonatomic) unsigned long long durationMs;
@property (nonatomic) unsigned int position;
@property (nonatomic) unsigned long long totalDownloadedBytes;
@property (nonatomic) unsigned long long bufferLengthMs;
@property (nonatomic) unsigned int fps;
@property (nonatomic) unsigned int playerFps;

+ (void)initialize;

@end

@class NSString, NSMutableArray, NSData;

@interface FinderLiveQoSInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int videoFps;
@property (nonatomic) unsigned int videoGop;
@property (nonatomic) unsigned int videoBitrate;
@property (nonatomic) unsigned int audioBitrate;
@property (nonatomic) unsigned int netSpeed;
@property (nonatomic) unsigned int videoCache;
@property (nonatomic) unsigned int audioCache;
@property (nonatomic) unsigned int videoSumCacheSize;
@property (nonatomic) unsigned int audioVideoPlayInterval;
@property (nonatomic) unsigned int audioVideoRecvInterval;
@property (nonatomic) unsigned int audioCacheThreshold;
@property (nonatomic) unsigned int netJitter;
@property (nonatomic) unsigned int qualityLevel;
@property (nonatomic) unsigned int totalPlayTimeMs;
@property (nonatomic) unsigned int totalWaitTimeMs;
@property (retain, nonatomic) NSMutableArray *waitDetails;
@property (nonatomic) unsigned int liveStartPlayTimeSec;
@property (nonatomic) unsigned int firstFrameTimeMs;
@property (nonatomic) unsigned int connectMs;
@property (nonatomic) unsigned int rttMs;
@property (nonatomic) unsigned int networkId;
@property (retain, nonatomic) NSString *cdnSvrIp;
@property (nonatomic) unsigned int cdnSvrPort;
@property (nonatomic) float cpuUsageProcess;
@property (nonatomic) float cpuUsageDevice;
@property (nonatomic) float trtcUpLoss;
@property (nonatomic) float trtcDownLoss;
@property (retain, nonatomic) NSData *extBuf;
@property (retain, nonatomic) NSString *tagName;
@property (nonatomic) unsigned int videoTagType;
@property (nonatomic) unsigned int videoDecCacheSize;

+ (void)initialize;

@end

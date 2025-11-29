@class NSString;

@interface MMLivePlayReportStruct : NSObject

@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int videoFps;
@property (nonatomic) unsigned int VideoGop;
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
@property (retain, nonatomic) NSString *waitDetails;
@property (nonatomic) unsigned int liveStartPlayTimeSec;
@property (nonatomic) unsigned int firstFrameTimeMs;
@property (nonatomic) unsigned int connectMs;
@property (nonatomic) unsigned int rttMs;
@property (nonatomic) unsigned int networkId;
@property (retain, nonatomic) NSString *cdnSvrIp;
@property (nonatomic) unsigned int cdnSvrPort;
@property (nonatomic) float cpuUsageProcess;
@property (nonatomic) float cpuUsageDevice;
@property (nonatomic) unsigned int bufferCount;
@property (nonatomic) unsigned int regainAvgTime;
@property (nonatomic) unsigned int peakVideoBitrate;
@property (nonatomic) unsigned int valleyVideoBitrate;
@property (nonatomic) unsigned int peakAudioBitrate;
@property (nonatomic) unsigned int valleyAudioBitrate;
@property (nonatomic) unsigned int exitWithoutPlay;
@property (nonatomic) unsigned int reportType;
@property (nonatomic) unsigned int reportInterval;
@property (nonatomic) unsigned int liveProtocol;
@property (nonatomic) unsigned int videoFormat;
@property (nonatomic) unsigned int netType;
@property (nonatomic) unsigned int role;

- (void).cxx_destruct;

@end

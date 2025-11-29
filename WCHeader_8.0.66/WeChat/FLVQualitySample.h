@interface FLVQualitySample : NSObject

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
@property (nonatomic) unsigned int videoDecCacheSize;
@property (nonatomic) unsigned int videoSumCacheSize;
@property (nonatomic) unsigned int audioVideoPlayInterval;
@property (nonatomic) unsigned int audioVideoRecvInterval;
@property (nonatomic) unsigned int audioCacheThreshold;
@property (nonatomic) unsigned int netJitter;
@property (nonatomic) float cpuUsageProcess;
@property (nonatomic) float cpuUsageDevice;
@property (nonatomic) unsigned int videoQualityLevel;
@property (nonatomic) unsigned int blockCnt;
@property (nonatomic) unsigned int updateTime;

@end

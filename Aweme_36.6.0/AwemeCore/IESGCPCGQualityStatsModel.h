@interface IESGCPCGQualityStatsModel : NSObject <NSCopying>

@property (nonatomic) unsigned long long fps;
@property (nonatomic) unsigned long long showDelay;
@property (nonatomic) unsigned long long rxKBps;
@property (nonatomic) float videoLossRate;
@property (nonatomic) float audioLossRate;
@property (nonatomic) unsigned long long blockCount;
@property (nonatomic) unsigned long long blockDuration;
@property (nonatomic) unsigned long long blockStatisticDuration;
@property (nonatomic) long long codecType;
@property (nonatomic) long long networkQuality;
@property (nonatomic) unsigned long long jitter;
@property (nonatomic) unsigned long long videoJitter;
@property (nonatomic) unsigned long long audioJitter;
@property (nonatomic) float receivedVideoKbps;
@property (nonatomic) float receivedAudioKbps;
@property (nonatomic) long long videoDecodeFrameRate;
@property (nonatomic) long long videoWidth;
@property (nonatomic) long long videoHeight;
@property (nonatomic) long long videoRTT;
@property (nonatomic) long long audioRTT;
@property (nonatomic) long long txCellularKBitrate;
@property (nonatomic) long long rxCellularKBitrate;
@property (nonatomic, getter=isBackground) BOOL background;
@property (nonatomic, getter=isUsedWiFi) BOOL usedWiFi;

- (id)initWithXPlayQualityStats:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

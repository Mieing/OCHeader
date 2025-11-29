@class NSString;

@interface XPlayQualityStatsModel : NSObject <XPLayQualityStats, NSCopying>

@property (nonatomic, getter=isBackground) BOOL background;
@property (nonatomic, getter=isUsedWiFi) BOOL usedWiFi;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

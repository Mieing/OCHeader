@interface IESLiveKTVLyricRecognitionConfig : NSObject

@property (nonatomic) double anchorDelayTime;
@property (nonatomic) float originThreshold;
@property (nonatomic) float remakeThreshold;
@property (nonatomic) float remakeThresholdV2;
@property (nonatomic) float checkInterval;
@property (nonatomic) double cacheDuration;
@property (nonatomic) int aedDetectionTime;
@property (nonatomic) int aedEnterCount;
@property (nonatomic) int aedQuitCount;
@property (nonatomic) float seiInterval;
@property (nonatomic) int aedDurationTime;
@property (nonatomic) BOOL enableGuestStream;
@property (nonatomic) BOOL disableAnchorStream;

- (long long)currentAudioType;

@end

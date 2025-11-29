@interface TVLPlayerItemAccessLogStallEvent : TVLPlayerItemLogEvent

@property (nonatomic, getter=isHappenedBeforeFirstFrame) BOOL happenedBeforeFirstFrame;
@property (nonatomic, getter=isHappenedInPreview) BOOL happenedInPreview;
@property (nonatomic, getter=hasEndedBeforeStop) BOOL endedBeforeStop;
@property (nonatomic) long long reason;
@property (nonatomic) long long endReason;
@property (nonatomic) long long startAudioBufferLength;
@property (nonatomic) long long startVideoBufferLength;
@property (nonatomic) long long endAudioBufferLength;
@property (nonatomic) long long endVideoBufferLength;
@property (nonatomic) long long subScene;
@property (nonatomic) long long seiVersion;
@property (nonatomic) BOOL happendInAbrSwitch;

- (id)init;

@end

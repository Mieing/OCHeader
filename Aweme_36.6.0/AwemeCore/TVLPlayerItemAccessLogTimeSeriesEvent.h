@interface TVLPlayerItemAccessLogTimeSeriesEvent : TVLPlayerItemLogEvent

@property (nonatomic) long long audioBufferDuration;
@property (nonatomic) long long renderingFrameRate;
@property (nonatomic) long long pullingBitrate;
@property (nonatomic) long long pushingFrameRate;
@property (nonatomic) long long pushingBitrate;

- (id)init;

@end

@interface TVLPlayerItemAccessLogPushRenderStallEvent : TVLPlayerItemAccessLogPushStallEvent

@property (nonatomic) long long audioCaptureStallTime;
@property (nonatomic) long long videoCaptureStallTime;
@property (nonatomic) long long videoDropStallTime;

- (id)initWithSeiInfo:(long long)a0 videoSendStallTime:(long long)a1 durationSinceFirstFrame:(long long)a2 seiSource:(id)a3;
- (void)initRenderStallTime:(long long)a0 videoCaptureStallTime:(long long)a1 videoDropStallTime:(long long)a2;

@end

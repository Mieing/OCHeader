@class NSString, NSArray;

@interface TVLPlayerItemAccessLogPushStallEvent : TVLPlayerItemAccessLogStallEvent

@property (nonatomic) long long audioSendStallTime;
@property (nonatomic) long long videoSendStallTime;
@property (nonatomic) long long durationSinceFirstFrame;
@property (copy, nonatomic) NSString *seiSource;
@property (copy, nonatomic) NSArray *pushRetryArray;

- (id)initWithSeiInfo:(long long)a0 videoSendStallTime:(long long)a1 durationSinceFirstFrame:(long long)a2 seiSource:(id)a3;
- (long long)getRetryTime;
- (long long)getRetryCode;
- (void).cxx_destruct;

@end
